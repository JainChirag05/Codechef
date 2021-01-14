#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string S;
        int count = 0;
        cin >> S;
        for(int i = 0;i < S.length()-1;i++)
        {
            if((S[i] == 'x' && S[i+1] == 'y') ||  (S[i] == 'y' && S[i+1] == 'x'))
            {
                count++;
                i++;
            }
        }

        cout << count << endl;
    }
}