How to use:
```

p.resize(n);  //Initialize
depth.resize(n);
for(int i=0;i<n;i++){ // Each value is in a separate set(tree)
  Make_Set(i);
}


x=Find_Set(i)  //Return the root of the set i is in  //0<=i<n  //Time complexity can be considered equivalent to O(1)


Union_Set(i,j)  //Union the sets containing i and j separately  //0<=i,j<n  //Time complexity can be considered equivalent to O(1)

```

problems: 

[1482. Minimum Number of Days to Make m Bouquets](https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/)
