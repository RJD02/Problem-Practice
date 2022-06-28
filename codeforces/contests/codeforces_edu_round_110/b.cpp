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
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define pb push_back
#define pf pop_back
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	int count = 0;
	// int count2 = 0;
	// int count3 = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(all(v));
	reverse(all(v));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			// if (2*v[j] % v[i] == 0) {
			// 	if(v[i] == v[j])
			// 		count3++;
			// 	count2++;
			// }
			if (__gcd(2 * v[i], v[j]) > 1)
				count++;
		}
	}
	cout << count << endl;
	// cout << "count2 = " << count2 / 2 << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
//For getting input from input.txt
	freopen("input.txt", "r", stdin);
//For writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif //ONLINE_JUDGE
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	//Try till the end!!
	//Don't give up
	//Goal: A, B, C
	while (T--)
	{
		solve();
	}
	return 0;
}
