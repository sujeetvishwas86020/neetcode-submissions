class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

vector<int> products(nums.size());
int sz=nums.size();
int left=1;
int i=0;
while(i<sz)
{
    products[i]=left;
    left*=nums[i];
    i++;
}
int right=1;
i=sz-1;
while(i>=0)
{
    products[i]*=right;
    right*=nums[i];
    i--;
}
return products;

    }
};
