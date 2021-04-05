"""
https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/
"""

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        for i in range(len(nums)-1,0,-1):
            if nums[i] == nums[i-1]:
                del nums[i]
