from typing import List
class solution:
    # def check(self, nums: list[int]):
    #     N = len(nums)//2
    #     map = {}
    #     for i in range(len(nums)):
    #         map[nums[i]] = map.get(nums[i],0) + 1
    #     for key, value in map.items():
    #         if value > N:
    #             return key
    #     return -1
    def check(self, nums: list[int]):
        cnt = 0
        for i in range(len(nums)):
            if cnt == 0:
                cnt = 1
                ele = nums[i]
            elif nums[i] == ele:
                cnt += 1
            else:
                cnt -= 1
        return ele
sol = solution()
print(sol.check([2,2,3,4]))