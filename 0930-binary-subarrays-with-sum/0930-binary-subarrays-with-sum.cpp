class Solution {
public:
int atMostGoal(vector<int>& nums, int goal){
    if(goal<0) return 0;
    int n=nums.size();
    int left=0,sum=0,count=0;
    for(int right=0;right<n;right++){
        sum+=nums[right];
        while(sum>goal){
            sum-=nums[left++];
        }
        count+=right-left+1;
    }
    return count;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMostGoal(nums,goal)-atMostGoal(nums,goal-1);
        
    }
};