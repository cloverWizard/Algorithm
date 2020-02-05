#include <bits/stdc++.h>

using namespace std;

int findRoot(map<int,int> parent, int x) {
    int root;
    int child = x, tmp;
    while (parent[x] != x) {
        x = parent[x];
    }
    root = x;

    while(child != root) {
        tmp = parent[child];
        parent[child] = root;
        child = tmp;
    }
    return root;
    // return parent[x] == x ? x : findRoot(parent, parent[x]);
}

// Complete the maxCircle function below.
// vector<int> maxCircle(vector<vector<int>> queries) {
//     set<int> crowd;
//     vector<int> res;
//     for (int i = 0; i < queries.size(); i ++) {
//         crowd.insert(queries[i][0]);
//         crowd.insert(queries[i][1]);
//     }
//     int n = crowd.size();
//     //initialization
//     map<int,int> parent, count;

//     int it = 0;
//     for (set<int>::iterator i = crowd.begin(); i != crowd.end(); i ++) {
//         parent[*i] = *i;
//         count[*i] = 1;
//         it ++;
//     }
    

//     // cout << "n = " << n << endl;
//     int max = 1;
//     //union
//     for (int i = 0; i < queries.size(); i ++) {
//         int p1 = findRoot(parent, queries[i][0]);
//         int p2 = findRoot(parent, queries[i][1]);
//         if (p1 != p2) {
//             parent[p2] = p1;
//             count[p1] += count[p2];
//         }
//         if(count[p1] > max)
//             max = count[p1];
//         // for (set<int>::iterator i = crowd.begin(); i != crowd.end(); i ++) {
//         //     count[*i] = 0;
//         // }
//         // for (map<int,int>::iterator j = parent.begin(); j != parent.end(); j ++) {
//         //     count[findRoot(parent, j->first)] ++;
//         //     cout << j->first << " " << count[findRoot(parent, j->first)] << endl;
//         // }
//         // int max = 1;
//         // for(map<int,int>::iterator j = count.begin(); j != count.end(); j ++) {
//         //     if (j->second > max)
//         //         max = j->second;
//         // }
//         res.push_back(max);
//         cout << max << endl;
//     }
//     return res;
// }

int main()
{
    set<int> crowd;
    vector<int> res;
    vector<vector<int>> queries;
    int N;
    cin >> n;
    for (int i = 0; i < N; i ++) {
        int f1, f2;
        vector<int> tmp;
        cin >> f1 >> f2
        crowd.insert(f1);
        crowd.insert(f2);
        tmp.push_back(f1);
        tmp.push_back(f2);
        queries.push_back(tmp);
    }
    int n = crowd.size();
    //initialization
    map<int,int> parent, count;

    int it = 0;
    for (set<int>::iterator i = crowd.begin(); i != crowd.end(); i ++) {
        parent[*i] = *i;
        count[*i] = 1;
        it ++;
    }
    

    // cout << "n = " << n << endl;
    int max = 1;
    //union
    for (int i = 0; i < N; i ++) {
        int p1 = findRoot(parent, queries[i][0]);
        int p2 = findRoot(parent, queries[i][1]);
        if (p1 != p2) {
            parent[p2] = p1;
            count[p1] += count[p2];
        }
        if(count[p1] > max)
            max = count[p1];
        // for (set<int>::iterator i = crowd.begin(); i != crowd.end(); i ++) {
        //     count[*i] = 0;
        // }
        // for (map<int,int>::iterator j = parent.begin(); j != parent.end(); j ++) {
        //     count[findRoot(parent, j->first)] ++;
        //     cout << j->first << " " << count[findRoot(parent, j->first)] << endl;
        // }
        // int max = 1;
        // for(map<int,int>::iterator j = count.begin(); j != count.end(); j ++) {
        //     if (j->second > max)
        //         max = j->second;
        // }
        res.push_back(max);
        cout << max << endl;
    }

    return 0;
}
