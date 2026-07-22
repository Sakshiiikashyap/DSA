from typing import List
class solution:
    def check(self, nums: list[int], sum):
        for i in range(0, len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i]+nums[j] == sum:
                    return i,j
    # the most optimal one for both the variety 
    def better(self, nums: list[int], target):
        map = {}
        for i in range(len(nums)):
            a = nums[i]
            req = target - a
            if req in map:
                return map[req],i
            map[a] = i
        return "no"
    # optimal sol for variety one 
    def opt(self, nums: list[int], target):
        left = 0
        right = len(nums)-1
        nums.sort()
        
        while left < right:
            sum = nums[left] + nums[right]
            if sum == target:
                return "yes"
            elif sum > target:
                right -= 1
            else:
                left += 1
        return "NO"
                
sol = solution()
print(sol.opt([2,6,5,8,11],12))