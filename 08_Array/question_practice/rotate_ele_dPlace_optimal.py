from typing import List
class solution:
    def reverse(self, nums, start, end):
        while start < end:
            nums[start], nums[end] = nums[end], nums[start]
            start += 1
            end -= 1
    def rotate(self, nums):
        d=int(input("enter d: "))
        n = len(nums)
        d = d % n
        
        self.reverse(nums, 0, d-1)
        self.reverse(nums, d, n-1)
        self.reverse(nums, 0, n-1)
        
        return nums
sol = solution()
print(sol.rotate([1,2,3,4,5,6]))
        