#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,m;
    int john[n];
    int jack[m];
    cin >> t;

    while(t--)
    {
        int sum_john = 0;
        int sum_jack = 0;
        cin >> n >> m;

        for (int i=0;i < n;i++)
        {
            cin >> john[i];
        }
        for (int i=0;i < n;i++)
        {
            cin >> jack[i];
        }

        sort(john , john+n);

        sort(jack, jack + m, greater<int>());

        for(int i = 0; i < n; i++)
        {
            sum_john += john[i];
        }
        
        for(int i = 0; i < m; i++)
        {
            sum_jack += jack[i];
        }

        if(sum_john > sum_jack)
        {
            cout << 0 << endl;
        }
    }
}