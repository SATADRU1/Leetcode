## 01. Two Sum - Pair with Given Sum

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/key-pair5616/1)

### Problem Description

**Task:** Given an array arr[] of integers and another integer target. Determine if there exist two distinct indices such that the sum of their elements is equal to the target.Examples:Input: arr[] = [0, -1, 2, -3, 1], target = -2

#### Examples

##### Example 1

- **Output:**
```text
false
```
- **Explanation:** No pair is possible as only one element is present in arr[]

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-05 12:58:49
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        
        int n = arr.size();
        unordered_map<int, int>mp;
        
        for(int i=0;i<n;i++){
            int res = target - arr[i];
            
            if(mp.find(res) != mp.end())
                return true;
                
            mp[arr[i]] = i;
        }
        
        
        return false;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-08-09 18:58:18
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        map<int,int>mp;
        
        for(int i=0;i<n;i++){
            int rem = target - arr[i];
            
            if(mp.find(rem) != mp.end())
                return (mp[rem], i);
            
            mp[arr[i]] = i;
        }
        return {};
    }
};
```

*Generated on: 10/5/2026, 1:03:36 PM*