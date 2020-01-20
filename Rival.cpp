#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Player.h"
#include "Rival.h"
#include "Menu.h"

using namespace std;

Rival::Rival()
{
    //ctor
}

Rival::~Rival()
{
    //dtor
}

Rival::Rival(int *rHealth, string cAttack)
{
    rivalHealth = rHealth;
    custAttack = cAttack;
    attackBool = true;
    rivCounter = 0;
}

int Rival::getRivalHealth()
{
    return *rivalHealth;
}




//different level
int Rival::levelChange(char myLevel, char myChoice){

     switch(myChoice){
        // for attack 1
        case '1':
            // change in health according to chosen level
            if (myLevel == 'E' || myLevel == 'e'){
                if (playerReward == 'B' || playerReward == 'b'){
                    *rivalHealth -= 19;
                }
                else{
                    *rivalHealth -= 15;
                }
            }

            else if (myLevel == 'M' || myLevel == 'm'){
                if (playerReward == 'B' || playerReward == 'b'){
                    *rivalHealth -= 13;
                }
                else{
                    *rivalHealth -= 11;
                }
            }
            else if (myLevel == 'H' || myLevel == 'h'){
                if (playerReward == 'B' || playerReward == 'b'){
                    *rivalHealth -= 9;
                }
                else{
                    *rivalHealth -=7;
                }
            }

            break;

        // attack 2
        case '2':

            if (myLevel == 'E' || myLevel == 'e'){
                if (playerReward == 'B' || playerReward == 'b'){
                    *rivalHealth -= 33;
                }
                else{
                    *rivalHealth -= 31;
                }
            }

            else if (myLevel == 'M' || myLevel == 'm'){
                if (playerReward == 'B' || playerReward == 'b'){
                    *rivalHealth -= 27;
                }
                else{
                    *rivalHealth -=25;
                }
            }
            else if (myLevel == 'H' || myLevel == 'h'){
                if (playerReward == 'B' || playerReward == 'b'){
                    *rivalHealth -= 17;
                }
                else{
                    *rivalHealth -= 15;
                }
            }
            break;

        // attack 3
        case '3':
            if (myLevel == 'E' || myLevel == 'e'){
                if (playerReward == 'B' || playerReward == 'b'){
                    *rivalHealth -= 7;
                }
                else{
                    *rivalHealth -= 5;
                }
            }

            else if (myLevel == 'M' || myLevel == 'm'){
                if (playerReward == 'B' || playerReward == 'b'){
                    *rivalHealth -= 5;
                }
                else{
                    *rivalHealth -= 3;
                }
            }
            else if (myLevel == 'H' || myLevel == 'h'){
                if (playerReward == 'B' || playerReward == 'b'){
                    *rivalHealth -= 2;
                }
                else{
                    *rivalHealth -= 1;
                }
            }
            break;

    }

    return 0;
}

void Rival::doCustomAttack(){
        srand(time(0));
        int chance = rand() % 10;

        if ((chance == 7) && (attackBool)){
            *rivalHealth -= 31;
            cout << "\nYou have gotten a sudden burst of energy and";
            cout << " your custom attack, " << custAttack << ", has been applied! " << endl;
            cout << "Rival's health has dropped to: " << *rivalHealth << endl;
            cout << endl;
            attackBool = false;

        }


}