#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
        }
        bool flag=true;
        for(int i=0;i<n-1;++i)
        {
            if(v[i]>v[i+1])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            if(k==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}