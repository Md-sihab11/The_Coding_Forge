#include<bits/stdc++.h>
using namespace std;

int main()
{
    int total;
    cin>>total;
    
    int even=0, odd=0;
    for(int i=0; i<total; i++)
    {
        int n;
        cin>>n;

        if(n%2==0) even++;
        else odd++;
    }
    if(even>odd){
      even=even-odd;
      cout<<even<<endl;
    }
    else{
        odd=odd-even;
      cout<<odd<<endl;
    }
    
}