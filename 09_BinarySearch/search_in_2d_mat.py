from typing import List
class Solution:
    def searchMatrix(self, mat: List[List[int]], target: int) -> bool:
        n = len(mat)
        m = len(mat[0])
        low = 0
        high = n*m-1
        while low<=high:
            mid = (low+high)//2
            row = mid//m
            col = mid%m
            if mat[row][col]==target:
                return True
            elif mat[row][col]<target:
                low = mid+1
            else:
                high = mid-1
        return False
sol = Solution()
print(sol.searchMatrix([[1,3,5,7],[10,11,16,20],[23,30,34,60]],3))