from typing import List
class solution :
    def check(self, nums: list[int]):
        # brute sol
        # for i in range(0, len(nums)):
        #     cnt = 0
        #     num = nums[i]
        #     for j in range(0, len(nums)):
        #         if nums[j] == num:
        #             cnt += 1
        #     if cnt == 1:
        #         return num
        
        # take a proper look
        # better
        hash_map = {}

        # count frequency
        for i in range(len(nums)):
            hash_map[nums[i]] = hash_map.get(nums[i], 0) + 1

        # find unique element
        for i in range(len(nums)):
            if hash_map[nums[i]] == 1:
                return nums[i]
            
sol = solution()
print(sol.check([1,1,2,2,3,3,4,4,5]))