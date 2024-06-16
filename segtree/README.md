
How to use:
```

Build a segment tree: O(n)
seg t(n);  // create tree of length n

Change a node val: O(log n) 
t.set(i,val)  //0<=i<n 

Query sum of values in an interval: O(log n) 
t.prod(l,r) //query the sum of values in [l,r)
```

problems: 

https://leetcode.com/problems/peaks-in-array/description/ 
