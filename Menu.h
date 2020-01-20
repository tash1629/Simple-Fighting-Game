#ifndef MENU_H
#define MENU_H


class Menu
{
    // class members
    public:
        Menu();
        ~Menu();
        void openingMessage();
        void dispPlr();
        void dispOptions();
        void dispLevel();
        void dispSpecialAttack();
        void dispSpecialAttack_2();
        void dispReward();
        void dispRivalAttack_0();
        void dispRivalAttack_1();
        void dispRivalAttack_2();
        void attack1Pose();
        void attack2Pose();
        void attack3Pose();
        void winMessage();
        void lossMessage();
};

#endif // MENU_H