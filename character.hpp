#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>

using namespace std;

class Character {
private:
string name;
int hp;
string armor;
int attack;
int crowd_control;

public:

Character();

int setHp();
//int setArmor();
int setAttack();
int crowd_control();


int getHp();
//int getArmor();
int getAttack;
int getCrowdControl;

};

#endif
