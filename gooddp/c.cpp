#include "bits/stdc++.h"
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

using ll = long long;
using ii = pair<int,int>;
using vi = vector<int>;
using vii = vector<ii>;
const int oo = 1e8+7;

int main() {
    
    int n;
    scanf("%d",&n);
    
    vi dp(3, 0);
    
    for(int i = 0; i < n; ++i) {
        
        int a, b, c;
        scanf("%d%d%d",&a,&b,&c);
        
        int fake1 = dp[0], fake2 = dp[1], fake3 = dp[2];
        dp[0] = max(fake2+a, fake3+a);
        dp[1] = max(fake1+b, fake3+b);
        dp[2] = max(fake1+c, fake2+c);
        
    }
    
    printf("%d\n", max(dp[0], max(dp[1], dp[2])));
    
    return 0;
}


