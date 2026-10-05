## 01. Kadane's Algorithm

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1)

### Problem Description

**Task:** You are given an integer array arr[]. You need to find the maximum sum of a subarray (containing at least one element) in the array arr[].Examples:Input: arr[] = [2, 3, -8, 7, -1, 2, 3]

#### Examples

##### Example 1

- **Output:**
```text
11
```
- **Explanation:** The subarray [7, -1, 2, 3] has the largest sum 11.

##### Example 2

- **Input:**
```text
arr[] = [-2, -4]
```
- **Output:**
```text
25
```
- **Explanation:** The subarray [5, 4, 1, 7, 8] has the largest sum 25.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-05 16:14:04
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        
        int curr_max = arr[0];
        int total_max = arr[0];
        
        for(int i=1;i<n;i++){
            curr_max = max(arr[i], arr[i] + curr_max);
            total_max = max(curr_max, total_max);
        }
        
        return total_max;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-08-09 14:08:41
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int total_sum = arr[0]; 
        int curr_sum = arr[0];
        
        for(int i=1;i<n;i++){
            curr_sum = max(arr[i] , arr[i] + curr_sum);
            total_sum = max(curr_sum, total_sum);
        }
        return total_sum;
    }
};
```

*Generated on: 10/5/2026, 4:14:18 PM*