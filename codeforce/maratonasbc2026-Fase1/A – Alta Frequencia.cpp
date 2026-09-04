#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> saldo(N);

    int C = 0, V = 0;

    for (int i = 0; i < N; i++) {
        int c, v;
        cin >> c >> v;

        C += c;
        V += v;

        saldo[i] = C - V;
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int n;
        cin >> n;

        if (saldo[n - 1] > 0)
            cout << "COMPRA\n";
        else if (saldo[n - 1] < 0)
            cout << "VENDA\n";
        else
            cout << "NEUTRO\n";
    }

    return 0;
}
