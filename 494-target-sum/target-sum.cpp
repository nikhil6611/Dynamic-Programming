class Solution {
public:
    void helper(vector<int>& nums,int target,int &count,int n){
        
        if(n<0){
            if(target==0){
                count++;
                return;
            }
            else{
                return;
            }
        }
        helper(nums,target+nums[n],count,n-1);
        helper(nums,target-nums[n],count,n-1);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int count=0;
        helper(nums,target,count,nums.size()-1);
        return count;
    }
};