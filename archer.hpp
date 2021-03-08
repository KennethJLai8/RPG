#ifndef __FORBIDDEN_ARCHER_HPP__
#define __FORBIDDEN_ARCHER_HPP__

#include "character.hpp"
#include <string>
using namespace std;

class ForbiddenArcher : public Character
{
    string name = "Arthur";
    int hp = 5;//hard
    string block = "dodge";
    string armor = "Brigandine";
    string attack = "Piercing Arrow";
    string cc = "Scatter Arrow";

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

#endif //__FORBIDDEN_ARCHER_HPP__

