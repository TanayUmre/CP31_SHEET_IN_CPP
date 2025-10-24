#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        vector<pair<string,int>>v;
        string cur=x;
        for(int i=0;i<=5;++i)
        {
            v.push_back({cur,i});
            cur+=cur;
        }
        int ans=-1;
        for(int i=0;i<=5;++i)
        {
            if(v[i].first.find(s)!=string::npos)
            {
                ans=v[i].second;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}