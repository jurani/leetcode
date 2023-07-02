//给你一个字符串 s ，根据下述规则反转字符串：
	//• 所有非英文字母保留在原有位置。
	//• 所有英文字母（小写或大写）位置反转。
//返回反转后的 s 。

//来自 <https://leetcode.cn/problems/reverse-only-letters/description/> 


//解：运用双指针，一直迭代，遇到字母就停止，然后交换
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int begin=0, end=s.size()-1;
        while(begin<end)
        {
            while(begin<end && !IsLetter(s[begin]))
                ++begin;
            while(begin<end && !IsLetter(s[end]))
                --end;
            swap(s[begin],s[end]);
            ++begin;
            --end;
        }
        return s;
    }
    bool IsLetter(char ch)
    {
        if((ch>='a'&&ch<='z') || (ch>='A')&&ch<='Z')
            return true;
        else
            return false;
    }
};
