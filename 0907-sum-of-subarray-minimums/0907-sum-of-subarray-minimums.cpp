class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        long long MOD=1e9 +7;
        stack<int> st;
        vector<int> left(n),right(n);
            for(int i=0;i<n;i++){
                while(!st.empty() && arr[st.top()]>arr[i]){
                    st.pop();
                }
               left[i]=st.empty() ? i+1 : i-st.top();
               st.push(i);
                }
                while(!st.empty()) st.pop();
                for(int i=n-1;i>=0;i--){
                    while(!st.empty() && arr[st.top()]>=arr[i]){
                        st.pop();
                    }
                    right[i]=st.empty() ? n-i : st.top()-i;
                    st.push(i);
                }
                long long ans=0;
                for(int i=0;i<arr.size();i++){
                    ans+=left[i]*right[i]*arr[i]%MOD;
                }
                return (int)ans;
            }
};