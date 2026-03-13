class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        vector<int>arr;
        while(i<j){
            int sum = numbers[i]+numbers[j];
            if(sum==target){
                arr.push_back(i+1);
                arr.push_back(j+1);
                break;
            }
            else if(sum>target){
                j--;
            }
            else{
                i++;
            }
        }
        return arr;
    }
};