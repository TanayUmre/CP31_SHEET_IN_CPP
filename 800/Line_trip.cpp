#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>v(n+2);
        v[0]=0;
        for(int i=1;i<n+1;++i)
        {
            cin>>v[i];
        }
        v[n+1]=x;
        int maxi=0;
        for(int i=1;i<n+1;++i)
        {
            maxi=max(maxi,v[i]-v[i-1]);
        }
        maxi=max(maxi,2*(v[n+1]-v[n]));
        cout<<maxi<<endl;
    }
    return 0;
}