#include <bits/stdc++.h>
using namespace std;

int main()
{
    int total;
    cin >> total;

    int even = 0, odd = 0;
    int evenIndex, oddIndex;

    for (int i = 1; i <= total; i++)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            even++;
            evenIndex = i;
        }
        else
        {
            odd++;
            oddIndex = i;
        }
    }

    if (even == 1)
        cout << evenIndex << endl;
    else
        cout << oddIndex << endl;

    return 0;
}