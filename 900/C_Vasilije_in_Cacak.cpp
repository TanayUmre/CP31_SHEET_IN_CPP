#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,x,mini=0,maxi=0;
        cin>>n>>k>>x;
        mini=(k*(k+1))/2;
        maxi=(k*((2*n)-k+1))/2;
        if(mini<=x && x<=maxi)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}