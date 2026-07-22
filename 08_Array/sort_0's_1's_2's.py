from typing import List
class solution:
    def check(self, nums: list[int]):
        cnt0=0
        cnt1=0
        cnt2=0
        for i in range(len(nums)):
            if nums[i] == 0:
                cnt0 += 1
            elif nums[i]==1:
                cnt1 += 1
            else:
                cnt2 += 1
        for i in range(0, cnt0):
            nums[i] = 0
        for i in range(cnt0, cnt0 + cnt1):
            nums[i] = 1
        for i in range(cnt0 + cnt1, len(nums)):
            nums[i] = 2
        return nums
    
    def optimal(self, nums: list[int]):
        low=0
        mid=0
        high=len(nums)-1
        while mid <= high:
            if nums[mid] == 0:
                nums[mid], nums[low] = nums[low], nums[mid]
                mid += 1
                low += 1
            elif nums[mid] == 1:
                mid += 1
            else:
                nums[mid], nums[high] = nums[high], nums[mid]
                high -= 1
        return nums
sol = solution()
print(sol.optimal([0,1,2,0,1,2,1,2,0,0,1,2]))