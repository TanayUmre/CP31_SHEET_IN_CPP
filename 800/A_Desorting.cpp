#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        bool sorted=true;
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
        }
        for(int i=0;i<n-1;++i)
        {
            if(v[i]>v[i+1])
            {
                sorted=false;
                break;
            }
        }
        if(!sorted)
        {
            cout<<0<<endl;
        }
        else
        {
            int ans=INT_MAX;
            for(int i=0;i<n-1;++i)
            {
                ans=min(ans,((v[i+1]-v[i])/2)+1);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}