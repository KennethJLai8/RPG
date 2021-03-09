#ifndef __ATTACK_HPP__
#define __ATTACK_HPP__

#include <iostream>
#include "EMS.hpp"
#include <string>
#include "character.hpp"
using namespace std;

class Attack : public EMS {

  public:
  Character* villain;

  Attack(Character* villain)
  {
    this->villain = villain;
  }
  std::string ems() const
  {
    return villain->get_name() + " uses " + villain->get_attack();//return?
  }

};

#endif //__ATTACK_HPP__
