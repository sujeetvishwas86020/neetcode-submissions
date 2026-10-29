class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string, vector<string>> m;

        for (auto &s : strs)
        {
            vector<int> fr(256, 0);

            for (auto c : s)
                fr[(unsigned char)c]++;

            string key;
            key.reserve(512);

            for (auto count : fr)
            {
                key += to_string(count);
                key += ",";
            }

            m[key].push_back(s);
        }

        vector<vector<string>> grps(m.size());

        int idx = 0;

        for (auto &pr : m)
        {
            grps[idx] = move(pr.second);
            idx++;
        }

        return grps;

    }
};
