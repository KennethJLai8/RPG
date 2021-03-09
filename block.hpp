#ifndef __BLOCK_HPP__
#define __BLOCK_HPP__

#include <iostream>
#include "EMS.hpp"
#include <string>
#include "character.hpp"
using namespace std;

class Block : public EMS
{
  public:
  
  Character* villain;

  Block(Character* villain)
  {
    this->villain = villain;
  }

  std::string ems() const
  {
    return villain->get_name() + " uses " + villain->get_block();
  }

};

#endif //__BLOCK_HPP__
