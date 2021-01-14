#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int t,n;

    cin >> t;

    while(t--)
    {
        cin >> n;
        int x = sqrt(n);
        cout << round(x) << endl;
    }

}