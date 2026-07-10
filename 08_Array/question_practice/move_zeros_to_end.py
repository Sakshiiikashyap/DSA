from typing import List
# brute sol
        # temp = list()
        # for i in range(0, len(nums)):
        #     if nums[i]!=0:
        #         temp.append(nums[i])
        # # push temp ele back to the list
        # for i in range(0, len(temp)):
        #     nums[i] = temp[i]
        # # push back all non zeros at the lst
        # for i in range(len(temp), len(nums)):
        #     nums[i] = 0
        # return nums
class solution:
    def check(self, nums: list[int]):        
        # optimal 
        j = -1
        for i in range(0, len(nums)):
            if nums[i] == 0:
                j=i
                break
        for i in range(j+1, len(nums)):
            if nums[i] != 0:
                nums[i], nums[j] = nums[j], nums[i] #swapping
                j += 1
        return nums
                       
        
sol = solution()
print(sol.check([1,2,0,3,4,0,0,5]))