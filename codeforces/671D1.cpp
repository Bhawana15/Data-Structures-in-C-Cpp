#include<bits/stdc++.h>
using namespace std;

#define getl getline(cin, s) // s is string
#define si(x)  scanf("%d",&x)
#define sl(x)  scanf("%lld",&x)
#define ss(s)  scanf("%s",s)
#define pi(x)  printf("%d\n",x)
#define pl(x)  printf("%lld\n",x)
#define ps(s)  printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y <<endl
#define all(x) x.begin(), x.end()
#define init(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define forit(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define fo(i,n) for (int i = 0; i < n; i++)
#define sq(a) a*a
#define AP(a,b) n*(a+b)/2 //sum of AP with a as first numbyer, b as last
#define inf 1e18 // infinity
#define PI 3.1415926535897932384626
#define mod 1000000007 // 1e9+7  ans%mod
#define presi(x,y) fixed<<setprecision(y)<<x//precision-how many digits after point
#define dyarr(arr,n,type) 

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

void c_p_c() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int main(int argc, char const *argv[])
{   c_p_c();

    int n, p=0;
    cin>>n;
    std::vector<int> a(n), b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a.begin(), a.end());
    for(int i=1;i<n;i+=2)
        b[i] = a[p++];
    for(int i=0;i<n;i+=2)
        b[i] = a[p++];

    int ans=0;
    for(int i=1;i<n-1;i++)
        if(b[i-1] > b[i] && b[i]<b[i+1])
            ans++;
    cout<<ans<<"\n";
    fo(i,n)
    cout<<b[i]<<"  ";
    cout<<endl;

	return 0;
}

/*
D1. Sage's Birthday (easy version)

This is the easy version of the problem. The difference between the versions is that in the easy version all prices 𝑎𝑖 are different. You can make hacks if and only if you solved both versions of the problem.

Today is Sage's birthday, and she will go shopping to buy ice spheres. All 𝑛 ice spheres are placed in a row and they are numbered from 1 to 𝑛 from left to right. Each ice sphere has a positive integer price. In this version all prices are different.

An ice sphere is cheap if it costs strictly less than two neighboring ice spheres: the nearest to the left and the nearest to the right. The leftmost and the rightmost ice spheres are not cheap. Sage will choose all cheap ice spheres and then buy only them.

You can visit the shop before Sage and reorder the ice spheres as you wish. Find out the maximum number of ice spheres that Sage can buy, and show how the ice spheres should be reordered.

Input
The first line contains a single integer 𝑛 (1≤𝑛≤105) — the number of ice spheres in the shop.

The second line contains 𝑛 different integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤109) — the prices of ice spheres.

Output
In the first line print the maximum number of ice spheres that Sage can buy.

In the second line print the prices of ice spheres in the optimal order. If there are several correct answers, you can print any of them.

Example
inputCopy
5
1 2 3 4 5
outputCopy
2
3 1 4 2 5 
Note
In the example it's not possible to place ice spheres in any order so that Sage would buy 3 of them. If the ice spheres are placed like this (3,1,4,2,5), then Sage will buy two spheres: one for 1 and one for 2, because they are cheap.

*/