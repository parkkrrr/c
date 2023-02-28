int search(int* nums, int numsSize, int target){
    int low = 0, high = numsSize - 1, mid = (low + high) / 2;
    while (low <= high) {
        if (target == nums[mid]) {
            return mid;
        }
        else if (target > nums[mid]) {
            low = mid + 1;
            mid = (high + low) / 2;
        }
        else {
            high = mid - 1;
            mid = (high + low) / 2;
        }
    }
    return -1;
}