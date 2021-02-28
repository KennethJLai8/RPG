#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>

using namespace std;

class Character {
private:
string name;
int hp;
string armor;
string attack;
string crowd_control;

public:

Character();

int setHp();
//int setArmor();
string setAttack();
string crowd_control();


int getHp();
//int getArmor();
string getAttack;
string getCrowdControl;

};

#endif
