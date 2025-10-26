class Solution {
public:
int robRecursively(vector<int>& nums,int index){
    if(index>=nums.size()) return 0;
    int take=nums[index]+robRecursively(nums,index+2);
    int notTake=robRecursively(nums,index+1);

    return max(take,notTake);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> firstScenario(nums.begin(),nums.end()-1);
        int rob1=robRecursively(firstScenario,0);
        vector<int> secondScenario(nums.begin()+1,nums.end());
        int rob2=robRecursively(secondScenario,0);
        return max(rob1,rob2);
    }
};