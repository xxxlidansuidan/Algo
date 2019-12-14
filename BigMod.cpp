*****UVA - 374 - Big Mod (solution) :
#include <stdio.h>
int mod(long b, long p, long m) {
    if(p==0) return 1;

    if(p%2==0) return (mod(b,p/2,m)*mod(b,p/2,m))%m;

    return (mod(b,p-1,m)*(b%m))%m;
}
int main() {
    int b,p,m;
    while(scanf("%d %d %d",&b,&p,&m)==3) {
        printf("%d\n",mod(b,p,m));
    }
    return 0;
}

*****UVa : 11609-Teams : 
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
 
#define INT_MAX 2147483647
#define INT_MIN -2147483647
#define pi acos(-1.0)
#define N 1000000
#define LL long long
 
#define For(i, a, b) for ( int i = (a); i < (b); i++ )
#define Forv(i, sz) for ( size_t i = 0; i < sz.size (); i++ )
#define Set(a, s) memset (a, s, sizeof (a))
 
using namespace std;
 
#define MOD 1000000007
 
LL bigMod (LL b, LL p) {
    if ( p == 0 ) return 1;
    if ( p == 1 ) return b;
 
    if ( p % 2 == 0 ) {
        LL x = bigMod (b, p / 2) % MOD;
        return (x * x) % MOD;
    }
    return (bigMod (b, p - 1) % MOD) * (b % MOD);
}
 
int main () {
    int testCase;
    scanf ("%d", &testCase);
    int cases = 0;
 
    while ( testCase-- ) {
        int n;
        scanf ("%d", &n);
 
        printf ("Case #%d: ", ++cases);
        cout << ((bigMod (2, n - 1) * (n % MOD)) % MOD) << endl;
    }
 
    return 0;
}
