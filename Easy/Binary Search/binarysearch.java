class Solution {
    public int search(int[] nums, int target) {
        int low = 0, mid = 0, high = nums.length - 1;
        while (low <= high){
            mid = (low + high)/2;
            if (nums[mid] < target) low = mid + 1;
            else if (nums[mid] > target) high = mid - 1;
            else return mid; // element found
        }
        return -1; //element not found
    }
}