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
string set_attack();
string set_cc();
string set_block();


//getHp();
//int getArmor();
string get_Attack();
string get_cc();
string get_block();
  
};

#endif
