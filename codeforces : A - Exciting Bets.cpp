
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


int main()
{
    optimize();
    //cout<<fixed<<setprecision(12);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,ans;
        cin >> a >> b;
        if(a==b)
        {
            cout << "0 0" << endl;
        }
        else
        {
            x=abs(a-b);
            ans=min(a%x,x-a%x);
            cout << x << " " << ans << endl;
        }


    }

    /*---------->HaPpY CoDiNg----------->*/
    return 0;
}
