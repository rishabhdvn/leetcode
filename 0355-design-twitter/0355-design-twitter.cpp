class Twitter {
    private:
    int time;
    unordered_map<int,unordered_set<int>> following;
    unordered_map<int,vector<pair<int,int>>> tweets;

public:
    Twitter() {
        time=0; 
    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time++,tweetId});
    
    }
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>> pq;
        for(auto& t :tweets[userId]){
            pq.push(t);
        }
        for(int f : following[userId]){
            for(auto &t : tweets[f]){
                pq.push(t);
            }
        }
        vector<int> feed;
        int count=0;
        while(!pq.empty() && count<10){
            feed.push_back(pq.top().second);
            pq.pop();
            count++;
        }
        return feed;
        
    }
    
    void follow(int followerId, int followeeId) {
        if(followerId!=followeeId){
            following[followerId].insert(followeeId);
        }
        
    }
    
    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
        
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */