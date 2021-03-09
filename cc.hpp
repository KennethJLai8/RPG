#ifndef __CC_HPP__
#define __CC_HPP__

#include <iostream>
#include "EMS.hpp"
#include "character.hpp"

class CC : public EMS
{
  public: 

  Character* villain;

  CC(Character* villain)
  {
    this->villain = villain;
  }

  std::string ems() const
  {
    return villain->get_name() + " uses " + villain->get_cc();
  }
};

#endif //__CC_HPP__

