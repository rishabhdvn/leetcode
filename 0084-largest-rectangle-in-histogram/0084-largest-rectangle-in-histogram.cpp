class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        int maxHeight=0;
        for(int i=0;i<=n;i++){
            int current=(i==n ? 0 : heights[i]);

            while(!st.empty() && current<heights[st.top()]){
                int height=heights[st.top()];
                st.pop();
                int left=(st.empty() ? -1 : st.top());
                int right=i;
              int  width=right-left-1;
                maxHeight=max(maxHeight,height*width);
            }
            st.push(i);
        }
          return maxHeight;
    }
};