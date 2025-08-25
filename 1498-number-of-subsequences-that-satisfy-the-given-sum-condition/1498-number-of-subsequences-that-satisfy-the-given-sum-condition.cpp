class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ptr1=0;
        int ptr2=nums.size()-1;
        int count=0;
        int modulo=1e9+7;
        vector<int> pow2(nums.size());
        pow2[0]=1;
        for(int i=1;i<nums.size();i++){
            pow2[i]=(pow2[i-1]*2)%modulo;
        }
        while(ptr1<=ptr2){
            if(nums[ptr1]+nums[ptr2]<=target){
                count=(count+pow2[ptr2-ptr1])%modulo;
                ptr1++;
            }
            else{
                ptr2--;
            }
        }
        return count;
    }
};