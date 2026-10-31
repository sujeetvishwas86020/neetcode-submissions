
class Solution {
public:
    string encode(vector<string>& strs) {
        int required_space=0;
        string encoded_string;
        for(auto &s:strs)
        {
            required_space+=(to_string(s.length()).length()+1);
            required_space+=s.length();
        }
        encoded_string.reserve(required_space);
        for(auto &s:strs)
        {
            encoded_string+=to_string(s.length());
            encoded_string+=",";
            encoded_string+=s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strings;
        int i=0,k,len;
        auto sz=s.length();
        while(i<sz)
        {
            k=i;
            while(s[i]!=',') i++;
            len=stoi(s.substr(k,i-k));
            i++;
            decoded_strings.push_back(s.substr(i,len));
            i+=len;
        }
        return decoded_strings;
    }
};
