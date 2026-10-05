## 01. Check if array contains duplicates

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/check-if-array-contains-duplicates/1)

### Problem Description

**Task:** Given an integer array arr[], check if the array contains any duplicate value.

#### Examples

##### Example 1

- **Input:**
```text
arr = [4, 5, 6, 4]
```
- **Output:**
```text
true Explaination: 4 is the duplicate value.
```

##### Example 2

- **Input:**
```text
arr = [1, 2, 3, 4]
```
- **Output:**
```text
false Explaination: All values are distinct.
```

#### Constraints

- **1.** `1 <= arr.size() <= 10⁵`
- **2.** `0 <= arr[i] <= 10⁴`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-05 13:12:31
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        // code here
        unordered_set<int>mp;
        
        for(auto a : arr){
            if(mp.find(a) != mp.end())
                return true;
                
            mp.insert(a);
        }
        
        return false;
    }
};
```

*Generated on: 10/5/2026, 1:13:08 PM*