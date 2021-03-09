#ifndef __BEHAVIOR_HPP__
#define __BEHAVIOR_HPP__

#include <iostream>
#include "EMS.hpp"
using namespace std;

class Behavior {

  public:
  
  EMS* move = nullptr;
 

~Behavior()
{
    delete move;
}
 

  void set_selection(EMS* new_move)
  {
    delete move;
    move = new_move;
  }

  void print(std::ostream& out)
  {
    out << move->ems() << endl;
  }

};
 
#endif //__BEHAVIOR_HPP__
