
//描述
//将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。 数值为 0 或者字符串不是一个合法的数值则返回 0
//数据范围：字符串长度满足 0≤ ≤100 0≤n≤100 
//进阶：空间复杂度  (1) O(1)  ，时间复杂度  ( ) O(n) 

//注意：
//①字符串中可能出现任意符号，出现除 +/- 以外符号时直接输出 0
//②字符串中可能出现 +/- 且仅可能出现在字符串首位。

//来自 <https://www.nowcoder.com/practice/1277c681251b4372bdef344468e4f26e?tpId=13&&tqId=11202&rp=6&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking> 

//有四种情况空格打头：删除空格
//符号打头：记录符号
//数字打头：直接开始处理
//非以上三种情况：return 0；
class Solution {
public:
    int StrToInt(string str) {
        long long num=0;
        int flag=1; //符号位
        for(int i=0;i<str.size();++i)
        {
            if(str[i]==' ')
                continue;
            else if(str[i]=='+')
                flag=1;
            else if(str[i]=='-')
                flag=-1;
            else if(isdigit(str[i]))
                num=num*10+(str[i]-'0');
            else 
                return 0;
        }
        return flag*num;
    }
};