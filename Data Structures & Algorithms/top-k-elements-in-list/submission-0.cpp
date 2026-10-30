class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
int i;
for(auto n:nums) m[n]++;
size_t sz;
sz=nums.size();
vector<vector<int>> buckets(sz+1);
for(auto &p:m) buckets[p.second].push_back(p.first);
// buckets populated
// collect into top
vector<int> top(k);
int j=0;
for(i=sz;i>=0;--i)
{
for(auto n:buckets[i])
{
top[j++]=n;
if(j==k) return top;
}
}
return top; // logically unreachable code
    }
};
