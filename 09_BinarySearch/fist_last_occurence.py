from typing import List
class Solution:
    def first(self, nums: List[int], target: int):
        n = len(nums)
        low = 0
        high = n-1
        first = -1
        while low<=high:
            mid = (low+high)//2
            if nums[mid] == target:
                first = mid
                high = mid-1
            elif nums[mid] < target:
                low = mid+1
            else: 
                high = mid-1
        return first
    def last(self, nums: List[int], target: int):
            n = len(nums)
            low = 0
            high = n-1
            last = -1
            while low<=high:
                mid = (low+high)//2
                if nums[mid] == target:
                    last = mid
                    low = mid+1
                elif nums[mid] < target:
                    low = mid+1
                else: 
                    high = mid-1
            return last
    
    
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        first = self.first(nums,target)
        if first == -1:
            return [-1,-1]
        last = self.last(nums,target)
        return [first,last]
    #no of occurence
    def occu(self, nums: List[int], target: int) -> List[int]:
        ans = self.searchRange(nums,target)
        if ans[0] == -1:
            return 0
        else:
            return ans[1] -ans[0]+1 
            