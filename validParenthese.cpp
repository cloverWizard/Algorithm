#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> validList;
        if(s.length() % 2 == 1)
            return false;
        for (int i = 0; i < s.length(); ++i){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
               validList.push_back(s[i]);
            else{
                if(validList.empty())
                    return false;
                if(isPair(validList.back(), s[i]))
                   validList.pop_back();
                else
                   return false;
            }
        }
        if(validList.size() != 0)
            return false;
        return true;
    }
    
    bool isPair(char s1, char s2){
        if (s1 == '(' && s2 == ')')
            return true;
        if (s1 == '[' && s2 == ']')
            return true;
        if (s1 == '{' && s2 == '}')
            return true;
        return false;
    }
};