from typing import List
class Solution:
    def findFloor(self, nums: List[int], target: int) -> int:
        n = len(nums)
        low = 0
        high = n-1
        ans = -1
        while low<=high:
            mid = (low+high)//2
            if nums[mid] <= target:
                ans = nums[mid]
                low = mid+1
            else:
                high = mid-1
        return ans
sol = Solution()
print(sol.findFloor([0,3,5,9,12], 4))
                