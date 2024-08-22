class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int,int> mp;
       for(int a : arr){
        mp[a]++;
       }
       unordered_set<int> st;
       for(auto it : mp){
        // int freq = it.second;
        if(st.find(it.second) != st.end()){
            return false;
        }
        else{
            st.insert(it.second);
        }
       }
       return true;
    }
};