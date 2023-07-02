//给定一个字符串 s ，找到 它的第一个不重复的字符，并返回它的索引 。如果不存在，则返回 -1 。

//来自 <https://leetcode.cn/problems/first-unique-character-in-a-string/description/> 


//解：先将字符串的字母出现的次数计数，在遍历字符串找出第一个不重复
//的字母
class Solution {
public:
    int firstUniqChar(string s) {
        int map[256]={0};
        for(int i=0;i<s.size();++i) //将字母映射到各自位置计数
            map[s[i]]+=1;
        for(int i=0;i<s.size();++i)
        {
            if(map[s[i]]==1)  //找出第一个不重复的字母
                return i;
        }
        return -1;
    }
};
