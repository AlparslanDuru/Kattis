#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int reversedNumber = 0, remainder1;
    while(num != 0) {
        remainder1 = num%10;
        reversedNumber = reversedNumber*10 + remainder1;
        num /= 10;
    }
    return reversedNumber;
}

int main()
{
    int x, y;
    cin >> x >> y;
    
    int reverse1, reverse2;
    reverse1 = reverseNumber(x);
    reverse2 = reverseNumber(y);
    if(reverse1 > reverse2)
        cout << reverse1;
    else
        cout << reverse2;
    return 0;
}
