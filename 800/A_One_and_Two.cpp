#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tw=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;++i)
        {
            cin>>v[i];
            if(v[i]==2)
            {
                tw++;
            }
        }
        if(tw%2==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int c=0;
            bool flag=false;
            for(int i=0;i<n;++i)
            {
                if(v[i]==2)
                {
                    c++;
                }
                if(c==tw/2)
                {
                    flag=true;
                    cout<<i+1<<endl;
                    break;
                }
            }
            if(!flag)
            {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}