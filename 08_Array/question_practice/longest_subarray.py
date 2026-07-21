from typing import List
class Solution:
    def check(self, nums, K):
        length = 0

        for i in range(len(nums)):
            for j in range(i, len(nums)):
                s = 0

                for k in range(i, j + 1):
                    s += nums[k]

                if s == K:
                    length = max(length, j - i + 1)

        return length

sol = Solution()
print(sol.check([1,2,3,4,1,2,3], 3))