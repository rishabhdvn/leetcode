class Solution {
public:
int helperFunction(vector<int>& nums,int k){
    if(k<0) return 0;
         int n=nums.size();
         int count=0,left=0,sum=0;
         for( int right=0;right<n;right++){
            sum+=(nums[right]%2);
                while(sum>k){
                    sum-=(nums[left++]%2);
                }
                count+=right-left+1;
            }
            return count;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
     return helperFunction(nums,k)-helperFunction(nums,k-1) ;
    }
};