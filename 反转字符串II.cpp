给定一个字符串 s 和一个整数 k，从字符串开头算起，每计数至 2k 个字符，就反转这 2k 字符中的前 k 个字符。
	• 如果剩余字符少于 k 个，则将剩余字符全部反转。
	• 如果剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符，其余字符保持原样。

来自 <https://leetcode.cn/problems/reverse-string-ii/description/> 


//解：按题目所给的三种情况求解
class Solution {
public:
    string reverseStr(string s, int k) {
        int count=s.size();
        string::iterator pos=s.begin();
       
            int len=2*k;
            
            while((len<=count))  //大于2k时
            {
                reverse(pos,pos+k);
                count-=len;
                pos+=len;
            }
            if(count>=k&&count<=len) //大于k小与2k时
                reverse(pos,pos+k);
            else
                reverse(pos,s.end()); //小于k时
        
            return s; 
    }
};