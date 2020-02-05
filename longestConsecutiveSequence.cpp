#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int MAX_NUM = nums[0];
        int longestConsec = 0;
        for (int i = 0; i < nums.size(); ++i)
            if (nums[i] > MAX_NUM)
                MAX_NUM = nums[i];
        const int volume = MAX_NUM;
        int table[volume]  = {0};
        for (int i = 0; i < nums.size(); ++i)
            table[nums[i]] ++;
        int temp = 0;
        for (int j = 0; j < MAX_NUM; ++j){
            if (table[j] == 0){
                if (temp >= longestConsec)
                    longestConsec = temp;
                temp = 0;
            }
            else
                temp ++;
        }
        if (temp >= longestConsec)
            longestConsec = temp;
        return longestConsec;
    }
};

int main(){
    vector<int> tests {100, 30, 1, 5, 8, 2, 7, 3, 6, 4};
    int result = longestConsecutive();
    cout << result << endl;
    return 0;
}

