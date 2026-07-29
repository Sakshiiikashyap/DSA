from typing import List
class solution:
    def BinarySearch(self, nums: list[int], target):
        n = len(nums)
        low = 0
        high = n-1
        ans = n
        while low<=high:
            mid = (low+high)//2
            if nums[mid] > target:
                ans = mid
                high = mid-1
            else:
                low = mid+1
        return ans        
sol = solution()
print(sol.BinarySearch([-1,0,3,5,9,12], 4))