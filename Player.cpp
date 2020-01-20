#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Player.h"
#include "Rival.h"
#include "Menu.h"

using namespace std;


Player::Player()
{
    //ctor
}

Player::Player(int *pHealth, char pReward){
    playerHealth = pHealth;
    playerReward = pReward;
    plrCounter = 0;
}

Player::~Player()
{
    //dtor
}

void Player::rivalAttacksPlayer(){
    // random generator
    randChoice = rand() % 3;

    //produces result according to conditions
    if (randChoice == 0){
        if (playerReward == 'A' || playerReward == 'a'){
            *playerHealth -= 10;
        }

        else{
            *playerHealth -= 15;
        }
    }

    else if (randChoice == 1){
        if (playerReward == 'A' || playerReward == 'a'){
            *playerHealth -= 29;
        }
        else{
            *playerHealth -= 31;
        }

    }

    else if (randChoice == 2){
        if (playerReward == 'A' || playerReward == 'a'){
            *playerHealth -= 3;
        }
        else{
            *playerHealth -= 5;
        }
    }
}

int Player::getRivalAttackType(){

    return randChoice;

}

int Player::getPlayerHealth(){
    return *playerHealth;
}





