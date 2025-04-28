class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxCount=1;
        int count=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                if(nums[i+1]-nums[i]==1){
                count++;
            }
            else{
                maxCount=max(maxCount,count);
                count=1;
            }
        }
        }
            
        return max(maxCount,count);
    }
};