#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<int, int>> v(N);

    for (int i = 0; i < N; i++)
        cin >> v[i].first; // Ci

    for (int i = 0; i < N; i++)
        cin >> v[i].second; // Ki

    // Verifica se é possível atender todas as demandas
    for (int i = 0; i < N; i++) {
        if (v[i].first < v[i].second) {
            cout << -1 << '\n';
            return 0;
        }
    }

    // Menor Ci - Ki fica por último
    sort(v.begin(), v.end(), [](const pair<int, int>& a,
                                const pair<int, int>& b) {
        return a.first - a.second > b.first - b.second;
    });

    long long soma = 0;

    for (auto [c, k] : v)
        soma += c;

    long long resposta = soma - v.back().first + v.back().second;

    cout << resposta << '\n';

    return 0;
}
