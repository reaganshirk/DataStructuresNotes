/*
- Hashing:
	- List of elements
	- insert
	- remove
	- max
	- min
	- find*
		- dictionary search
	- A <-- hash table
	- f(x) = x <-- hash function f
		- first x is a key, second x is an index position, same as simple bucket sort
		- Purpose: give you an index position into the table
	- f(x_1) = x_1, f(x_2) = x_2, x_2 != x_1 --> no collision
	- f(x_1) = y, f(x_2) = y, x_1 != x_2 --> collision
	- f(x) = x mod(5)
		- f(3) = 3 mod(5) = 3
		- f(6) = 6 mod(5) = 1
		- f(1) = 1 mod(5) = 1
		- A = [ 0 | 1 | 0 | 1 | 0 ]
		- find(14)
			- 14 mod(5) = 4
			- if A[4] == 1, found
		- find(11)
			- 11 mod(5) = 1
			- if A[1] == 1, found
		- Above conditions could lead to wrong answers because of the collision
	- Perfect Hash Function: Hash function without collision
		- Hash function should be able to execute much faster than O(logn)
		- Take size proportioned to be number of elements to be stored
		- No collision
	- How to handle collisions
		- f(x) = x mod(5)
		- 5, 9, 3, 2, 16, 25, 4
		- Chaining, array of LinkedLists or an array of AVL trees
		- [ 5, 25 | 16 | 2 | 3 | 9, 4]
		- find(12) --> 12 mod(5) = 2, go to index 2 to see if 12 exists
			- Be able to apply a hash function to some values and give the hash value
			- Tell if it is in collision, be able to handle it with chaining
		- Linear probing
			- A = [ 5 | 16 | 2 | 3 | 9 | 25 | 4 | ]
			- Once you have to put two elements in one index, start looking for an empty slot and put the number there
			- f(x) = i, start from i, i + 1, i + 2, ... (i + x) mod(5)
			- Probing = finding an exmpty spot
		- Quadratic Probing
			- f(x) = i, i mod(5), i^2 mod(5), i^3 mod(5), ...
		- Double Hashing
- Simple Bucket Sort
	- 3, 8, 4, 11, 12
	- Create an array from 0-12, put a 1 in the indecies where you have a number and a 0 in the others
	- find(x)
		- return A[x] == 1
		- constant time

** FINAL EXAM ** 
	- Hashing:
		- Given a hash function and elements to hash on, provide techniques for handling collisions, handle the collisions
		- Worst case time
	- Graphs:
		- Adjacency list, adjacency matrix, which is better and why. 
		- Given a graph, draw the adjacency list and/or matrix. 
		- Draw dfs, bfs and know the algorithms. 
		- Applications
		- Maximum number of edges in both directed and undirected graphs
		- May copy and paste questions from Quiz 3??
	- Sorting
		- Sorting by ranking algorithms
		- Sorting by selection algorithms
			- Selection sort algorithm (complexity)
			- Heap sort algorithm (complexity)
				- Number of comparisons and data movements
		- Merge sort algorithm
			- Given an array, do the splits and merges and shit
			- O(nlogn)
			- Merge sort sucks because it requires an extra array (takes up more space)
		- Quick sort algorithm
			- Complexity O(n^2)
			- Best case input
			- Worst case input
		- Insertion sort
	- Priority Search Trees
		- Minimum heap
			- English definition
			- Draw the min heap
			- time complexity of operations
		- min-max heap
			- draw the min-max heap
			- time complexity of operations
		- compare heap operations on BST (AVL, RB) and sorted array
	- self-adjusting BSTs
		- C++ code for zig zag
		- splay tree
			- understand definition
		- AVL, RB
			- Will be given a tree, insert elements, find violation and do fix
			- Color an RB tree
		- 2-3 Tree
			- Look at exam 2
	- Binary Trees
		- Know all representations
		- C++ class definition 
		- Traversals, c++ methods
			- non-recursive algorithm for pre and in order
		- BST
			- removing, what are the 3 cases
			- method for size and height
	- Stacks and queues
		- Radix sort
		- Infix to postifx algorithms
		- Postfix evaluation
	- LinkedList
		- Number of ways a LinkedList can be created
		- LinkedList destructor method, size method
	- Array, matricies
		- Arrayclass data structure
		- number of ways to store a matrix
	- Big O
		- Definition
		- Number of primitive operations
	- Bonus: Write Sridhar's Name
		- Sridhar Radhakrishnan
*/