from typing import List
class solution:
    def check(self, nums: list[int]):
        n = len(nums) + 1
        # brute sol
        # for i in range(1, len(nums)+1):
        #     flag = 0
        #     for j in range(0, len(nums)):
        #         if nums[j] == i:
        #             flag = 1
        #             break
        #     if flag == 0:
        #         return i
        # better
        # hash_map = {}
        # for i in range(len(nums)):
        #     hash_map[nums[i]] = 1
        # for i in range(1, len(nums)+2):
        #     if hash_map.get(i, 0) == 0:
        #         return i
        # optimal sol
        expected = (n*(n+1)) // 2
        actual = 0
        for i in range(len(nums)):
            actual += nums[i]
        return (expected - actual)
sol = solution()
print(sol.check([1,2,4]))