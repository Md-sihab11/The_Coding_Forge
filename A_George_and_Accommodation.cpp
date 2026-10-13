#include<bits/stdc++.h>
using namespace std;

void solution()
{
    int num;
    cin>>num;

    int count=0;

    while(num--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            int sub=a-b;
            count=count+sub;
        }
        else if(a<b && b-a !=1)
        {
            count++;
        }
    }

    cout<<count<<endl;

}
int main()
{
    solution();
}