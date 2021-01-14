#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,k,num;
    cin >> t >> k;
    int count = 0;

    while(t--)
    {
        cin >> num;
        if(num%k == 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}