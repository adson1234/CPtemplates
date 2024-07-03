
How to use:
```

Initialize a trie:
xortrie t;  // dealing with int size values(NUM_BITS=31)

Insert a bunch of values: O(n * NUM_BITS)
for(int i=0;i<n;i++){
  t.insert(a[i]);
}

Query: O(NUM_BITS)
t.max(b) //return the max value in { a[0] XOR b, a[1] XOR b, ... ,a[n-1] XOR b }

t.min(b) //return the min value in { a[0] XOR b, a[1] XOR b, ... ,a[n-1] XOR b }
```

problems: 

[D - XOR Construction](https://codeforces.com/contest/1895/problem/D)
