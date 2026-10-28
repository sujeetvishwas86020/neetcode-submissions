class Solution {
public:
    bool hasDuplicate(vector<int>& x) {
        unordered_set<int> u;
for(auto m:x)
{
if(u.contains(m)) return true;
u.insert(m);
}
return false;

    }
};