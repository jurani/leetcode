描述
计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。（注：字符串末尾不以空格为结尾）
输入描述：
输入一行，代表要计算的字符串，非空，长度小于5000。
输出描述：
输出一个整数，表示输入字符串最后一个单词的长度。

来自 <https://www.nowcoder.com/practice/8c949ea5f36f422594b306a2300315da?tpId=37&&tqId=21224&rp=5&ru=/activity/oj&qru=/ta/huawei/question-ranking> 


#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1;
    while (getline(cin,s1)) { // 不能用cin，cin遇到空格结束
        size_t pos = s1.rfind(' '); //从后往前找，找到最后一个空格
        int len=s1.size()-1-pos;
        cout<<len<<endl;
    }
    return 0;
}