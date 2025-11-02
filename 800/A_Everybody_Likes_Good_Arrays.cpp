#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(long long i=0;i<n;++i)
        {
            cin>>v[i];
        }
        long long ans=0;
        for(long long i=0;i<n-1;++i)
        {
            if(v[i]%2==v[i+1]%2)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}