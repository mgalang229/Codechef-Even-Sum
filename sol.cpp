#include <bits/stdc++.h> 	

using namespace std;
    
int main() {                          	
	ios::sync_with_stdio(false);
	cin.tie(0);          
	int tt;
	cin >> tt;
	while (tt--) {           
		int n;
		cin >> n;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			sum += a;
		}
		// Player 1 wins if the sum is even, otherwise, Player 2 wins
		cout << (sum % 2 == 0 ? 1 : 2) << '\n';
	}
	return 0;
}