class Solution {
public:
    int maxJump(vector<int>& stones) {
        int n=stones.size();
        if(n<=2) return stones[n-1]-stones[0];
        int max_jump=0;
        for(int i=0;i+2<n;i++){
    int  jump=stones[i+2]-stones[i];
          max_jump=max(max_jump,jump);
        }
        return max_jump;
    }
};