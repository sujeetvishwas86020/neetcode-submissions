class Solution {
public:
bool is_alphanumeric(char c)
{
if(c>='a' && c<='z') return true;
if(c>='A' && c<='Z') return true;
if(c>='0' && c<='9') return true;
return false;
}
bool is_same(char left, char right)
{
if(left>='a' && left<='z') left-=32;
if(right>='a' && right<='z') right-=32;
return left==right;
}

    bool isPalindrome(string s) {
        
const char *left;
const char *right;
left=s.c_str(); // left points to the first character of the string
right=left+s.length()-1; // right points to the last character
while(left<right)
{
while(left<right && !isalnum(*left)) left++;
while(right>left && !isalnum(*right)) right--;
if(left>=right) break;
if(tolower(*left)!=tolower(*right))
return false;
++left;
--right;
}
return true;
    }
};
