#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, C, K;
    
    cin >> T >> C >> K;
    
    cout << min( K*T, C )<< "\n";
    
    return 0;
}
