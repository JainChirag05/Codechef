#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int d,n;
        int sum = 0;
        cin >> d >> n;
        while(d--)
        {
            sum = (n*(n+1)/2);
            n = sum;
        }
        cout << sum << endl;
    }
}