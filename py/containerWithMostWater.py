# You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of
# the ith line are (i, 0) and (i, height[i]).
# Find two lines that together with the x-axis form a container, such that the container contains the most water.
# Return the maximum amount of water a container can store.

from typing import List


class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxArea = 0
        left = 0
        right = len(height) - 1

        while (left < right):
            currArea = (right - left) * min(height[left], height[right])
            maxArea = max(maxArea, currArea)

            if height[left] < height[right]:
                left += 1
            else:
                right -= 1

        return maxArea


s = Solution()
h = [1, 8, 6, 2, 5, 4, 8, 3, 7]
print(s.maxArea(h))
