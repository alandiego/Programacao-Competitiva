#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> f(3 * n + 1);

    f[1] = 2;

    for (int i = 1; i <= n; i++) {
        if (f[i] == 0)
            f[i] = f[i - 1] + 1;

        f[f[i]] = 3 * i;
    }

    cout << f[n] << '\n';

    return 0;
}
