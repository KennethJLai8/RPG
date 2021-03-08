#ifndef __CC_HPP__
#define __CC_HPP__

#include <iostream>
#include "EMS.hpp"
#include "character.hpp"

class CC : public EMS
{
  Character* villain;

  CC(Character* villain)
  {
    this->villain = villain;
  }

  std::string ems()
  {
    cout << villain->name << " uses " << villain->cc;
  }
};

#endif //__CC_HPP__
