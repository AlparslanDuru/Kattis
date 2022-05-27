#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str, hiss = "no hiss";
  cin >> str;
  
  for (int i=0; i<str.size()-1; i++)
  {
    if (str[i] == 's' && str[i+1] == 's')
    {
      hiss = "hiss";
    }
  }
  
  cout << hiss << endl;
}
