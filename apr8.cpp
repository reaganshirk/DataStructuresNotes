/*
 All of the topics discussed today will be on the exam

 - Zag implementation:

 if (isEmpty())
 {
	return;
 }
 if (right.isEmpty())
 {
	return;
 }
 SelfModifyingBST<DT>* rightChild = (SelfModifyingBST<DT>*) right;
 right = rightChild.right;
 rightChild.right = rightChild.left;
 rightChild.left = left;
 left = rightChild;
 swap(root, rightChild.root);

 - AVL Tree:
	- Binary Search Tree with a balance factor
		- 2 bits to store a balance factor, can only be -1, 0, 1. Anything else is a violation.
	- If a BST maintains the BF structure, how can we guarantee that the height of the tree is no bigger than log(n)?
		- M_h = 1 + M_h-1 + M_h-2
		- M_1 = 1, M_2 = 2
			- Looks like Fibonacci sequence
		- M_h = F_h+2 - 1
		- We can be certain that an AVL tree of height h has n nodes where n /geq F_h+2 - 1
		- ** Rest of proof is in the textbook, it's too hard to type
 - Violations
	 - We will be given a bunch of numbers in a sequence, told to draw an avl tree for each insertion and give a BF for each node
		- Don't forget that it's a BST, make sure to draw trees that way
	 - Given a violation, tell how to fix it

 - Red-Black Tree
	- A BST which keeps itself balanced in height by labeling each tree (or subtree) as either red or black 
	  and restricting the red/black relationships between parent and children.
	- An empty tree is black
	- An empty tree that becomes non-empty becomes a red tree
	- The red condition: a red tree (node) never has a red subtree
	- The black condition: the number of black trees (nodes) along a path from the root to a leaf (the black- height of the leaf) 
	- Black height: from leaf node, the number of black nodes to the root
	  is the same along the path from the root to any other leaf
	- The height h of a red black tree with black height b is not more than 2b+1
	- b /leq h /leq 2b+1 /leq 2log_2(n+1) + 1
		- Class definition:
			- Exact same as a BST but also has a bool variable called color
			- Override insert and remove methods
			- Rotations
	- ** We will NOT be asked about removal for AVL or Red-Black trees ** 

- 2-3 Tree
	- ** Exam Question ** 
		- When you have one value, the value has to be on the left side
		- Node with one value: 2 node
			- 2 Pointers: left and middle
		- All the leaf nodes must be on the same level
		- Node with two values: 3 node
			- 3 Pointers: left, middle, right
			- Values in middle will be between the two roots, values to the left will be less than the left
			  values to the right will be greater than the right
		- ** favorite question **
			- Asking us if a given tree is a 2-3 tree
				- 2 node as the root, a left and right child. NOT a 2-3 tree
				  the root must have left and middle children, not left and right.
*/