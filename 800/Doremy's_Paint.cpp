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
        map<int,int>m;
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        if(m.size()==1)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        else
        {
            if(m.size()>2)
            {
                cout<<"No"<<endl;
            }
            else
            {
                bool flag=false;
                for(auto &x:m)
                {
                    if(x.second==(n/2))
                    {
                        flag=true;
                        break;
                    }
                }
                if(flag)
                {
                    cout<<"Yes"<<endl;
                }
                else
                {
                    cout<<"No"<<endl;
                }
            }
        }
    }
    return 0;
}