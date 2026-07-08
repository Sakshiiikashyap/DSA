from typing import List
class solution:
    def check(self, nums: list[int]):
        smallest = nums[0]
        for i in range(1, len(nums)):
            if nums[i] < smallest:
                smallest = nums[i]
        return smallest
sol = solution()
print(sol.check([1,4,6,3,8,0]))