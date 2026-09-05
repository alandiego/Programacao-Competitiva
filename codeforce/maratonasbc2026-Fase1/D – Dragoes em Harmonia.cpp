#include<bits/stdc++.h>

using namespace std;

//normal
//0°       → (i][j)
//90°      → (j][N-1-i)
//180°     → (N-1-i][M-1-j)
//270°     → (M-1-j][i)
// Flip horizontal
//0°       → (i][M-1-j)
//90°      → (M-1-j][N-1-i)
//180°     → (N-1-i][j)
//270°     → (j][i)


int main() {

	char scrool[1005][1005];

	int N, M;

	cin >> N >> M;

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			cin >> scrool[i][j];
		}
	}

	int valid[8] = {1, 1, 1, 1, 1, 1, 1, 1};

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			//normal
			//0°       → (i][j)
			//90°      → (j][N-1-i)
			if (N != M  || scrool[i][j] != scrool[j][N-1-i]) valid[1] = 0;
			//180°     → (N-1-i][M-1-j)
			if ( scrool[i][j] != scrool[N-1-i][M-1-j]) valid[2] = 0;
			//270°     → (M-1-j][i)
			if (N != M  || scrool[i][j] != scrool[M-1-j][i]) valid[3] = 0;
			// Flip horizontal
			//0°       → (i][M-1-j)
			if (scrool[i][j] != scrool[i][M-1-j]) valid[4] = 0;
			//90°      → (M-1-j][N-1-i)
			if (N != M  || scrool[i][j] != scrool[M-1-j][N-1-i]) valid[5] = 0;
			//180°     → (N-1-i][j)
			if (scrool[i][j] != scrool[N-1-i][j]) valid[6] = 0;
			//270°     → (j][i)
			if (N != M  || scrool[i][j] != scrool[j][i]) valid[7] = 0;
		}
	}

    int ans = 0;
    
    for (int i=0; i<8; i++){
        ans+=valid[i];
    }

	cout << ans <<'\n';

	return 0;
}
