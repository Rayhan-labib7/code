 
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
        ll n,cnt=0;
		cin>>n;
		ll a[n+6];
		for(int i=0;i<n;i++)
        {
			cin>>a[i];
			cnt+=a[i];
		}
		ll ans=(cnt%n)*(n-cnt%n);
		cout<<ans<<endl;
 
 
    }
 
    /*---------->HaPpY CoDiNg----------->*/
    return 0;
}
