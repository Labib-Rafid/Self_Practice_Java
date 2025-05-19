#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

const ll N = 1e5+9LL;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll ttt = 1, i, j, k, n, m, q;
    cin >> ttt;
    while (ttt--){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        ll k1 = min(b - d, d - 1);
        ll k2 = min(d - 1, a - d);

        cout << k1 + k2 + 2 << '\n';
    }
    return 0;
}

/*



*/
