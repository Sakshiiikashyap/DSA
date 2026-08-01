from typing import List
class Solution:
    def divisor(self, nums: list[int], divi):
        divisor = 0
        for i in range(len(nums)):
            divisor += (nums[i]+divi-1)//divi
        return divisor
    def smallestDivisor(self, nums: List[int], threshold: int):
        low = 1
        high = max(nums)
        ans = float('inf')
        while low<=high:
            mid = (low+high)//2
            val = self.divisor(nums, mid)
            if val<=threshold:
                ans = min(ans, mid)
                high = mid-1
            else:
                low = mid+1
        return ans
        