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
virtual string set_attack() = 0;
virtual string set_cc() = 0;
virtual string set_block() = 0;


//getHp();
//int getArmor();
virtual string get_Attack() = 0;
virtual string get_cc() = 0;
virtual string get_block() = 0;
  
};

#endif
