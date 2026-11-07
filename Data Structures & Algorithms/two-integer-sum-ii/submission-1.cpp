class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>res;
        int n = numbers.size()-1;
        int i = 0;
        int j = n;
        while(i<j){
            if((numbers[i] + numbers[j])>target){
                j--;
            }else if((numbers[i] + numbers[j])<target){
                i++;
            }
            else if((numbers[i] + numbers[j])==target){
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }
        }
        return res;
        
    }
};
