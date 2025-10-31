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
        vector<int>v(n),v1,v2;
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        v1.push_back(v[0]);
        for(int i=1;i<n;++i)
        {
            if(v[i]==v1[0])
            {
                v1.push_back(v[i]);
            }
            else
            {
                v2.push_back(v[i]);
            }
        }
        if(v1.size()==0 || v2.size()==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<v1.size()<<" "<<v2.size()<<endl;
            for(int x:v1)
            {
                cout<<x<<" ";
            }
            cout<<endl;
            for(int x:v2)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}