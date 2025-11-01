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
        int cur=0,ans=0;
        vector<int>v(n);
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                cur++;
            }
            else 
            {
                ans=max(ans,cur);
                cur=0;
            }
        }
        ans=max(ans,cur);
        cout<<ans<<endl;
    }
    return 0;
}