/*
 Top Down Splaying:
	- Doing rotations on the root of the tree rather than on the node yo're splaying
	- "Pulling the string"
	** Splays will be specified on the exam as top down or bottum up **

 Ranting about some weird algorithm using keywords and trees that we're not going to be asked about on the exam

 AVL Tree:
	- A Binary Search Tree (I'm so fucking shocked)
	- Each node has a value called Balance Factor (BF)
		- BF(x) = height(leftSubTree(x)) - height(rightSubTree(x))
		- AVL BF(x) for all x is either 0, -1, or 1.
		- Height of tree is /leq O(log(n))
		- Right right violation: do a zag rotation
		- Right left violation: do a zag zig rotation
			- ** exam question ** inserting numbers and fixing violations

*/