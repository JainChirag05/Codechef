#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k;
    int op[100000];
    int fp[100000];
    cin >> t;

    while(t--)
    {
        int sum_op = 0;
        int sum_fp = 0;
        cin >> n >> k;
        for(int i = 0;i < n;i++)
        {
            cin >> op[i];
            fp[i] = op[i];

            if(fp[i] > k)
            {
                fp[i] = k;
            }
            sum_op += op[i];
            sum_fp += fp[i];
        }

        cout << sum_op - sum_fp << endl;
    }

}
