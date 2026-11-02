class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
int rows[9]={0};
int columns[9]={0};
int sub_sections[9]={0};
int r,c,i,bit_mask,value;
char ch;
for(r=0;r<9;++r)
for(c=0;c<9;++c)
{
ch=board[r][c];
if(ch=='.') continue;
value=ch-'1';
bit_mask=1<<value;
i=(r/3)*3+(c/3);
if((rows[r]&bit_mask) ||
(columns[c]&bit_mask) ||
(sub_sections[i]&bit_mask))
return false;
rows[r]|=bit_mask;
columns[c]|=bit_mask;
sub_sections[i]|=bit_mask;
}
return true;

    }
};
