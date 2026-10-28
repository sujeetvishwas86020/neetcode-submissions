class Solution {
public:
    bool isAnagram(string a, string b) {
        if(a.length()!=b.length()) return false;
int arr[255]={};
for(int i=0;i<a.length();++i)
{
arr[(int)a[i]]++;
arr[(int)b[i]]--;
}
for(int i=0;i<255;++i)
{
if(arr[i]!=0) return false;
}
return true;
    }
};
