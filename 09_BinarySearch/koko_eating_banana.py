from typing import List
class Solution:
    def totalHours(self, piles, hours):
        totalTime = 0
        for banana in piles:
            totalTime += (banana + hours -1)//hours
        return totalTime
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        low = 1
        high = max(piles)
        ans = max(piles)
        while low<=high:
            mid = (low+high)//2
            reqTime = self.totalHours(piles, mid)
            if reqTime <= h:
                ans = min(ans, mid)
                high = mid-1
            else:
                low = mid+1
        return ans