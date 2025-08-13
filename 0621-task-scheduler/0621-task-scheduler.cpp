class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> freq;
        for(char ch : tasks){
            freq[ch]++;
        }
        priority_queue<pair<int,char>> maxHeap;
        for(auto& p:freq){
            maxHeap.push({p.second,p.first});
        }
        using Node=tuple<int,int,char>;
        priority_queue<Node,vector<Node>,greater<Node>> minHeap;
        int time=0;
        while(!maxHeap.empty() || !minHeap.empty()){
            time++;
            if(!maxHeap.empty()){
            auto[count,ch]=maxHeap.top();
            maxHeap.pop();
            count--;
            if(count>0){
                minHeap.push({time+n,count,ch});
            }
        }
        while(!minHeap.empty() && get<0>(minHeap.top())==time){
            auto[readyTime,count,ch]=minHeap.top();
            minHeap.pop();
            maxHeap.push({count,ch});
        }
        }
        return time;
    }
};