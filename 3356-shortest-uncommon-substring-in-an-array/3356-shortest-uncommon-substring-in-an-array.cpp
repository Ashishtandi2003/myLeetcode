class Solution {
public:
    vector<string> shortestSubstrings(vector<string>& arr) {
        vector<string> result;
        unordered_map <string,int> mp;
        for(string &str : arr){

            unordered_set <string> seen;

            for(int i=0 ; i<str.length() ; i++){
                for(int j=i+1 ; j<=str.length() ;j++){
                    string substr = str.substr(i,j-i);
                    if(seen.find(substr) == seen.end()){
                        mp[substr]++;
                        seen.insert(substr);
                    }
                }
            }
        }
        for(string &str : arr){
            string shortest = "";
            for(int i=0 ; i<str.length() ; i++){
                for(int j=i+1 ; j<=str.length() ;j++){
                    string substr = str.substr(i,j-i);

                    if(mp[substr] == 1 && (shortest == "" || substr.length() < shortest.length() || 
                    substr.length()==shortest.length() && substr < shortest)){
                        shortest = substr;
                    }
                }
            }
            result.emplace_back(shortest);
        }
        return result;
    }
};