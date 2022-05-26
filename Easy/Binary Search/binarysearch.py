class Solution:
    def search(self, nums: List[int], target: int) -> int:
        low,mid,high = 0,0,len(nums)-1
        while low <= high:
            mid = (high + low) // 2
            # If target is greater, ignore left half
            if nums[mid] < target:
                low = mid + 1
            # If target is smaller, ignore right half
            elif nums[mid] > target:
                high = mid - 1
            # target is present at mid
            else:
                return mid
        # target was not present
        return -1

