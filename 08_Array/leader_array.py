from typing import List
class solution:
    def check(self, nums: list[int]):
        maxi = float('-inf')
        ans = []
        n = len(nums)
        for i in range(n-1, -1, -1):
            if nums[i]>maxi:
                ans.append(nums[i])
            maxi = max(maxi, nums[i])
        ans.sort()
        return ans
        
sol = solution()
print(sol.check([10,22,12,3,0,6]))