 vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char, int>, vector<string>> um;
        
        vector<vector<string>> ans;
        
        for(auto x: strs){
            map<char, int> m;
            for(int i = 0; i < x.size(); i++)
                m[x[i]]++;
            um[m].push_back(x);
        }
        
        for(auto x: um){
            ans.push_back(x.second);
        }
        
        return ans;
    }
