#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
const int mod = 1000000007;
int query(int index,vector<int> v){
	int sum = 0;
	for(;index>0;index-=index&(-index)){
		sum += v[index];
	}
	return sum;
}

void update(int index,int size,int val,vector<int>& v){
	for(;index<=size;index+=index&(-index)){
		v[index]+=val;
	}
}


int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
	
    ios_base::sync_with_stdio(0);
    int t, i, j, k, p, q, r, x, y, u, v, n, m;
    cin >> n;
    vector<int> arr(n+1,0);
    vector<int> BIT(n+1,0);
    fo(i,n){
    	cin >> arr[i+1];
    	update(i+1,n+1,arr[i+1],BIT);

    }
    cout << "The Element Of the BIT Tree are :" << "\n";
    for(auto it:BIT){
    	cout << it << "\n";
    }

    cout << "The Sum of Element beginging with index 4 to 8 :" << "\n";
    cout << query(8,BIT)-query(3,BIT);



    return 0;
}