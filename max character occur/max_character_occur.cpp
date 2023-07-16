#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

    string s = "dklfnnfkkeeeeldfnskdnf";
    string abc = "abcdefghijklmnopqrstuvwxyz";

    int count = 0;
    int prevcount = 0;
    char max = 'a';
    for (int i = 0; i <= 26; i++)
    {
        count = 0;
        for (int j = i; j <= 26; j++)
        {
            if (s[i] == abc[j])
            {
                count++;
            }
            if (prevcount < count)
            {
                prevcount = count;
                max = s[i];
            }
        }
    }

    cout<<max <<endl <<prevcount <<endl ;
}