from typing import List
class solution:
    def check(self, nums: list[int], k):
        maxi=0
        sum=0
        right=0
        left=0
        while right < len(nums):
            sum += nums[right]
            while left <= right and sum > k:
                sum -= nums[left]
                left += 1
            if sum == k:
                maxi = max(maxi, right - left + 1)
            right += 1
                
        return maxi
sol = solution()
print(sol.check([1,2,3,4,1,2,3], 2)) 