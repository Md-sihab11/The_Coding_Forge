#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int is = -1;

    sort(arr.begin(), arr.end());

    for (int i = 0; i <= n - 3; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2])
        {
            cout << arr[i] << '\n';
            return;
        }
    }

    cout << -1 << '\n';

}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }
}