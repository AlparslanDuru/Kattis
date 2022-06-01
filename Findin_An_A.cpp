#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
  string s;
  cin >> s;

  for (int i=0; i<s.size(); i++)
  {
    if (s[i] == 'a')
    {
      cout << s[i];
      
      for (int j=i+1; j<s.size(); j++)
      {
        cout << s[j];
      }
      
      return 0;
    }
    
  }
  
}
