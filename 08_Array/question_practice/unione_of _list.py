from typing import List 
class solution:
    def check(self, nums1: list[int], nums2: list[int]):
        s = set()
        for i in nums1:
            s.add(i)
        for i in nums2:
            s.add(i)
        union = list()
        for i in s:
            union.append(i)
        return union
sol = solution()
print(sol.check([1,1,2,3,4,5], [2,3,4,5,6]))

        