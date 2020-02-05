#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i ++){
		string N;
		vector<int> a, A, B;
		cin >> N;
		bool flag = false;

		for (int j = 0; j < N.size(); ++j)
		{
			int temp = N[j] - '0';
			a.push_back(temp);
			if (temp == 4)
			{
				flag = true;
				A.push_back(2);
				B.push_back(2);
			}
			else {
				A.push_back(temp);
				if (flag)
				{
					B.push_back(0);
				}
			}
		}

		cout << "Case #" << i + 1 << ": ";
		for (int j = 0; j < A.size(); ++j)
		{
			cout << A[j];
		}
		cout << " ";
		for (int j = 0; j < B.size(); ++j)
		{
			cout << B[j];
		}
		cout << endl;
		// for (int i = 0; i < a.size(); ++i)
		// {
		// 	cout << a[i];
		// }
		// cout << endl;
	}
	return 0;
}