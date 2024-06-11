// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:
// Input: nums = [1,3,5,6], target = 2
// Output: 1
// Example 3:
// Input: nums = [1,3,5,6], target = 7
// Output: 4
// Constraints:
// 1 <= nums.length <= 104
// -104 <= nums[i] <= 104
// nums contains distinct values sorted in ascending order.
// -104 <= target <= 104

#include <stdio.h>

int searchInsert(int *nums, int numsSize, int target)
{
  int left = 0;
  int right = numsSize - 1;
  int idx;

  while (left <= right)
  {
    idx = left + (right - left) / 2;

    if (nums[idx] == target)
    {
      return idx;
    }

    if (nums[idx] < target)
    {
      left = idx + 1;
    }
    else
    {
      right = idx - 1;
    }
  }

  return left;
}

int main()
{
  int nums[4] = {1, 3, 5, 6};
  int target = 2;

  int res = searchInsert(nums, 4, target);
  printf("res: %d\n", res);

  return 0;
}