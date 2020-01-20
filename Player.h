#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player
{
    // class members
    public:
        Player();
        ~Player();
        void rivalAttacksPlayer();
        Player(int *pHealth, char pReward);
        int getRivalAttackType();
        int getPlayerHealth();
        char playerReward;

    private:
        int *playerHealth;
        int randChoice;
        int plrCounter;

};

#endif // PLAYER_H