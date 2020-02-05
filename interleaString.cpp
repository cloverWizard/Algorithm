#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if ((s1.length() + s2.length()) != s3.length())
        	return false;
        char *p, *q;
        p = const_cast<char*>(s1.c_str());
        q = const_cast<char*>(s2.c_str());
        for (int i = 0; i < s3.length(); ++i)
        {
        	if ((s3[i] == *p) && (*p != '\0'))
        		p ++;
        	else if ((s3[i] == *q) && (*q != '\0'))
        		q ++;
        	else
        		return false;
        }
        return true;
    }
};

int main(){
	Solution sol;
	if(sol.isInterleave("aabcc", "dbbca", "aadbbcbcac"))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}