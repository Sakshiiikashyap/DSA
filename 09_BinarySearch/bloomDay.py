from typing import List
class Solution:
    def possible(self, bloomDay: list[int], days, m, k):
        cnt = 0
        nob = 0
        for i in range(len(bloomDay)):
            if bloomDay[i]<=days:
                cnt += 1
            else:
                nob += cnt//k
                cnt = 0
        nob += cnt//k
        if nob>=m:
            return True
        else:
            return False
    
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        low = min(bloomDay)
        high = max(bloomDay)
        ans = -1
        if m * k > len(bloomDay):
            return -1
        while low<=high:
            mid = (low+high)//2
            if self.possible(bloomDay, mid, m, k) == True:
                ans = mid
                high = mid-1
            else: 
                low = mid+1
        return ans