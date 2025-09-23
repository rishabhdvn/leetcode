class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int no=0;
        for(int i=0;i<n;i++){
            no^=nums[i];
        }
        return no;
        
    }
};