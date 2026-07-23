from typing import List
class solution:
    def check(self, nums: list[int]):
        maxi = float('-inf')
        sum = 0
        for i in range(len(nums)):
            sum += nums[i]
            if sum > maxi:
                maxi = sum 
            if sum < 0:
                sum = 0
        if maxi < 0: 
            return 0
        return maxi
sol = solution()
print(sol.check([-2,-3,4,-1,-2,1,5,-3]))