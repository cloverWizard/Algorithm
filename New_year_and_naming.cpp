#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, m;

	cin >> n >> m;
		string S[n], T[m];
	for (int i = 0; i < n; i ++) {
	    cin >> S[i];
	    // cout << "S[" << i << "] = " << S[i] << endl;
	  }
	for (int i = 0; i < m; i ++) {
	    cin >> T[i];
	  	// cout << "T[" << i << "] = " << T[i] << endl;
	  }
	int N;
	cin >> N;
	int year;
	for (int k = 0; k < N; k ++) {
	    cin >> year;
	    int i = (year % n + n - 1) % n;
	    int j = (year % m + m - 1) % m;
	    string res = S[i] + T[j];
	    cout << res << endl;
	}
	return 0;
}