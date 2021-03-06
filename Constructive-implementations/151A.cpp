#include<bits/stdc++.h>
using namespace std;
#define I INT32_MAX
#define IM INT_MIN
#define MOD 1000000007
#define SIZE 1000020
#define lli long long int
#define rep(i,n) for (int i = 0; i < n; i++)
#define repk(i,k,n) for (int i = k; i <= n; i++)
#define repr(i,k,n) for (int i = k; i >= n; i--)
#define all(v) v.begin(),v.end()
#define ff              first
#define ss              second
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];

int dx4[] = {1, -1, 0, 0};
int dy4[] = {0, 0, 1, -1};
int dx6[] = {0, 0, 1, -1, 0, 0};
int dy6[] = {1, -1, 0, 0, 0, 0};
int dz6[] = {0, 0, 0, 0, 1, -1};
int dx8[] = {1, -1, 0, 0, -1, 1, -1, 1};
int dy8[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dkx8[] = { -1, 1, -1, 1, -2, -2, 2, 2};
int dky8[] = {2, 2, -2, -2, 1, -1, 1, -1};
// ------------------------------------------------------------------//

// A. Soft Drinking
// This winter is so cold in Nvodsk! A group of n friends decided to 
// buy k bottles of a soft drink called "Take-It-Light" to warm up a bit.
//  Each bottle has l milliliters of the drink. Also they bought c limes
//   and cut each of them into d slices. After that they found p grams of 
//   salt.
// To make a toast, each friend needs nl milliliters of the drink, 
// a slice of lime and np grams of salt. The friends want to make as many
//  toasts as they can, provided they all drink the same amount. How
//   many toasts can each friend make?

void solve() {
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int totalcapacity = k*l;
	int totallimes = c*d;
	int x = floor(totalcapacity/nl);
	int y = floor(p/np);
	int res = min(x, min(y, totallimes));
	res = floor(res/n);
	cout<<res<<endl;

};

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
}

int main()
{
	c_p_c();
	return 0;
}


