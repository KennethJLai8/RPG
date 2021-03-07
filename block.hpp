#include <iostream>
#include "EMS.hpp"
using namespace std;



class Block:EMS
{

  Character* villain;
  Block(Character* villain)
  {
    this->villain = villain;
  }

    string ems()
    {
      cout << villain->name << " uses " << villain->block;
    }

}




