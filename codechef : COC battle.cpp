#include "bits/stdc++.h"
using namespace std;
//int z[10005];
vector<int> get_z(string s)
{
    int n=s.length();
    //int z[n];
    vector<int> z(n,0);
    //for(int i=0;i<n;i++)
    //{
    //    cout<<z[i]<<"  ";
    //}
    //memset(z,0,n);
    int l=0,r=0;
    for(int i=0;i<n;i++)
    {
        if(i>r)
        {
            l=r=i;
            while(r<n && s[r-l]==s[r])
            {
                r=r+1;
            }
            z[i]=r-l;
            r--;
        }
        else
        {
            int idx=i-l;
            if(z[idx]+i<=r)
            {
                z[i]=z[idx];
            }
            else
            {
                l=i;
                while(r<n && s[r-l]==s[r])
                {
                    r++;
                }
                z[i]=r-l;
                r--;
            }
        }
    }
    return z;
}
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        string text,pat;
        cin>>n>>m>>k;
        
        cin>>text>>pat;
        
        string tot="";
        
        string new_pat=pat.substr(0,k);
        
        tot=new_pat+"#"+text;
        
        vector<int> z(tot.size());
        
        z=get_z(tot);
        int cnt=0;
        for(int i=k;i<tot.size();i++)
        {
            if(z[i]>=k)
            {
                cnt=cnt+1;
            }
        }
        if(cnt==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }
    }
}
