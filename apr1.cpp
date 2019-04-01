/*
Topics covered in class on Wed, Apr 3 will be on exam on Wed, Apr 10

Binary Search Tree:
	- is a binary tree where for each node, the elements on the left subtree are less than or equal to the value at the node
	  the elements on the right subtree are greater than or equal to the value at the node

template <class DT>
bool BinarySearchTree::find(DT& x)
{
	if (info == NULL)
	{
		return this;
	}

	// Not really sure where this is supposed to go 
	info = new ... ?
	left = new BinarySearchTree<DT>();
	right = new BinarySearchTree<DT>();
}

template <class DT>
void BinarySearchTree<DT>::remove(DT& x)
{
	// full find method written in last weeks notes
	BinarySearchTree<DT>* thisGuy = find(x);
	if ((*thisGuy).info != NULL)
	{
		// 1. check if it is a leaf node, i.e. see if its right/left children are NULL
			// delete thisGuy, set to null
		// 2. left child or right child is present
			// copying contents of child into thisGuy, delete the child after.
		// 3. has both left child and right child
			// finding smallest value in right subtree, replacing node with it, deleting right subtree value
				// not sure if this is general or if it's just for the case discussed in class
	}
}

How to sort with a BST:
	1. Insert your numbers into a binary search tree
		O(n^2)
	2. Do an in order traversal
		O(n)
How is a BST better than a sorted list?
	1. Takes up less space
	2. More efficient with insertion
		// not actually sure if this is what he said I got confused

Self Adjusting Binary Searh Trees ** WILL BE ON EXAM **:
	- Splay Tree
	- Arial Tree
	- Red Black Tree
	- ??? Tree

	- Rotation of BSTs
		- ** Rotation preserves the BST **
		- Zig Rotations
			- Clockwise rotation, node to the left of the root becomes the root, children move accordingly. See Sridhar's notes for child movement
		- Zag Rotation
			- Counterclockwise rotation

	- Double rotations
		- zigzig
		- zagzag
		- zigzag
			- zag is done first in a zigzag rotation
		- zagzig
			- zig is done first in a zagzig rotation
		- right subtree = do a zag
		- left subtree = do a zig
Splay Tree:
	- BST
	- find(x)
		- find x
			- if x is not there, splay the parent of where x would go
		- splay on x
	- As you splay a tree, the height of the tree is reaching minimum height, log(n)
	- insert in splay tree is same as BST, after you insert it you splay it
	- remove = remove the guy and bring his parent to the root of the tree

** Quiz question **
	give template for zig/zag
	give sequence of c++ assignments to give a zag operation
	Given a BST, do a splay. Give all rotations and such
	Given a splay tree, do a find on a given number

*/