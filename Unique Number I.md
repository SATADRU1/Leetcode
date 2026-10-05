## 01. Unique Number I

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/find-unique-number/1)

### Problem Description

**Task:** Given a unsorted array arr[] of positive integers having all the numbers occurring exactly twice, except for one number which will occur only once. Find the number occurring only once.Examples :Input: arr[] = [1, 2, 1, 5, 5]

#### Examples

##### Example 1

- **Output:**
```text
20
```
- **Explanation:** Since 20 occurs once, while other numbers occur twice, 20 is the answer.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-05 13:53:09
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int n = arr.size();
        int result = 0;
        
        for(int i=0;i<n;i++){
            result ^= arr[i];
        }
        
        return result;
    }
};
```

*Generated on: 10/5/2026, 1:53:23 PM*