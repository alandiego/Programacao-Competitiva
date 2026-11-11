#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    
    cin >> N >> M;
    
    vector<int> received(N);
    vector<int> qtd_received(N, 0);
    
    for (int i=0; i<N; i++){
        received[i] = (i+1) % N;
    }
    
    while(M--){
        int temp;
        cin >> temp;
        temp--;
        qtd_received[received[temp]]++;
        received[received[temp]] = temp;
    }
    
    for (int i=0; i<N; i++){
        if (i != 0)
            cout << ' ';
        cout << qtd_received[i];
    }
    cout << '\n';
    
    return 0;
}
