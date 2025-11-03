#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>x={-1,1,-1,1};
    vector<int>y={-1,-1,1,1};
    while(t--)
    {
        int a,b,kx,ky,qx,qy;
        cin>>a>>b;
        cin>>kx>>ky;
        cin>>qx>>qy;
        set<pair<int,int>>s1,s2;
        for(int i=0;i<4;++i)
        {
            s1.insert({kx+x[i]*a,ky+y[i]*b});
            s1.insert({kx+x[i]*b,ky+y[i]*a});
            s2.insert({qx+x[i]*a,qy+y[i]*b});
            s2.insert({qx+x[i]*b,qy+y[i]*a});
        }
        int ans=0;
        for(auto &x:s1)
        {
            if(s2.find(x)!=s2.end())
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}