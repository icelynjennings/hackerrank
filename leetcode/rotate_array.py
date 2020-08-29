"""
https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/
"""

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        for i in range(k):
            nums.insert(0, nums.pop())
