class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
    for(int i=0;i<(int)asteroids.size();i++){
        int current=asteroids[i];
        bool destroyed=false;
        while(!ans.empty() && current < 0 && ans.back()>0){
       if(ans.back()<-current){
        ans.pop_back();
        continue;
       }
       else if(ans.back()==-current){
        ans.pop_back();
        destroyed=true;
        break;
       }
       else{
        destroyed=true;
        break;
       }

        }
          if(!destroyed) ans.push_back(current);
    }
    return ans;
        
    }
};