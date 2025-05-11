class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1,end=*max_element(nums.begin(),nums.end());
        int ans=end;
        while(start<=end){
            int mid=start+(end-start)/2;
            long long divisor=0;
        for(int num:nums){
            divisor+=(num+mid-1)/mid;
        }
        if(divisor<=threshold){
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