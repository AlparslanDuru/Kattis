#include <iostream>
using namespace std;

int main()
{
    int a; 
    double b, c, counter;
    cin >> a;
    
    for (int i=0; i<a; i++)
    {
        cin >> b >> c;
        counter += b * c;
    }
    cout << counter;
}
