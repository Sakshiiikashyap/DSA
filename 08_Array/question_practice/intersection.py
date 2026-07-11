from typing import List
class solution:
    def check(self, a: list[int], b: list[int]):
        ans = list()
        vis = [0]*len(a)
        for i in range(0, len(a)):
            for j in range(0, len(b)):
                if a[i]==b[j] and vis[j]==0:
                    ans.append(a[i])
                    vis[j]=1
                    break
                if a[i]<b[j]:
                    break
        return ans
sol = solution()
print(sol.check([1,2,2,3,3,4,5,6],[2,3,3,5,6,6,7]))