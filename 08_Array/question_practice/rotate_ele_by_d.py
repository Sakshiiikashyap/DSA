from typing import List
class solution:
    def check(self, nums: list[int]):
        d = int(input("enter the no. for rotation: "))
        temp = nums[:d]
        # shift left
        for i in range(d, len(nums)):
            nums[i-d] = nums[i]
            # copy temp to end
        for i in range(d):
            nums[len(nums)-d+i] = temp[i]
        return nums
    
    
    
    
    
    
sol=solution()
print(sol.check([1,2,3,4,5,6,7]))
