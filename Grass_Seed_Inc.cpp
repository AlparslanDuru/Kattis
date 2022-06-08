#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double c, l, width, length, price=0;
  cin >> c >> l;
  
  for (int i=0; i<l; i++)
  {
    cin >> width >> length;
    price += width * length * c;
  }
  
  cout << fixed << setprecision(8) << price << endl;
}
