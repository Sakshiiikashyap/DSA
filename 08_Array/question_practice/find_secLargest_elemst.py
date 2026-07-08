from typing import List
class solution:
    def check(self, nums: list[int]):
        largest = nums[0]
        sLargest = -1
        for i in range(1, len(nums)):
            if nums[i]>largest:
                sLargest = largest
                largest = nums[i]
            elif nums[i]>sLargest and nums[i]!=largest:
                sLargest = nums[i]
        return largest, sLargest
sol = solution()
print(sol.check([1,2,3,4,5,7,7]))   