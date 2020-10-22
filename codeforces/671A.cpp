// COMPILE USING : g++ -std=c++11 -O2 -Wall test.cpp -o test

#include <bits/stdc++.h>
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
#define for(i,n) for (int i = 0; i < n; i++)
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
{
	c_p_c();

    int t, n;
    cin>>t;
    string s;
    while(t--) {
    	cin>>n>>s;
        if ((s[0]-'0')%2 == 0)
            cout << "2\n";
        else
            cout << "1\n";
    }
	return 0;
}

/* A. Digit Game
Everyone knows that agents in Valorant decide, who will play as attackers,
and who will play as defenders. To do that Raze and Breach decided to 
play 𝑡 matches of a digit game...

In each of 𝑡 matches of the digit game, a positive integer is generated. 
t consists of 𝑛 digits. The digits of this integer are numerated from 
1 to 𝑛 from the highest-order digit to the lowest-order digit. 
After this integer is announced, the match starts.

Agents play in turns. Raze starts. In one turn an agent can choose any 
unmarked digit and mark it. Raze can choose digits on odd positions, 
but can not choose digits on even positions. Breach can choose digits on 
en positions, but can not choose digits on odd positions. The match ends, 
when there is only one unmarked digit left. If the single last digit is 
odd, then Raze wins, else Breach wins.

It can be proved, that before the end of the match (for every initial 
integer with 𝑛 digits) each agent has an ability to make a turn, i.e. 
there is at least one unmarked digit, that stands on a position of 
required parity.

For each of 𝑡 matches find out, which agent wins, if both of them want to 
win and play optimally.

Input
First line of input contains an integer 𝑡 (1≤𝑡≤100)  — the number of 
matches.

The first line of each match description contains an 
integer 𝑛 (1≤𝑛≤103)  — the number of digits of the generated number.

The second line of each match description contains an 𝑛-digit positive 
integer without leading zeros.

Output
For each match print 1, if Raze wins, and 2, if Breach wins.

Example
inputCopy
4
1
2
1
3
3
102
4
2069
outputCopy
2
1
1
2
Note
In the first match no one can make a turn, the only digit left is 2, 
it's even, so Breach wins.

In the second match the only digit left is 3, it's odd, so Raze wins.

In the third match Raze can mark the last digit, after that Breach can 
only mark 0. 1 will be the last digit left, it's odd, so Raze wins.

In the fourth match no matter how Raze plays, Breach can mark 9, and 
in the end there will be digit 0. It's even, so Breach wins.
*/