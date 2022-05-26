class Solution:
    def search(self, nums: List[int], target: int) -> int:
        def binary_search(arr,x):
            low,mid,high = 0,0,len(arr)-1
            while low <= high:
                mid = (high + low) // 2
                # If x is greater, ignore left half
                if arr[mid] < x:
                    low = mid + 1
                # If x is smaller, ignore right half
                elif arr[mid] > x:
                    high = mid - 1
                # x is present at mid
                else:
                    return mid
            # the element was not present
            return -1
        return binary_search(nums,target)
