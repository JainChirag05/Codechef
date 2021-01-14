#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,p,h;
    cin >> t;

    while(t--)
    {
        cin >> h >> p;
        while(p>0 && h > 0)
        {
            h = h - p;
            p = p/2;
        }
        if (p == 0 && h>0)
        {
            cout << 0 << endl;
        }
        else if (p > 0 && h <= 0)
        {
            cout << 1 << endl;
        }
        
    }

    return 0;
}