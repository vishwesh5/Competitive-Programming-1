# Largest Sum Contiguous Subarray - Kadane’s Algorithm

## Problem
Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.

## Kadane's Algorithm
Simple idea of the **Kadane’s algorithm** is to look for all **positive contiguous segments** of the array (`max_ending_here` is used for this). And keep track of **maximum sum contiguous segment** among all positive segments (`max_so_far` is used for this). Each time we get a positive sum compare it with max_so_far and update `max_so_far` if it is greater than `max_so_far`.

```
Initialize:
    max_so_far = 0
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_ending_here < 0)
            max_ending_here = 0
  (c) else if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
return max_so_far
```

**Time complexity**: `O(n)`

**Algorithm Paradigm**: Dynamic Programming
