给你一个整数数组 nums ，除某个元素仅出现 一次 外，其余每个元素都恰出现 三次 。请你找出并返回那个只出现了一次的元素。
你必须设计并实现线性时间复杂度的算法且不使用额外空间来解决此问题。

来自 <https://leetcode.cn/problems/single-number-ii/description/> 
解：
-2^31 <= nums[i] <= 2^31 - 1，这意味着我们处理的数据都是32位的数据。如果把每一个数字都看成二进制，那么一个十进制数nums[i]对应一个32位的二进制数。将所有nums[i]对应的二进制数的对应位求和，将每一对应位的和值与3进行取模运算，得到的余数就是答案的对应二进制位的数值。这是因为除了答案本身，其它元素都是三个三个为一组的。



class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int map[32]={0};
        int i=0;
        for(auto& e: nums)
        {
		//计算每一位出现的次数
            for(int i=0;i<32;i++)
            {
                if(e & (1<<i))  
                    map[i]++;
            }
        }
        int num=0;
		//将每一对应位的和值与3进行取模运算，得到的余数就是答案
        for(int i=0;i<32;i++)
        {
            if(map[i]%3==1)
            {
                 num|=(1<<i);
            }
        }
        return num;
    }
};