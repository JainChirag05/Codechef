#include <bits/stdc++.h>

using namespace std;

void solution()
{
    long long int n,k,d,sum=0,temp;
    cin >> n >> k >> d;

    for(long long int i=0; i < n;i++)
    {
        cin >> temp;
        sum += temp;
    }
    if ((sum/k) <= d)
    {
        cout << (sum/k) << endl;
    }
    else
    {
        cout << d << endl;
    }
    
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solution();    
    }

    return 0;
}