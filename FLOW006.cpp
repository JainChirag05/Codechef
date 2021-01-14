#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int m;
        int sum = 0;
        while(n>0)
        {
            m = n%10;
            sum += m;
            n = n/10;
        }

        cout << sum << endl;
    }
}