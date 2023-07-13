#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    int indexi = 0;
    int indexj = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
        }
        cout << "SUM OF INDEX FROM " << i << " TO " << n << " IS : " << sum << endl;
        sum = 0;
    }
}