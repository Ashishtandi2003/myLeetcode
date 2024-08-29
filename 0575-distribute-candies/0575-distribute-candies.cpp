class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();  // Total number of candies
        unordered_set<int> st;     // Set to store unique candy types
        
        // Insert each candy type into the set to count unique types
        for(int arr : candyType){
            st.insert(arr);
        }
        
        // Calculate the number of unique types and the maximum allowed per sibling
        int uniqueTypes = st.size();
        int maxAllowed = n / 2;

        // Return the minimum of unique types and max allowed per sibling
        return min(uniqueTypes, maxAllowed);
    }
};
