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
        vector<int>v1(n),v2(n);
        for(int i=0;i<n;++i)
        {
            cin>>v1[i];
            if(i==0)
            {
                v2[i]=v1[i];
            }
            else
            {
                v2[i]=v1[i]+v2[i-1];
            }
        }
        int x=v2[n-1];
        bool flag=false;
        for(int i=0;i<n;++i)
        {
            if(v2[i]%2==(x-v2[i])%2)
            {
                flag=true;
                break;
            }
        }
        if(flag)
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