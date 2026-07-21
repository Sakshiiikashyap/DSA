from typing import List
class solution:
    def check(self, nums: list[int]):
        cnt = 0
        maxi = 0
        for i in range(0, len(nums)):
            if nums[i] == 1:
                cnt += 1
                maxi = max(maxi, cnt)
            else:
                cnt = 0
        return maxi
sol = solution() 
print(sol.check([1,1,0,1,1,0,1,1,1,1]))