#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n, width, height, hypothenus, num;
 
  cin >> n >> width >> height;
  
  hypothenus = sqrt (pow(width, 2) + pow(height, 2));
  for (int i=0; i<n; i++)
  {
    cin >> num;
    if (num <= hypothenus)
    cout << "DA\n";
    else
    cout << "NE\n";
  }
}
