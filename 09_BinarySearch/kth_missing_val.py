from typing import List
class Solution:
    def findKthPositive(self, nums: List[int], k: int) -> int:
        n = len(nums)
        low = 0
        high = n-1
        while low<=high:
            mid = (low+high)//2
            missing = nums[mid]-(mid+1)
            if missing < k:
                low = mid+1
            else: 
                high = mid-1
        return low+k