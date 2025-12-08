#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, X, Y;
        long long int maxEarnings;
        cin >> N >> X >> Y;
        if (Y > 2 * X)
        {
            maxEarnings = (N / 2) * Y + (N % 2) * X;
        }
        else
        {
            maxEarnings = N * X;
        }
        
        cout << maxEarnings << endl;
    }
    return 0;
}   
