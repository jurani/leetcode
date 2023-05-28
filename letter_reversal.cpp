class Solution {
public:
    bool isLetter(char ch)    //判断是否为字母
    {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            return true;
        else
            return false;
    }
    string reverseOnlyLetters(string s) {
        size_t begin=0,end=s.size()-1;
        while(begin < end)
        {
            //运用双下标，跳过非字母的位置
            while( begin<end && (!isLetter(s[begin])) )
            {
                ++begin;
            }
            while( begin < end && (!isLetter(s[end])) )
            {
                --end;
            }
            swap(s[begin],s[end]);  //反转字母
            ++begin;
            --end;
        }
        return s;
    }
};