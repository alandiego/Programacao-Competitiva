#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.size();

    int last = 0;
    for (char c : s)
        last += c - '0';

    int minimum = n;
    int maximum = 0;

    for (int i = 0; i < n; i++) {
        last = n - last;

        int current = s[i] - '0';

        if (i % 2 == 0) {
            if (current)
                last++;
            else
                last--;
        } else {
            if (!current)
                last++;
            else
                last--;
        }

        minimum = min(last, minimum);
        maximum = max(last, maximum);
    }

    cout << minimum << ' ' << maximum << '\n';

    return 0;
}
