#ifndef __FORBIDDENWIZARD_HPP__
#define __FORBIDDENWIZARD_HPP__

class ForbiddenWizard : public Character
{
    string name = "Merlin";
    int hp = 8;//medium
    string block = "barrier spell";
    string armor = "enchanted robe";
    string attack = "lightning spell";
    string cc = "levitate";

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

#endif //__FORBIDDENWIZARD_HPP__
