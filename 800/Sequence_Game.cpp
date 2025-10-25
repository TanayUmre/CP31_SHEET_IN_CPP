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
        vector<int>v1(n),v2;
        for(int i=0;i<n;++i)
        {
            cin>>v1[i];
        }
        v2.push_back(v1[0]);
        for(int i=1;i<n;++i)
        {
            if(v1[i]>=v1[i-1])
            {
                v2.push_back(v1[i]);
            }
            else
            {
                v2.push_back(v1[i]);
                v2.push_back(v1[i]);
            }
        }
        cout<<v2.size()<<endl;
        for(int x:v2)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}