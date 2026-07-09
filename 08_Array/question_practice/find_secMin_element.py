from typing import List 
import sys
class solution:
    def check(self, nums: list[int]):
        smallest = nums[0]
        sSmallest = sys.maxsize
        for i in range(1, len(nums)):
            if nums[i]<smallest:
                sSmallest = smallest
                smallest = nums[i]
            elif nums[i]<sSmallest and nums[i]!=smallest:
                sSmallest = nums[i]
        return smallest, sSmallest
sol = solution()
print(sol.check([7,4,6,8,5,3,3]))