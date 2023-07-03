给你一个整数数组 nums，其中恰好有两个元素只出现一次，其余所有元素均出现两次。 找出只出现一次的那两个元素。你可以按 任意顺序 返回答案。
你必须设计并实现线性时间复杂度的算法且仅使用常量额外空间来解决此问题。
 
示例 1：
输入：nums = [1,2,1,3,2,5]
输出：[3,5]
解释：[5, 3] 也是有效的答案。

来自 <https://leetcode.cn/problems/single-number-iii/description/> 



//解：
1.先讲全部的元素异或就会得到只出现一次的两个元素的异或的结果
2.因为是两个不同的元素，所以可以用位运算求得第一个是1的位
3.最后将所有元素按第二步所求得的位分成两组，那么两个不同的元素就会分到不同的组，
然后每组各自异或就求的所需要的两个元素
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> num(2,0);
        int sum=0;
        for(auto& e:nums)
        {
            sum^=e;   //步骤1
        }
        int i=0;
        while(i<32)   //步骤2
        {
            if(sum & (1<<i))
                break;
            ++i;
        }
        int num1=0,num2=0;
        for(auto& e:nums)   //步骤3
        {
            if(e & (1<<i))
                num1^=e;
            else
                num2^=e;
        }
        num[0]=num1;
        num[1]=num2;
        return num;
    }
};
