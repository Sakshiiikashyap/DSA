from typing import List
class Solution:
    def countP(self, arr, walls):
        painter = 1
        painterWall = 0
        for i in range(len(arr)):
            if painterWall + arr[i] <= walls:
                painterWall += arr[i]
            else: 
                painter += 1
                painterWall = arr[i]
        return painter
    def minTime (self, arr, k):
        # code here
        n = len(arr)
        if k>n:
            return -1
        low = max(arr)
        high = sum(arr)
        while low<=high:
            mid = (low+high)//2
            painter = self.countP(arr, mid)
            if painter>k:
                low =mid+1
            else:
                high = mid-1
        return low
        
    def splitArray(self, nums: List[int], k: int) -> int:
        return self.minTime(nums, k)
        