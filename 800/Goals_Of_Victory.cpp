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
        int s=0;
        for(int i=0;i<n-1;++i)
        {
            int x;
            cin>>x;
            s+=x;
        }
        cout<<0-s<<endl;
    }
    return 0;
}