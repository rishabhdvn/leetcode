class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start=*max_element(nums.begin(),nums.end());
        int end=accumulate(nums.begin(),nums.end(),0);
        int ans=end;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            int currentSum=0,k1=1;
            for(int num:nums){
                if(currentSum+num>mid){
                    k1++;
                    currentSum=0;
                }
               currentSum+=num;
            }
            if(k1<=k){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;   
    }
};