#include <iostream>
using namespace std;

int natural(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = ans + i;
    }
    return ans;
}

int main()
{

    int n;
    cout << "ENMTER AN N NUMBER  :   ";
    cin >> n;

    int ans = natural(n);
    cout << ans;
}