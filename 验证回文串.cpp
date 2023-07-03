如果在将所有大写字符转换为小写字符、并移除所有非字母数字字符之后，短语正着读和反着读都一样。则可以认为该短语是一个 回文串 。
字母和数字都属于字母数字字符。
给你一个字符串 s，如果它是 回文串 ，返回 true ；否则，返回 false 。

来自 <https://leetcode.cn/problems/valid-palindrome/description/> 


class Solution {
public:
    bool isLetterOrNum(char ch)
    {   //判断是否是字母数字字符
        return (ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z')
        || (ch>='0'&&ch<='9');
    }
    bool isPalindrome(string s) {
        //先把小写转为大写
        for(auto& ch: s)
        {
            if(ch>='a' && ch<='z')
                ch-=32;
        }
        //运用双指针
        int begin=0,end=s.size()-1;
        while(begin<end)
        {
            //跳过其他字符
            while(begin<end && !isLetterOrNum(s[begin]))
                begin++;
            while(begin<end && !isLetterOrNum(s[end]))
                end--;
            if(s[begin]!=s[end])
                return false;
            begin++;
            end--;
        }
        return true;
    }
};
