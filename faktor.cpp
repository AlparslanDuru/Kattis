#include <iostream>
using namespace std;

int main()
{
  int articles, impact_Factor, scientists;
  
  cin >> articles >> impact_Factor;
  
  scientists = articles * (impact_Factor - 1) + 1;
  
  cout << scientists;
}
