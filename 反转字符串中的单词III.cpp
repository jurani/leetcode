给定一个字符串 s ，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。
 
示例 1：
输入：s = "Let's take LeetCode contest"
输出："s'teL ekat edoCteeL tsetnoc"

来自 <https://leetcode.cn/problems/reverse-words-in-a-string-iii/description/> 


//原地解法，运用双指针，找到空格的位置，然后交换字符
class Solution {
public:
    string reverseWords(string s) {
        size_t len=s.size();
        int left=0,end=0;
        while(end<len)
        {
            while(end<len && s[end]!=' ') //找到空格的位置
                end++;
            int right=end-1;
            while(left<right)  //交换字符
            {
                swap(s[left],s[right]);
                left++;
                right--;
            }
            end++;   //更新指针
            left=end;
        }
        return s;
    }
};
