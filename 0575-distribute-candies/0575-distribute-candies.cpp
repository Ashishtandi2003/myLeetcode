class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_set<int> st;
        for(int arr : candyType){
            st.insert(arr);
        }
        int unique_candies = st.size();
        int N = n/2;
        return min(unique_candies , N);
    }
};