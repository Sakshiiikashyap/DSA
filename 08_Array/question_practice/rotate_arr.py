from typing import List
class solution:
    def check(self, nums: list[int]):
        temp = nums[0]
        for i in range(1, len(nums)):
            nums[i-1] = nums[i]
        nums[len(nums)-1] = temp
        return nums
sol =solution()
print(sol.check([1,2,3,4,5]))