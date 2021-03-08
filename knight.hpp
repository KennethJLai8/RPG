#ifndef __FORBIDDEN_KNIGHT_HPP__
#define __FORBIDDEN_KNIGHT_HPP__

#include "character.hpp"
#include <string>
using namespace std;

class ForbiddenKnight : public Character
{
    string name = "Forbiddenator";
    int hp = 10;//easy
    string armor = "Dragon Scale Armor";
    string block = "Shield";
    string cc = "Charge";
    string attack = "Slice n Dice";

    string get_name()
    {
      return name;
    }

    int get_hp()
    {
      return hp;
    }

    string get_block()
    {
      return block;
    }

    string get_attack()
    {
      return attack;
    }

    string get_cc()
    {
      return cc;
    }

    
};

#endif
