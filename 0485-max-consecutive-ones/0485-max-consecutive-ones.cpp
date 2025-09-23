class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int counter=0;
        int max_counter=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                counter++;
            }
            else if(nums[i]!=1){
                counter=0;
            }
            max_counter=max(max_counter,counter);
        }
        return max_counter;
    }
};