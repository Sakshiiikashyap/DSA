from typing import List
class Solution:
    def cowPlace(self, arr, dist, k):
        n = len(arr)
        cntCows=1
        last = arr[0]
        for i in range(n):
            if arr[i]-last>=dist:
                cntCows += 1
                last = arr[i]
        if cntCows>=k:
            return True
        else:
            return False
    def aggressiveCows(self, arr, k):
        # code here
        arr.sort()
        n = len(arr)
        low = 1
        high = arr[n-1]-arr[0]
        while low<=high:
            mid = (low+high)//2
            if self.cowPlace(arr, mid, k)==True:
                low = mid+1
            else:
                high = mid-1
        return high
        
        