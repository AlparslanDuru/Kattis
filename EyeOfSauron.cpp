#include <iostream>
#include <array>
using namespace std;

int main()
{
  char arr[102];
  cin >> arr;
  int counter=0, counter2=0;
  
  for (int i=0; i<sizeof(arr)/sizeof(char); i++)
  {
    if (arr[i] == ')')
    {
      for (int j=i+1; j<sizeof(arr)/sizeof(char); j++)
        if (arr[j] == '|')
          counter2++;
      break;
    }
    
    else if (arr[i] == '|')
      counter++;
  }
  
  if (counter == counter2)
    cout << "Correct";
  else
    cout << "Fix";
}
