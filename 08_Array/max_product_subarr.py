from typing import List
class solution:
    def maxProduct(self, nums: list[int]):
        n = len(nums)
        prefix = 1 
        suffix = 1
        maxi = float('-inf')
        for i in range(n):
            if prefix == 0:
                prefix = 1
            if suffix == 0:
                suffix = 1
            prefix = prefix*nums[i]
            suffix = suffix*nums[n-i-1]
            maxi = max(maxi, max(prefix, suffix))
        return maxi
sol = solution()
print(sol.maxProduct([2,3,-2,4]))