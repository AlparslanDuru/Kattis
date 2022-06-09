#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cin >> s;
  
  int counter=0;
  
  for (int i=0; i<s.size(); i++)
  {
    if (s[0] && counter==0)
    {
      cout << s[0];
      counter++;
    }
    
    if (s[i] == '-')
    {
      cout << s[i+1];
    }
  }
  
}
