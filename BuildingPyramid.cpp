#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int height=0, sides=1, counter=0, blocks;
  
  cin >> blocks;
  
  while (true)
  {
    blocks -= sides;

    if (blocks < 0)
    {
      break;
    }
    
    height+=2;
    sides = pow(height + 1, 2);
    counter++;
  }
  
  cout << counter << endl; 
}
