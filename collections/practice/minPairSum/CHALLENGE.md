# Challenge: Minimal Pair Sum for Non-Negatives #

## Objective ##

Write a program that analyzes a list of integers, each one being a non-negative number, identifying the minimal sum achievable by adding any two different numbers from the list. Your program should output two pieces of information:

The minimal sum itself.

The number of unique pairs within the list that sum up to this minimal value.

### Input Format ### 

The input begins with an integer N (2 ≤ N ≤ 10^5), indicating the number of integers in the list.

Each of the next N lines contains a distinct integer, representing an element of the list. The value of each integer is within the range 0 to 10^6.

### Output Format ###

The first line of output should be the minimal sum of any two distinct integers from the input list.

The second line should indicate the number of unique pairs that can be formed from the list which sum up to this minimal value.

## Constraints ##

The integers in the list are not necessarily unique.

The order of the numbers in a pair does not matter; pairs are considered the same if they contain the same numbers, regardless of order or positions in the list. For example, (a, b) is identical to any other (a, b) and, also, (a, b) is considered the same as (b, a).

The program must complete execution within 2 seconds for any given valid input case.

## Example 1 ## 

### Input ###

```
6
111111111119
20
4
7
0
63
```

### Output ###

```
4
1
```

__Explanation__

The minimal sum that can be obtained by adding any two different numbers from the list is 4, thus the number in the output first line is 4. That minimal sum is achieved by adding 0 and 4 together. There is only a unique pair (0, 4) that sums up to 4, thus the output at the second line is 1.
