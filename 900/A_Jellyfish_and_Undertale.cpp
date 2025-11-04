#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,ans=0;
        cin>>a>>b>>n;
        for(int i=0;i<n;++i)
        {
            long long x;
            cin>>x;
            ans+=min(x,a-1);
        }
        cout<<ans+b<<endl;
    }
    return 0;
}