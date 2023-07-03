删除有序数组中的重复项

来自 <https://leetcode.cn/problems/remove-duplicates-from-sorted-array/description/> 

给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。然后返回 nums 中唯一元素的个数。
考虑 nums 的唯一元素的数量为 k ，你需要做以下事情确保你的题解可以被通过：
	• 更改数组 nums ，使 nums 的前 k 个元素包含唯一元素，并按照它们最初在 nums 中出现的顺序排列。nums 的其余元素与 nums 的大小不重要。
	• 返回 k 。

解1：
开辟一个辅助空间，遍历找出不重复的元素，最后赋值给原来的vector
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      vector<int> num1;
      int i=0;
      while(i<nums.size())
      {
          int temp=nums[i];
          while(i<nums.size() && temp==nums[i])
            i++;
          num1.push_back(temp);    
      }
      nums=num1;
      return nums.size();
    }
};

解2：运用双指针（快慢指针）

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int q=1,p=1;
        while(q<nums.size())
        {
            if(nums[p-1]!=nums[q])
            {
                nums[p]=nums[q];
                ++p;
            }
            q++;
        }
        return p;
    }
};
