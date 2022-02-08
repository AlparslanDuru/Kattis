#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >>  a >> b;
    if((a>=0 && a<=1000000) && (b>=0 && b<=1000000)){
    if(a<b){
      cout << a << " " << b;  
    }
    else
        cout << b << " " << a;
    }
    return 0;
}
