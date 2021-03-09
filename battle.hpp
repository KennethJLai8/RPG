#include<string>
using namespace std;





class Battle
{
public:

string outcome(int input, int randomizer)
{
  
if((input == 1 && randomizer == 2)||(input == 2 && randomizer == 3)||(input == 3 && randomizer == 1)) 
{
   return "v";//villain wins
}

else if((input == 1 && randomizer == 3)||(input == 2 && randomizer == 1)||(input == 3 && randomizer == 2)) 
{


   return "h";//hero wins
}
else if (input == randomizer)
{
  return "d";
}
else
{
  return "invalid";
}
}




};
