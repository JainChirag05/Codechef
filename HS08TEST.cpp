#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    float y;
    cin >> x >> y;
    if (x <= y-0.5 && x%5 == 0)
    {
        cout << fixed << setprecision(2)<< y-x-0.5 << endl;
    }
    else
    {
        cout << fixed << setprecision(2)<< y << endl;
    }
    
       
}