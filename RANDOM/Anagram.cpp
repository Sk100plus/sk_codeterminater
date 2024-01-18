// vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<vector<string> > vec;
//        unordered_map<string,vector<string>> m;
//        for(int i=0;i<strs.size();i++){
//            string word=strs[i];
//            sort(strs[i].begin(),strs[i].end());
//            m[strs[i]].push_back(word);
//        }
//        for(auto x:m){
//            vec.push_back(x.second);
//        }
//        return vec;

//     }

// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]