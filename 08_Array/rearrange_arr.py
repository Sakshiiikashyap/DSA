from typing import List
class Solution:
    def check(self, nums: list[int]):
        n = len(nums)
        ans = [0] * n
        pos = 0
        neg = 1
        for i in range(n):
            if nums[i] < 0:
                ans[neg] = nums[i]
                neg += 2
            else:
                ans[pos] = nums[i]
                pos += 2
        return ans
sol = Solution()
print(sol.check([3,1,-2,-3,4,-5]))