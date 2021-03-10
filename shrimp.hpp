#ifndef __SHRIMP_HPP__
#define __SHRIMP_HPP__

class PistolShrimp : public Character
{
    string name = " Shrimp";
    int hp = 10;
    string block = "Harden";
    string armor = "forbidden shell";
    string attack = "death claw";
    string cc = "bubbles";

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

	~PistolShrimp(){};
};

#endif //__PISTOLSHRIMP_HPP__
