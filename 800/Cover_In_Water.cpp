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
        string s;
        cin>>s;
        int ans=0;
        bool flag=false;
        for(int i=0;i<n;++i)
        {
            if(i+2<n)
            {
                if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
                {
                    flag=true;
                }
            }
            if(s[i]=='.')
            {
                ans++;
            }
        }
        if(flag)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}