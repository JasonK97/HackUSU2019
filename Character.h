#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;
class Character
{
public:
    Character()
    {
        setHp(100);
        setProgress(0);
    }

    void setHp(int val)
    {
        this->hp = val;
    }
    int getHp() { return hp; }
    int loseHp()
    {
        hp -= 10;
        return hp;
    }

    void setProgress(int prog)
    {
        this->progress = prog;
    }
    int getProgress() { return progress; }
    int gainProgress()
    {
        progress += 10;
        return progress;
    }

    int countDie = 0;
    int countImCool = 0;
    std::string name;
    std::string quest;
    std::string favoriteColor;

    int hp = 100;
    int progress = 0;
};
#endif

//CHARACTER IMPLEMENTATION
/***********************************************************************************************************/

int changeHP(Character character)
{
    character.hp -= 10;
    return character.hp;
}

int changeProgress(Character character)
{
    character.progress += 10;
    return character.progress;
}
