#ifndef RIVAL_H
#define RIVAL_H


class Rival: public Player // inherits from Player class
{
    // class members
    public:
        Rival();
        Rival(int *rivHealth, string cAttack);
        ~Rival();
        int levelChange(char pLevel, char pChoice);
        void doCustomAttack();
        int getRivalAttackType();
        int getRivalHealth();

    private:
        int *rivalHealth;
        string custAttack;
        int rivCounter;
        bool attackBool;
};

#endif // RIVAL_H