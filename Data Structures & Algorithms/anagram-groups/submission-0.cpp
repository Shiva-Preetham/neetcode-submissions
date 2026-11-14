class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>groups;
        for(string& w: strs){
            string key = w;
            sort(key.begin(),key.end());
            if(groups.find(key) == groups.end()){
                groups[key] = vector<string>();
            }
            groups[key].push_back(w);
        }
        vector<vector<string>>res;
        for(auto it = groups.begin();it!=groups.end();it++){
            res.push_back(it->second);
        }
        return res;
        
    }
};