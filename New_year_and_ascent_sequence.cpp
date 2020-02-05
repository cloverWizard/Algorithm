// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s[n];
    int max[n], min[n];
    bool contains[n];
    for (int i = 0; i < n; i ++) {
        max[i] = -1;
        min[i] = 100001;
        contains[i] = false;
    }
  
    for (int i = 0; i < n; i ++) {
        int m;
        cin >> m;
        for (int j = 0; j < m; j ++) {
            int tmp;
            cin >> tmp;
            s[i].push_back(tmp);
            if (j != 1 && tmp > min[i])
                contains[i] = true;
            if (tmp > max[i])
                max[i] = tmp;
            if (tmp < min[i])
                min[i] = tmp;
            
        }
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     int localmin = s[i][0];
    //     for (int j = 0; j < s[i].size(); j ++) {
    //         if (s[i][j] > localmin) {
    //             contains[i] = true;
    //             break;
    //         }
    //         if (s[i][j] < localmin)
    //             localmin = s[i][j];
    //     }

    // }
    long long res = 0;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            if (!contains[i] && !contains[j] && min[i] >= max[j])
                res ++;
        }
    }
    cout << (long long)n * (long long)n - res << endl;
	return 0;
}