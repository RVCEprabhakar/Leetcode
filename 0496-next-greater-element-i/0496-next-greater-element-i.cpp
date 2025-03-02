class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int>ans(nums1.size(),-1);
        stack<int>st;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums2[i]>=st.top()){
                mp[st.top()]=nums2[i]; 
                st.pop();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(mp[nums1[i]]){
                ans[i]=mp[nums1[i]];
            }
        }
        return ans;
    }
};