class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int ptr1=nums[i];
            int ptr2=nums[i+1];
            while(ptr1<ptr2)
            if(ptr1<ptr2){
                swap(nums[i],nums[i+1]);
                ptr1++;
                ptr2++;
            }
                else{
                    ptr2++;
                }
            }
        }
};