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
        vector<int>v(n),v1(n);
        int maxi=0,mini=INT_MAX;
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
            maxi=max(maxi,v[i]);
            mini=min(mini,v[i]);
        }
        int x=maxi+mini;
        for(int i=0;i<n;++i)
        {
            v1[i]=x-v[i];
        }
        for(int x:v1)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}