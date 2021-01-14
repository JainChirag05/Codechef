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
        string S;
        cin >> S;
        int absent = 0;


        cin >> n;
        for(int i = 0; i < n;i++)
        {
            cin >> S[i];
            if(S[i] == '0')
            {
                absent++;
            }
                 
        }
        if(absent > 30)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        

    }
}