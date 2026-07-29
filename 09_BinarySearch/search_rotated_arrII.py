class Solution:
    def search(self, nums: List[int], x: int) -> bool:
        n = len(nums)
        low = 0
        high = n-1
        while low<=high:
            mid = (low+high)//2
            if nums[mid] == x:
                return True
            if nums[low] == nums[mid] == nums[high]:
                low += 1
                high -= 1
                continue
            if nums[low]<=nums[mid]:
                if nums[low]<=x and x<=nums[mid]:
                    high = mid-1
                else:
                    low = mid+1
            else:
                if nums[mid]<=x and x<=nums[high]:
                    low = mid+1
                else:
                    high = mid-1
        return False