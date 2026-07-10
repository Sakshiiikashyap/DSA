from typing import List
class solution:
    def check(self, nums: list[int]):
        num = int(input("Enter the no.: "))
        for i in range(0, len(nums)):
            if nums[i] == num:
                return i
        return -1
sol = solution()
print(sol.check([1,2,4,5,6]))