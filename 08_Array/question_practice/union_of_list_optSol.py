from typing import List 
class solution:
    def check(self, nums1: list[int], nums2: list[int]):
        n1 = len(nums1)
        n2 = len(nums2)
        i = 0 
        j = 0
        union = list()
        while i < n1 and j < n2:
            if nums1[i] <= nums2[j]:
                if len(union) == 0 or union[-1] != nums1[i]:
                    union.append(nums1[i])
                i+=1
            else:
                if len(union)==0 or union[-1]!=nums2[j]:
                    union.append(nums2[j])
                j+=1
        # chech if any list got exhausted
        while j<n2:
            if len(union)==0 or union[-1]!=nums2[j]:
                union.append(nums2[j])
            j+=1
        while i<n1:
            if len(union)==0 or union[-1]!=nums1[i]:
                union.append(nums1[i])
            i+=1
        return union

sol = solution()
print(sol.check([1,1,2,3,4,5], [2,3,4,6]))                    
            
            