//给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和并同样以字符串形式返回。
//你不能使用任何內建的用于处理大整数的库（比如 BigInteger）， 也不能直接将输入的字符串转换为整数形式。

//来自 <https://leetcode.cn/problems/add-strings/description/> 




//解：模拟带进位位加法的实现
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i1=num1.size()-1, i2=num2.size()-1;//获取字符串尾部下标，从后往前加
        int flag=0;//进位位
        string sum="";
        while(i1>=0 || i2 >=0 ||flag)//重点是两个字符串都加到末尾时还要考虑进位位
        {
            int x=i1>=0?num1[i1]-'0':0;//当字符串走到末尾时要把数置为0
            int y=i2>=0?num2[i2]-'0':0;
            int result=x+y+flag;
            sum.push_back(result%10 + '0');
            flag=result/10;
            --i1;
            --i2;
        }
        reverse(sum.begin(),sum.end());//将字符串逆置
        return sum;
    }
};
