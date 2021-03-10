#ifndef __TROLL_HPP__
#define __TROLL_HPP__
#include "character.hpp"
#include <string>
using namespace std;

class GenericTroll : public Character
{
    string name = " Troll";
    int hp = 10;
    string armor = "forbidden cloak";
    string block = "Club";
    string attack = "rickroll";
    string cc = "trollstice";

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

	~GenericTroll(){}

};

#endif //__GENERICTROLL_HPP__
