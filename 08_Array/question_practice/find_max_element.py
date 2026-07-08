from typing import List
class solution:
    def check(self, nums: list[int]):
        largest = nums[1]
        for i in range(1, len(nums)):
            if nums[i] > largest:
                largest = nums[i]
        return largest
             
sol = solution()
print(sol.check([2,3,1,4,8,7]))