class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        for (int i = 0; i < (int)asteroids.size(); i++) {
            int current = asteroids[i];
            bool destroyed = false;

            // collide only when stack top is moving right and current moves left
            while (!ans.empty() && current < 0 && ans.back() > 0) {
                if (ans.back() < -current) {
                    // stack asteroid smaller -> it explodes; keep checking further
                    ans.pop_back();
                    continue;
                } else if (ans.back() == -current) {
                    // equal size -> both explode
                    ans.pop_back();
                    destroyed = true;
                    break;
                } else { 
                    // stack asteroid larger -> current explodes
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) ans.push_back(current);
        }
        return ans;
    }
};
