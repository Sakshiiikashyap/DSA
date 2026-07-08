from typing import List
class solution: 
    def check(self, nums: list[int]) -> bool:
        for  i in range(1, len(nums)):
            if nums[i] < nums[i-1]:
                return False
        return True
sol = solution()
print(sol.check([1,2,3,4,5,6]))        