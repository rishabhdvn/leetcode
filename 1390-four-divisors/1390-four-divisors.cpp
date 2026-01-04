class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int x : nums){
            int sum=0;
            int count=0;
            for(int d=1;d*d<=x;d++){
                if(x%d==0){
                    int d2=x/d;
                    if(d==d2){
                        count++;
                        sum+=d;
                    }
                    else{
                        count+=2;
                        sum+=d+d2;
                    }
                }
            }
            if(count>4) break;
            else if(count==4) ans+=sum;
        }
        return ans;
    }
};