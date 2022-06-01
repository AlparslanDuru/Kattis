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
    
    if (s[0] == 'h' && s[s.size() - 1] == 'y')
    {
      for (int j=0; j<s.size(); j++)
      {
        if (s[j] == 'e')
        {
          counter++;
        }
      }
      
      counter *= 2;
      cout << "h";
      
      for (int i=0; i<counter; i++)
      {
        cout << 'e';
      }
      
      cout  << "y";
    }
    
    return 0;
  }
}
