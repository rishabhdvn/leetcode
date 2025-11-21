class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graphs(numCourses);
        vector<int> indegree(numCourses);
        for(auto& p : prerequisites){
            int course=p[0];
            int pre=p[1];
            graphs[pre].push_back(course);
            indegree[course]++;
        }
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<numCourses;i++){
           if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();

            for(int next : graphs[node]){
                    indegree[next]--;
                    if(indegree[next]==0) q.push(next);
                }
            }
            if(ans.size() != numCourses) return {};
              return ans;
    }
};