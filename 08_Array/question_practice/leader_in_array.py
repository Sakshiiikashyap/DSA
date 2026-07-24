from typing import List
class solution:
    def check(self, nums: list[int]):
        ans = []
        for i in range(len(nums)):
            leader = True
            for j in range(i+1, len(nums)):
                if nums[j] > nums[i]:
                    leader = False
                    break
            if leader == True:
                ans.append(nums[i])
        return ans
sol = solution()
print(sol.check([10,22,12,3,0,6]))