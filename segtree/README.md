
How to use:
```

Build a segment tree: O(n)
seg t(n);  // create tree of length n
seg t(vec);  // build from a vector

Change a node val: O(log n) 
t.set(i,val)  //0<=i<n 

Query sum of values in an interval: O(log n) 
t.prod(l,r) //query the sum of values in [l,r)
```

problems: 

[3187.Peaks-in-Array](https://leetcode.com/problems/peaks-in-array/description/)
