class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left_ptr = 0
        right_ptr = len(nums) - 1
        
        while left_ptr <= right_ptr:
            mid_ptr = (left_ptr + right_ptr) // 2

            if nums[mid_ptr] > target:
                right_ptr = mid_ptr - 1
            elif nums[mid_ptr] < target:
                left_ptr = mid_ptr + 1
            else:
                return mid_ptr

        return -1