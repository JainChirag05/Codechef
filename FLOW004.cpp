#include <bits/stdc++.h>

using namespace std;

int firstDigit(int n)
{
    while (n>=10)
    {
        n = n/10;
    }
    return n;
}

int lastDigit(int n)
{
    return (n%10);
}

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << firstDigit(n)+lastDigit(n) << endl;
    }
}