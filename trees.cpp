/*
Binary Tree:
	- Maximum height with n nodes:
		- n
	- Minimum height with n nodes:
		- log_2(n)
	- Maximum number of nodes with height h:
		- 2^h - 1
	- Worst case complexity:
		- n
	- Best case complexity:
		- 1
Binary Search Tree:
	- Sorting Complexity:
		- O(n^2)
			- n^2 to create, n to sort. O(n^2 + n) = O(n^2)
AVL Tree:
	- Height:
		- O(log_2(n))
			- Know the proof
Red-Black Tree:
	- Minimum number of nodes for a tree with black height b:
		- 2^b - 1
	- For an n-node tree of black height b:
		- 2^b - 1 /leq n
		- b /leq log_2(n + 1)
	- Height of a tree with black height b:
		- 2^b + 1
	- Height of a tree with n nodes:
		O(log_2(n))
*/