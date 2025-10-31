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
        int ans=0,pos=0,neg=0;
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
            if(v[i]==1)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }
        if(neg>pos)
        {
            ans=(neg-pos+1)/2;
            neg-=ans;
            pos-=ans;
        }
        if(neg%2==1)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}