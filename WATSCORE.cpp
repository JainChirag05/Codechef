#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        int arr[8] = {0};
        while(n--)
        {
            int q,s;
            cin >> q >> s;
            if ( q <= 8)
            {
                if(s>arr[q-1])
                {
                    arr[q-1] = s;
                }
            }
        }
        int result=0;
        for (int i=0;i<8;i++)
        {
            result += arr[i];
        }
        cout << result << endl;
    }

    return 0;

}