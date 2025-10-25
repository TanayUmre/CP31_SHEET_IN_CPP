#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<vector<char>>v(10,vector<char>(10));
        for(int i=0;i<10;++i)
        {
            for(int j=0;j<10;++j)
            {
                cin>>v[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<10;++i)
        {
            for(int j=0;j<10;++j)
            {
                if(i!=0 && i!=9 && j!=0 && j!=9)
                {
                    continue;
                }
                else
                {
                    if(v[i][j]=='X')
                    {
                        ans++;
                    }
                }
            }
        }
        for(int i=1;i<9;++i)
        {
            for(int j=1;j<9;++j)
            {
                if(i!=1 && i!=8 && j!=1 && j!=8)
                {
                    continue;
                }
                else
                {
                    if(v[i][j]=='X')
                    {
                        ans+=2;
                    }
                }
            }
        }
        for(int i=2;i<8;++i)
        {
            for(int j=2;j<8;++j)
            {
                if(i!=2 && i!=7 && j!=2 && j!=7)
                {
                    continue;
                }
                else
                {
                    if(v[i][j]=='X')
                    {
                        ans+=3;
                    }
                }
            }
        }
        for(int i=3;i<7;++i)
        {
            for(int j=3;j<7;++j)
            {
                if(i!=3 && i!=6 && j!=3 && j!=6)
                {
                    continue;
                }
                else
                {
                    if(v[i][j]=='X')
                    {
                        ans+=4;
                    }
                }
            }
        }
        for(int i=4;i<6;++i)
        {
            for(int j=4;j<6;++j)
            {
                if(i!=4 && i!=5 && j!=4 && j!=5)
                {
                    continue;
                }
                else
                {
                    if(v[i][j]=='X')
                    {
                        ans+=5;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}