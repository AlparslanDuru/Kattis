#include <iostream>
using namespace std;

int main()
{
  int n, k=0, counter=0;
  cin >> n;
  
  for (int i=0; i<n; i++)
  {
    cin >> k;
    if (k < 0)
    {
      counter -= k;
    }
  }
  
  cout << counter;
}
