#include <bits/stdc++.h>

using namespace std;

int sumofdigits(int n)
{
    int ans = 0;
    while(n>0)
    {
        ans += n%10;
        n = n/10;
    }

    return ans;
}

int main()
{
    int t,n,a,b,score_a,score_b,sum_a,sum_b;
    cin >> t;
    while(t--)
    {
        score_a = 0;
        score_b = 0;

        cin >> n;
        while(n--)
        {
            cin >> a >> b;
            sum_a = sumofdigits(a);
            sum_b = sumofdigits(b);

            if(sum_a > sum_b)
            {
                score_a++;
            }

            else if (sum_b > sum_a)
            {
                score_b++;
            }
            else
            {
                score_a++;
                score_b++;
            }           

        }
        if (score_a > score_b)
        {
            cout << "0 " << score_a << endl;
        }
        else if (score_b > score_a)
        {
            cout << "1 " << score_b << endl;
        }
        else
        {
            cout << "2 " << score_b << endl;
        }       

    }
    return 0;
}