class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
unordered_set<int> s;
for(auto n:nums) s.insert(n);
int longest_length;
int current_length;
int current_num;
longest_length=0;
for(auto n:nums)
{
if(!s.contains(n-1))
{
current_length=1;
current_num=n;
while(true)
{
if(s.contains(current_num+1))
{
++current_num;
++current_length;
}
else
{
break;
}
}
if(current_length>longest_length) longest_length=current_length;
}
}
return longest_length;

    }
};
