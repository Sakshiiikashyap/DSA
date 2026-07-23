from typing import List
class solution:
    def check(self, nums: list[int]):
        mini = nums[0]
        profit = 0
        for i in range(len(nums)):
            cost = nums[i] - mini
            profit = max(profit, cost)
            mini = min(nums[i], mini)
        return profit
sol = solution()
print(sol.check([7,1,5,6,4]))
            
            
            