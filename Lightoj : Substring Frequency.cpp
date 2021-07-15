
                                                                  /*--------------------|
                                                                  |بِسْمِ الّٰلهِ الرَّحْمٰنِ الرَحِيْمِ |
                                                                  |____________________*/

                                                       /*--------------->Logic%2==0---------------->*/


                                                                      //আগে যদি জানতাম
                                                                      //      CSE
                                                                     // তে কি আসতাম 😢*

#include<bits/stdc++.h>
#define CASE(t)                 printf("Case %d: ",t)
#define gcd(a,b)                __gcd(a,b)
#define lcm(a,b)                ((a)*(b))/gcd(a,b)
#define PI                      2*acos(0.0)
#define ll                      long long int
#define pq_small              priority_queue < int, vector <int>, greater <int> > pq;
#define endl                    '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

ll *Z_algo(string s,ll n)
{
    ll *z=new ll[n];

    ll l=0,r=0;

    z[0]=0;

    for(ll i=1;i<n;i++)
    {
        if(i>r)
        {
            l=i;

            r=i;

            while(r<n && s[r-l]==s[r])
            {
                r++;
            }

            r--;

            z[i]=r-l+1;
        }
        else
        {
            ll j=i-l;

            if(z[j]<r-i+1)
            {
                z[i]=z[j];
            }
            else
            {
                l=i;

                while(r<n && s[r-l]==s[r])
                {
                    r++;
                }

                r--;

                z[i]=r-l+1;
            }
        }
    }
    return z;
}

int main()
{
    optimize();
    ll t;
    cin>>t;
    ll c=1;
    while(t--)
    {
       string text,pattren,new_taxt;

       cin>>text>>pattren;

       new_taxt=pattren+'$'+text;

       ll n=new_taxt.size();

       ll *z=Z_algo(new_taxt,n);

       ll cnt=0;

       for(int i=pattren.size();i<n;i++)
       {
           if(z[i]==pattren.size())
           {
               cnt++;
           }
       }

       cout<<"Case "<<c++<<": "<<cnt<<endl;

    }


/*---------->HaPpY CoDiNg----------->*/
return 0;
}

