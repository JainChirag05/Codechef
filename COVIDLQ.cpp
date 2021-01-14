#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int zero_count = 0;
        int check = 0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i] == 0)
            {
                zero_count++;
            }
        }
        if (zero_count != n)
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]==1)
                {
                    if(arr[i+1] == 1 || arr[i+2] == 1 || arr[i+3] == 1 || arr[i+4] == 1 || arr[i+5] == 1)
                    {
                        cout << "NO" << endl;
                        check++;
                        break;
                    }
                }
            }
            if (check == 0)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }        
        
    }
    return 0;
}