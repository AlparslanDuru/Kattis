#include <iostream>
using namespace std;

int main()
{
  int n, r, e, c, total;
  
  cin >> n;
  
  for (int i=0; i<n; i++)
  {
    cin >> r >> e >> c;
    
    if (r+c < e)
      cout << "Advertise" << endl;
    else if (r+c == e)
      cout << "Does not matter" << endl;
    else
      cout << "Do not Advertise" << endl;
  }
  
}
