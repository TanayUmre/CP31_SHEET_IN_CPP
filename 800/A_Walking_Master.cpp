#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c && b==d)
        {
            cout<<0<<endl;
        }
        else
        {
            if(b<=d && c<=a+d-b)
            {
                cout<<(d-b)+(a+d-b-c)<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}