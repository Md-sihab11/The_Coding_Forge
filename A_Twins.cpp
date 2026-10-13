#include<bits/stdc++.h>
using namespace std;

void solution()
{
    int ncoin;
    cin>>ncoin;

    vector<int>arr(ncoin);

    int sum=0;

    for(int i=0; i<ncoin; i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }

    sort(arr.begin(), arr.end(),greater<int>());

    int mysum=0;
    int cn=0;

    for(int x:arr)
    {
        mysum = mysum+x;
        cn++;
        if(mysum>sum-mysum)
        {
            cout<<cn<<endl;
            break;
        }
    }


}
int main()
{
    solution();
}