class Solution {
public:
    int minBitFlips(int start, int goal) {
        int Val=start^goal;
        int count=0;
        while(Val>0){
            Val&=(Val-1);
            count++;
        }
        return count;  
    }
};