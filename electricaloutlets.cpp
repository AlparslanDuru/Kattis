#include <iostream>
using namespace std;

int main()
{
  int N, K, num, total=0, powered=0;
  cin >> N;
  int arr[N] = {};
  
  for (int i=0; i<N; i++)
  {
    cin >> K;
    for (int j=0; j<K; j++)
    {
      cin >> num;
      total += num;
    }
    powered = total - K + 1;
    arr[i] = powered;
    total = 0;
  }
  
  for (int values : arr)
  {
    cout << values << endl;
  }
}
