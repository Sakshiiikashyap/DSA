from typing import List
class solution :
    def check(self, nums: list[int]):
        XOR = 0
        for i in range(0, len(nums)):
            XOR = XOR ^ nums[i]
        return XOR
sol = solution()
print(sol.check([1,1,2,3,3,4,4]))