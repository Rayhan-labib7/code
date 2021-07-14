
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
//#define endl                    '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

/*using     Z    algo|

|Time complexity O(n)*/




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

    char s[5000000];

    scanf("%s",&s);

    ll n=strlen(s);

    ll *z=Z_algo(s,n);

    ll q;

    scanf("%lld",&q);

    while(q--)
    {
        ll lcp;

        scanf("%lld",&lcp);

        ll sec=z[lcp];

        ll mn=min(lcp,sec);

        printf("%lld\n",mn);

    }




/*---------->HaPpY CoDiNg----------->*/
return 0;
}
