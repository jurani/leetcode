给你一个 非空 整数数组 nums ，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
你必须设计并实现线性时间复杂度的算法来解决此问题，且该算法只使用常量额外空间。

来自 <https://leetcode.cn/problems/single-number/description/> 


解：使用异或，两数相异或的零
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num=0,i=0;
        while(i<nums.size())
        {
            num^=nums[i];
            i++;
        }
        return num;
    }
};
