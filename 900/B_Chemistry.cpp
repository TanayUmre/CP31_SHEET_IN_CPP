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
        string s;
        cin>>s;
        vector<int>v(26,0);
        for(char c:s)
        {
            v[c-'a']++;
        }
        int o=0;
        for(int i=0;i<26;++i)
        {
            if(v[i]%2!=0)
            {
                o++;
            }
        }
        if(o-k<=1)
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