#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>

using namespace std;

class Character {
private:
string name;
int hp;
string armor; //what they're wearing
string attack; //description of attack
string crowd_control; //description of crowd control
string block; //description of block

public:

Character();

//setHp();
//int setArmor();
string setAttack();
string crowd_control();


//getHp();
//int getArmor();
string getAttack;
string getCrowdControl;

};

#endif
