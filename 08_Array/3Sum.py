from typing import List
class solution:
    def threeSum(self, nums: list[int]):
        n = len(nums)
        st = set()
        for i in range(n):
            for j in range(i+1, n):
                for k in range(j+1, n):
                    if nums[i]+nums[j]+nums[k]==0:
                        temp = sorted([nums[i],nums[j], nums[k]])
                        st.add(tuple(temp))
        ans = [list(triplet) for triplet in st]
        return ans
    
    def threeSumB(self, nums: list[int]):
        n = len(nums)
        st = set()
        for i in range(n):
            hashset = set()
            for j in range(i+1, n):
                third = -(nums[i]+nums[j])
                if third in hashset:
                    temp = sorted([nums[i], nums[j], third])
                    st.add(tuple(temp))
                hashset.add(nums[j])
        ans = []
        for triplet in st:
            ans.append(list(triplet))
        return ans
    
    from typing import List

class Solution:
    def threeSumO(self, nums: List[int]) -> List[List[int]]:

        nums.sort()
        ans = []

        n = len(nums)

        for i in range(n):

            if i > 0 and nums[i] == nums[i-1]:
                continue

            j = i + 1
            k = n - 1

            while j < k:

                total = nums[i] + nums[j] + nums[k]

                if total < 0:
                    j += 1

                elif total > 0:
                    k -= 1

                else:
                    ans.append([nums[i], nums[j], nums[k]])

                    j += 1
                    k -= 1

                    while j < k and nums[j] == nums[j-1]:
                        j += 1

                    while j < k and nums[k] == nums[k+1]:
                        k -= 1

        return ans


sol = Solution()
print(sol.threeSumO([-1,0,1,2,-1,-4]))