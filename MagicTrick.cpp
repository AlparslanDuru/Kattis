#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  cin >> str;
  
  for (int i=0; i<str.length(); i++)
  {
    for (int j=i+1; j<str.length(); j++)
    {
      if (str[i] == str[j])
      {
        cout << 0;
        exit(0);
      }
    }
  }
  
  cout << 1;
}
