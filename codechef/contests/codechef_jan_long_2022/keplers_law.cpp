#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int,int>
#define pll pair<long long, long long>
#define vpp vector<pair<ll,ll>>
#define repi(i, m, n) for (auto i = m; i != n; i++)
#define repd(i, m, n) for(auto i = m; i != n; i--)
#define FOR(i, a, b) for (ll i = a; i <= b; i++)
#define RFOR(i, a, b) for (ll i = a; i >= b; i--)
#define FOREACH(a, b) for (auto&(a) : (b)) 
#define um(x, y) unordered_map<x, y>
#define us(x) unordered_set<x>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define rall(v) v.rbegin(), v.rend()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define sz(x) x.size()
#define eb emplace_back
#define f first
#define s second
#define pb push_back
#define pf pop_back
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (n & (1 << i))
#define debug(i, j) cout << "{" << i << "," << j << "} "
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define maxArr(a,n) *max_element(a,a+n)
#define minArr(a,n) *min_element(a,a+n)
#define maxVec(a) *max_element(a.begin(), a.end())
#define minVec(a) *min_element(a.begin(), a.end())
#define present(c, x)   ((c).find(x) != (c).end()) 
#define cpresent(c, x)  (find(all((c)), (x)) != (c).end())

/****** Template of some basic operations *****/
template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }
template<typename T> T logAToBaseB(T a, T b) {
	return a > b - 1 ? 1 + logAToBaseB(a / b, b) : 0;
}
template<typename T> T logAToBaseBDec(T a, T b) {
	return log(a) / log(b);
}
template<typename T> T numberOfDigits(T a) {
	return (int)floor(1 + logAToBaseBDec(a, 10));
}
template<typename T> double nthRoot(T a, T b) {
	double xPre = rand() % 10;
	double eps = 1e-3;
	double delX = INT_MAX;
	double xK;
	while (delX > eps) {
		xK = ((b - 1.0) * xPre + (double)a / pow(xPre, b - 1)) / (double)b;
		delX = abs(xK - xPre);
		xPre = xK;
	}
	return xK;
}
/**********************************************/

using namespace std;
inline ll lcm(ll a, ll b) {return (a*b)/__gcd(a,b);}
inline int intlcm(int a, int b) {return (a*b)/__gcd(a,b);}
inline int intpow(int a, int b) {return (int)(pow(a,b) + 0.5);}
inline ll llpow(ll a, ll b) {return (ll)(pow(a,b) + 0.5);}

void solve() {
	int t1, t2, r1, r2;
	cin >> t1 >> t2 >> r1 >> r2;
	if (t1 * t1 * r2 * r2 * r2 == t2 * t2 * r1 * r1 * r1)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
}

int main() {
	//#ifndef ONLINE_JUDGE
	//For getting input from input.txt
	//freopen("input.txt", "r", stdin);
	//For writing output to output.txt
	//freopen("output.txt", "w", stdout);
	//#endif //ONLINE_JUDGE
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	// Flashy Wally with Gray Nightwing
	while(T--)
	{
		solve();
	}
	return 0;
}
