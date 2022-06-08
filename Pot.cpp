#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int quantity, num, actualNum=0, actualExp=0, pointer=0, total=0;
    cin >> quantity;
    int arr[quantity];
    
    for (int i=0; i<quantity; i++)
    {
        cin >> num;
        actualExp = num % 10;
        actualNum = num / 10;
        pointer = pow(actualNum, actualExp);
        arr[i] = pointer;
        actualNum = 0;
        actualExp = 0;
        pointer = 0;
    }
    for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        total += arr[i];
    }
    cout << total;
}
