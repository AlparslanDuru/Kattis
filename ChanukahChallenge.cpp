#include <iostream>
#include <array>
using namespace std;

int main()
{
  int n, k, num, setNum, counter=0;
  
  cin >> n;
  cout << endl;
  
  int arr[n] = {0};

  for (int i=0; i<n; i++)
  {
    cin >> setNum >> k;
    
    for (int j=0; j<k; j++)
    {
    counter += j+2;
    }
    
    arr[i] = counter;
    counter = 0;
  }
  
  cout << endl;
  
  
  for (int i=0; i<n; i++)
  {
    cout << i+1 << " " << arr[i] << endl;
  }
  
}
