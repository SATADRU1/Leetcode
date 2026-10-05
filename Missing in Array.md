## 01. Missing in Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1)

### Problem Description

**Task:** You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.Examples:Input: arr[] = [1, 2, 3, 5]

#### Examples

##### Example 1

- **Output:**
```text
2
```
- **Explanation:** Only 1 is present so the missing element is 2.Constraints:1 ≤ arr.size() ≤ 10⁶¹ ≤ arr[i] ≤ arr.size() + 1

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-05 16:43:12
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = arr.size() + 1;
        long long sum = n*(n+1)/2;
        
        for(int i=0;i<arr.size();i++){
            sum = sum - arr[i];
        }
        
        return sum;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-08-07 21:49:24
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = arr.size() + 1;
        long long sum = (n*(n+1)) / 2;
        
        for(int i=0;i<n-1;i++){
            sum  = sum - arr[i];
        }
        
        return sum;
    }
};
```

*Generated on: 10/5/2026, 4:43:36 PM*