from typing import List
class solution:
    def check(self, a: list[int], b: list[int]):
        i=0
        j=0
        ans = list()
        while i<len(a) and j<len(b):
            if a[i] < b[j]:
                i+=1
            elif a[i] > b[j]:
                j+=1
            else:
                ans.append(a[i])
                i+=1
                j+=1
        return ans
sol = solution()
print(sol.check([1,2,2,3,3,4,5,6],[2,3,3,5,6,6,7]))