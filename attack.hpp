#ifndef __ATTACK_HPP__
#define __ATTACK_HPP__

#include <iostream>
#include "EMS.hpp"
#include "character.hpp"

class Attack : public EMS {
  Character* villain;

  Attack(Character* villain)
  {
    this->villain = villain;
  }
  std::string ems()
  {
    return villain->name + " uses " + villain->attack;//return?
  }

};

#endif //__ATTACK_HPP__
