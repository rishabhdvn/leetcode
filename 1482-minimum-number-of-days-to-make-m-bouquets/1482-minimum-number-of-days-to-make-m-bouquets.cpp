class Solution {
public: 
bool possible(vector<int>& bloomDay,int day,int m,int k){
    int n=bloomDay.size();
    int count=0;
    int noofBouquets=0;
    for(int i=0;i<n;i++){
        if(bloomDay[i]<=day){
            count++;
        }
        else{
            noofBouquets+=(count/k);
            count=0;
        }
    }
    noofBouquets+=(count/k);
    return noofBouquets>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=1ll*m*k*1ll;
        int n=bloomDay.size();
        if(val>n) return -1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(bloomDay[i],mini);
            maxi=max(bloomDay[i],maxi);
        }
        int start=mini,end=maxi;
        while(start<=end){
            int mid=(start+end)/2;
            if(possible(bloomDay,mid,m,k)){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
        
    }
};