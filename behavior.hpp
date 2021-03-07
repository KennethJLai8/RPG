#include <iostream>
#include "EMS.hpp"




class behavior
{

EMS* move = nullptr;

void set_selection(EMS* move)
{
    delete move;
    move = new_move;
}

void print(std::ostream& out)
{
  out << EMS.ems(move) << endl;
}

}

#endif
