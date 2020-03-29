#include<bits/stdc++.h>
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ri(x) scanf("%d",&(x))
#define ri2(x,y) scanf("%d %d",&(x),&(y))
#define ri3(x,y,z) scanf("%d %d %d",&(x),&(y),&(z))
#define rll(x) scanf("%lld",&(x))
#define rll2(x,y) scanf("%lld %lld",&(x),&(y))
#define rll3(x,y,z) scanf("%lld %lld %lld",&(x),&(y),&(z))
#define gc(x) ((x) = getchar())
using namespace::std;
 
const long double PI = acos(-1);
int MOD;
 
typedef long long ll;
typedef pair<ll,ll> pll;
typedef pair<ll,pll> tll;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<tll> vtll;
typedef vector<string> vs;
typedef set<int> si;
typedef set<ii> sii;
typedef set<iii> siii;
 
ll gcd(ll a, ll b){ return b==0?a:gcd(b,a%b);}
 
ll add(ll a, ll b, ll m = MOD){
	return a + b < m? a + b : a + b - m;
}
 
ll mul(ll a, ll b, ll m = MOD){
	return (a * b) % m;
}
 
ll pow_mod(ll a, ll b, ll m = MOD){
	ll res = 1LL;
	a = a%m;
	while(b){
		if(b&1) res = mul(res,a,m);
		b >>= 1;
		a = mul(a,a,m);
	}
	return res;
}
 
ll fastexp(ll a, ll b){
	ll res = 1LL;
	while(b){
		if(b&1) res = res*a;
		b >>= 1;
		a *= a;
	}
	return res;
}
 
int gcdExtendido(int a, int b, int *x, int *y){
	if(a == 0){
		*x = 0;
		*y = 1;
		return b;
	}
	int x1, y1;
	int gcd = gcdExtendido(b%a,a,&x1,&y1);
	
	*x = y1-(b/a)*x1;
	*y = x1;
	return gcd;
}
 
int modInverso(int a, int m){
	int x, y;
	int g = gcdExtendido(a,m,&x,&y);
	if(g!=1) return -1;
	else return (x%m + m)%m;
}
 
/****************************************
*************P*L*A*N*T*I*L*L*A************
*****************************************/
 
ll lcm(ll a, ll b){
	return (a / gcd(a,b)) * b;
}
 
const int SZ = 700000;
const int M = 1000 + 5;
const int N = 300000+5;
 
int T;
int g[N];
int t[N];
vi V[250];
ll ms[11];
int r[100];
int h[2][N];
int f[M][M];
int s[11][SZ];
 
struct Newton{
	ll y[55];
	ll g[55];
	int N;
	void work(){
		ll ii = 1;
		for(int i=1; i<=N; i++){
			y[i] = add(y[i],0);
		}
		for(int i=1; i<=N; i++){
			g[i] = mul(y[1],ii);
			ii = mul(ii,pow_mod(i,MOD-2));
			for(int j=1; j<=N-i; j++){
				y[j] = add(y[j+1],MOD - y[j]);
			}
			y[N-i+1] = 0;
		}
	}
 
	ll calc(int x){
		ll w = 1;
		ll a = 0;
		for(int i=1; i<=N; i++){
			a = add(a,mul(w,g[i]));
			w = mul(w,x-i);
		}
		return a;
	}
} ns[11][2530];
 
int main(){
	ri2(T,MOD);
	f[0][0] = 1;
	for(int i=1; i<=1000; i++){
		for(int j=0; j<=1000; j++){
			f[i][j] = f[i-1][j];
			if(j >= i) f[i][j] = add(f[i][j], f[i][j-i]);
		}
	}
	if(MOD == 1000000007){
		s[0][0] = 1;
		for(int i=1; i<=10; i++){
			for(int j=0; j<=30000; j++){
				s[i][j] = s[i-1][j];
				if(j >= i) s[i][j] = add(s[i][j],s[i][j-i]);
			}
		}
		ms[0] = 1;
		for(int i=1; i<=10; i++){
			ms[i] = lcm(ms[i-1],i);
		}
		for(int i=2; i<=10; i++){
			for(int s = 0; s < ms[i]; s++){
				int cn = 0;
				for(int j = s; j <= 30000 && cn <= 29; j += ms[i]){
					ns[i][s].y[ns[i][s].N = ++cn]=::s[i][j];
				}
				ns[i][s].work();
			}
		}
	}
	while(T--){
		static char s[SZ];
		int n;
		scanf("%d%s",&n,s);
		if(n == 1){
			puts("1");
			continue;
		}
		if(n <= 10){
			ll w = 0;
			for(int i=0; s[i]; i++){
				ll thism = ms[n] * MOD;
				w = add(s[i]-'0',mul(w,10,thism),thism);
			}
			printf("%lld\n",ns[n][w % ms[n]].calc(w / ms[n] + 1));
			continue;
		}
		int m = atoi(s);
		if(n <= 1000 and m <= 1000){
			printf("%d\n",f[n][m]);
		}
		else{
			int S = sqrt(max(n,m));
			if(S > n) S = n;
			if(!S) S += 1;
			memset(g, 0, sizeof g);
			g[0] = 1;
			for(int i=1; i<S; i++){
				for(int j=i; j<=m; j++){
					g[j] = add(g[j],g[j-i]);
				}
			}
			memset(t,0,sizeof t);
			memset(h,0,sizeof h);
			int c = 0;
			h[c][0] = 1;
			for(int i=0; i * S <= m;i++){
				c ^= 1;
				for(int j=0; j + i * S <= m; j++){
					h[c][j] = h[c^1][j];
					if(i and j >= i){
						h[c][j] = add(h[c][j],h[c][j-i]);
						if(j-i >= (n-S)){
							h[c][j] = add(h[c][j],mul(MOD-1,h[c^1][j-i-n+S]));
						}
					}
					t[j+i*S] = add(t[j + i*S],h[c][j]);
				}
			}
			ll ans = 0LL;
			for(int i=0; i<=m; i++){
				ans = add(ans,mul(g[i],t[m-i]));
			}
			printf("%lld\n",ans);
		}
	}
	return 0;
} 