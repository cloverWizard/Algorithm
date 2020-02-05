#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        for (int i = s.length(); i > 0; --i){
            vector<char> result;        	
            for (int j = 0; j < i; ++j)
        		result.push_back(s[j]);
        	for (int k = 0; k <= s.length() - i; ++k)
        	{
        		if (isPalin(result))
	        		return vector_to_string(result);
	        	result.erase(result.begin());
	        	result.push_back(s[i + k]);
        	}
        }
        return s;
    }
    bool isPalin(vector<char> ivec){
    	if(ivec.size() == 1)
    		return true;
    	for (int i = 0; i < ivec.size() / 2; ++i)
    		if (ivec[i] != ivec[ivec.size() - 1 - i])
    			return false;
    	return true;
    }
    string vector_to_string(vector<char> ivec){
    	string str(ivec.size(), 0);
    	for (int i = 0; i < ivec.size(); ++i)
    		str[i] = ivec[i];
    	return str;
    }
};

