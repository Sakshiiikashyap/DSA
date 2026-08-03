from typing import List
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        n1 = len(nums1)
        n2 = len(nums2)
        n = n1+n2
        i = 0
        j = 0
        arr = []
        while i<n1 and j<n2:
            if nums1[i]<=nums2[j]:
                arr.append(nums1[i])
                i += 1
            else:
                arr.append(nums2[j])
                j += 1
        while i<n1:
            arr.append(nums1[i])
            i += 1
        while j<n2:
            arr.append(nums2[j])
            j += 1
        if n%2==1:
            return arr[n//2]
        else:
            return (arr[n//2] + arr[(n-1)//2]) / 2
