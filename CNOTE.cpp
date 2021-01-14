#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,k,n;
        cin >> x >> y >> k >> n;
        int page , price;
        int flag = 0;
        while(n--)
        {
            cin >> page >> price;
            if (page >= (x-y) && (price <= k))
            {
                flag++;
            }
        }            
        if(flag >= 1)
        {
            cout << "LuckyChef" << endl;
        }
        else
        {
            cout << "UnluckyChef" << endl;
        }      
            
    }
}