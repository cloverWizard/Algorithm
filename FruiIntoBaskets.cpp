#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& tree) {
        vector<int> basket;  //countNum stores the amount of continuous type
        int type1 = 40001, type2 = tree[0]; //type 2 stores the newest element
        int count = 1, result = 1;     //count stores the amout of continuous elements
        if(tree.size() > 2){
            for (int i = 1; i < tree.size(); ++i)
            {cout << "type1 = " << type1 << " type2 = " << type2 << 
                " count = " << count << " result = " << result << endl;
                if (type1 == 40001 && tree[i] != type2)
                {
                    count = 1;
                    result ++;
                    type1 = type2; 
                    type2 = tree[i];
    
                }
                else{
                    if(tree[i] == type2){ 
                        count ++;
                        result ++;
        
                    }
                    else if(tree[i] == type1){
                        count = 1;
                        result ++;
                        int temp  = type2;
                        type2 = type1;
                        type1 = temp;
                    }
                    
                    else{
                        
                        result = count + 1;
                        count = 1;
                        type1 = type2;
                        type2 = tree[i];
                    }
                }
                basket.push_back(result);
                cout << "type1 = " << type1 << " type2 = " << type2 << 
                " count = " << count << " result = " << result << endl;
            }
            int largest = basket[0];
            for (int i = 0; i < basket.size(); ++i){
                if (basket[i] >= largest)
                    largest = basket[i];
            }
            return largest;
        }
        else if (tree.size() == 1) 
            return 1;
        else
            return 2;
    }
};



int main(){
	//int tests[] = {1,2,1};
	vector<int> tree1 = {0,0,1,1};
    vector<int> tree2 = {1,2,3,2,2};
    vector<int> tree3 = {3,3,3,1,2,1,1,2,3,3,4};

    //cout << tree.size() << endl;
	Solution sol;
	cout << sol.totalFruit(tree1) << endl; 
    cout << sol.totalFruit(tree2) << endl; 
    cout << sol.totalFruit(tree3) << endl; 

	return 0;
}
