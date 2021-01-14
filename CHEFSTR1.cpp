#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    int arr[1111111];
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i =0; i < n;i++)
        {
            cin >>  arr[i];
        }

        long long int ans = 0;

        for(int i = 1;i<n;i++)
        {
            ans = ans + abs(arr[i] - arr[i-1]) - 1;
        }

        cout << ans << endl;
    }

    return 0;
}