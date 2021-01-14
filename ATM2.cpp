#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int arr[10000];
        int n,k;
        cin >> n >> k;
        for (int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(k>=arr[i])
            {
                cout << 1;
                k = k - arr[i];
            }
            else
            {
                cout << 0;
            }            
        }
        cout <<"\n";
    }
    return 0;


}