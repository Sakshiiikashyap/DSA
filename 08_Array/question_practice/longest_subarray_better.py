from typing import List

class Solution:
    def check(self, nums: List[int], k: int):
        mp = {}
        curr_sum = 0
        maxi = 0

        for i in range(len(nums)):
            curr_sum += nums[i]

            # Case 1: subarray from index 0 to i
            if curr_sum == k:
                maxi = max(maxi, i + 1)

            # Case 2: find previous prefix sum
            rem = curr_sum - k

            if rem in mp:
                length = i - mp[rem]
                maxi = max(maxi, length)

            # Store first occurrence only
            if curr_sum not in mp:
                mp[curr_sum] = i

        return maxi


sol = Solution()
print(sol.check([1,2,3,4,1,2,3], 3))