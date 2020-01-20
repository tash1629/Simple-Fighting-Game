/*/ A Fighting Game Program /*/
/*/ By: Khulan Erdenetsogt & Rushnan Alam /*/
/*/ Date: 12/1/19 /*/ 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Player.h"
#include "Rival.h"
#include "Menu.h"

using namespace std;


int main(){

    // choose player var
    char userPlayer;

    // create menu object
    Menu menuObj;

    // display welcome messages
    menuObj.openingMessage();
    menuObj.dispPlr();
    cout << "Please choose your player." << endl;
    cout << "Enter A or B: ";
    cin >> userPlayer;

    // user input validation
    if (userPlayer != 'A' && userPlayer != 'a' && userPlayer != 'B' && userPlayer != 'b'){
        cout << "Invalid Input." << endl;
        cout << "Enter A or B: ";
        cin >> userPlayer;
    }

    // display options
    menuObj.dispOptions();
    
    // More main variables
    int playerTotalHealth = 100;
    int rivalTotalHealth = 100;

    int winCounter = 0;
    int lossCounter = 0;
    int sumWin = 0;
    int sumCurr;

    char level;

    string customAttack;

    bool mainLoop = true;
    char choice;
    char rewardChoice = 'C';
    char gameState;
    int gameNumber = 0;


    cout << "The game has started. Press Q to quit (when asked for attack choice)." << endl;

    // Some file handling
    ifstream fileObj5("winSave.txt");
    fileObj5 >> sumCurr;

    if (sumCurr < 5){
        cout << "Enter N for a new game or L to load an old game: ";
        cin >> gameState;

        // user input validation
        if (gameState != 'N' && gameState != 'n' && gameState != 'L' && gameState != 'l'){
            cout << "\nInvalid input." << endl;
            cout << "Enter N or L: ";
            cin >> gameState;
        }
    }
    else{
        cout << "You have used up your memory." << endl;
        cout << "Please start a new game." << endl;
        cout << "Enter N: ";
        cin >> gameState;
        if (gameState != 'N' || gameState != 'n'){
            cout << "\nInvalid input." << endl;
            cout << "Enter N: ";
            cin >> gameState;
        }
    }

    if((gameState == 'N') || (gameState == 'n')){
        ofstream fileObj2("WinLoss.txt");
        if (gameNumber > 1){
            winCounter = 0;
            lossCounter = 0;
        }
    }

    cout << endl;

    // get choice of level
    menuObj.dispLevel();
    cin >> level;

    // input validation
    if (level != 'E' && level != 'e' && level != 'M' && level != 'm' && level != 'H' && level != 'h'){
        cout << "Invalid input." << endl;
        menuObj.dispLevel();
        cin >> level;
    }

    cout << endl;
    cin.ignore();

    // get custom attack name
    menuObj.dispSpecialAttack();
    getline(cin, customAttack);

    cout << endl;

    // display some menu
    menuObj.dispSpecialAttack_2();

    // check if player gets reward
    if (gameState == 'N' || gameState == 'n'){
        sumCurr = 0;
    }

    if (sumCurr == 3){
        menuObj.dispReward();
            cin >> rewardChoice;

            if ((rewardChoice != 'A') && (rewardChoice != 'a') && (rewardChoice != 'B') && (rewardChoice != 'b')){
                cout << "Invalid input." << endl;
                cout << "Enter A for shield or B for sword: ";
                cin >> rewardChoice;
            }
            else if ((rewardChoice == 'A') || (rewardChoice == 'a')){
                cout << "\nShield Reward has been applied." << endl;
            }
            else if ((rewardChoice == 'B') || (rewardChoice == 'b')){
                cout << "Sword Reward has been applied." << endl;
            }
        }

    // game main loop
    while (mainLoop){

        // creating class objects
        Rival rObj(&rivalTotalHealth, customAttack);
        Player pObj(&playerTotalHealth, rewardChoice);


        // get player's choice of attack
        cout << "\nNow, enter the attack of your choice: ";
        cin >> choice;
        cout << endl;


        // check if player quits
        if ((choice == 'q') || (choice == 'Q')){
            cout << "Game Has Ended!!" << endl;
            break;
        }


        // calling the level change method (attacks rival)
        rObj.levelChange(level, choice);


        // check if game is still on (if player is alive)
        if (rObj.getRivalHealth() <= 0){
            cout << "GAME OVER. You have defeated your enemy!" << endl;
            menuObj.winMessage();
            winCounter++;
            break;
        }

        cout << "Rival's current health is: " << rObj.getRivalHealth() << endl;


        // calling rival attack method
        pObj.rivalAttacksPlayer();

        // check if game is still on (if player is alive)
        if (pObj.getPlayerHealth() <= 0){
            cout << "GAME OVER. You have been defeated!" << endl;
            menuObj.lossMessage();
            lossCounter++;
            break;
        }

        int rivalAttack = pObj.getRivalAttackType();

        // getting updated player health
        if (rivalAttack == 0){
            menuObj.dispRivalAttack_0();
            cout << pObj.getPlayerHealth() << endl;
            menuObj.attack1Pose();
        }

        else if (rivalAttack == 1){
            menuObj.dispRivalAttack_1();
            cout << pObj.getPlayerHealth() << endl;
            menuObj.attack2Pose();
        }

        else if (rivalAttack == 2){
            menuObj.dispRivalAttack_2();
            cout << pObj.getPlayerHealth() << endl;
            menuObj.attack3Pose();
        }

        // do custom attack on rival
        if (rObj.getRivalHealth() > 0){
            rObj.doCustomAttack();
        }

       // check if game is still on (if rival is alive)
       if (rObj.getRivalHealth() <= 0){
            cout << "GAME OVER. You have defeated your enemy!" << endl;
            menuObj.winMessage();
            winCounter++;
            break;
        }
    }

    // incrementing num of games played
    gameNumber++;



    // MORE FILE HANDLING


    // file system to save win & loss points
    if (gameState == 'L' || gameState == 'l'){
        ofstream fileObj("WinLoss.txt", ios_base::app);
        fileObj << winCounter << " " << lossCounter << " ";
        fileObj.close();
    }

    else if((gameState == 'N') || (gameState == 'n')){
        ofstream fileObj1("WinLoss.txt");
        if (gameNumber > 1){
            winCounter = 0;
            lossCounter = 0;
        }
        fileObj1 << winCounter << " " << lossCounter << " ";
        fileObj1.close();
    }

    // Retrieve info from file
    ifstream fileObj3("WinLoss.txt");

    int winCounterCurr;
    int lossCounterCurr;
    int i = 0;
    int winArr[10];
    int lossArr[10];

    while (fileObj3 >> winCounterCurr >> lossCounterCurr){
        winArr[i] = winCounterCurr;
        lossArr[i] = lossCounterCurr;
        i++;

    }

    // doing sum of wins
    for (int j=0; j<i; j++){
        sumWin = sumWin + winArr[j];
    }

    cout << endl;

    // save sumWin in a file
    ofstream fileObj4("winSave.txt");
    fileObj4 << sumWin;

    // close files
    fileObj3.close();
    fileObj4.close();
    
}