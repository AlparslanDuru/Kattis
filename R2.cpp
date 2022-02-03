#include <iostream>
using namespace std;

int main()
{
    int S, R1, R2;
    cin >>  R1 >> S;
    
    if((R1>-1000 && R1<1000) && (S>-1000 && S<1000)){
    R2 = (2*S) - R1;
    cout << R2;
    }
    return 0;
}
