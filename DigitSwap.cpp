#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int z;
    cin >> x;
    if(x>10 && x<100){
    if (x%10!=0){
        y = x%10;
        z = x/10;
    }
    cout << y << z;
    }
    return 0;
}
