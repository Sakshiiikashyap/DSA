from typing import List
class solution:
    def check(self, nums: list[int]):
        n = len(nums)
        indx = -1
        for i in range(n-2, -1, -1):
            if nums[i] < nums[i+1]:
                indx = i
                break
        for i in range(n-1, indx, -1):
            if nums[i] > nums[indx]:
                nums[i], nums[indx] = nums[indx], nums[i]
                break
            if indx == -1:
                nums.reverse()
                return nums
        nums[indx + 1:] = nums[indx +1:][::-1]
        return nums
sol = solution()
print(sol.check([2,1,5,4,3,0,0]))