from typing import List
class solution:
    def check(self, nums: list[int]):
        i = 0
        for j in range(1, len(nums)):
            if nums[i]!=nums[j]:
                i += 1
                nums[i+1] = nums[j]
        return nums[i+1]
sol = solution()
print(sol.check([1,1,2,2,3,3]))