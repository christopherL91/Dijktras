Dijktras Algorithm
==================


#   How to:

Given an adjacency matrix in a file named matrix.txt you can ask the program where you want to go from and where.

```

    0    2  100  100  100  100  100    3  100  100  100  100
    2    0    4  100  100  100  100  100  100  100  100  100
    100    4    0    2  100  100  100  100  100  100  100  100
    100  100    2    0    2  100  100  100  100  100  100  100
    100  100  100    2    0   10  100  100  100  100  100  100
    100  100  100  100   10    0    2  100    3  100  100  100
    100  100  100  100  100    2    0    6  100    2  100  100
    3  100  100  100  100  100    6    0  100  100  100  100
    100  100  100  100  100    3  100  100    0    1  100  100
    100  100  100  100  100  100    2  100    1    0    2  100
    100  100  100  100  100  100  100  100  100    2    0  100
    100  100  100  100  100  100  100  100  100  100  100    0

```

```

    Enter the starting node and the end node : 1 6
    1 -> 0 -> 7 -> 6

    The shortest distance from node 1 to 6 is : 11

```

License: MIT
