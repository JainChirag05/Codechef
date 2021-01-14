#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        long long int factorial = 1;
        for(int i=n;i>0;i--)
        {
            factorial = factorial*i;
        }

        cout << factorial << endl;
    }
}