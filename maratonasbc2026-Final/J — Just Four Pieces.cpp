#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long R, C;
    cin >> R >> C;

    if (R == 2 || C == 2) {
        cout << "*\n";
    }
    else if (R == C && R <= 4) {
        cout << "*\n";
    }
    else if (R == C) {
        cout << "1 2\n";
    }
    else {
        cout << "1 1\n";
    }

    return 0;
}
