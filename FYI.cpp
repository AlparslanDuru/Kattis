#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n>=1000000 && n<=9999999){
        if(n/10000 == 555){
            cout << "1";
        }
        else
            cout << "0";
    }
    return 0;
}
