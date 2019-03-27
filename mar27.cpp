/*
Everything we've done from the last quiz to Monday April 1st will be on the quiz on April 3rd

Number of ways a binary tree can be stored:
	1. info, BinaryTree* left, BinaryTree* right
	2. inorder and preorder traversal arrays ** know for quiz or exam **
	3. parent and boolean arrays
	4. generalized list: see Sridhar's lecture notes for pictoral representation
	5. array implementation of a binary tree: see Shridhar's lecture notes for pictoral representation
		- three dimensional array...?
	6. Complete binary tree representation
		- full binary tree has the maximum number of nodes
			- given height h, maximum number of nodes is 2^h - 1 nodes
			- to form a complete binary tree from a full binary tree, label the nodes and pick k number of them in sequential order
				- can't skip over a left node and go straight to a right node
			- to label nodes: root is number 0, go down a level, label them sequentially from left to right
		- in a complete binary tree representation, the left child is 2i + 1 and right child is 2i + 2 where i is the index of the array in which 
		  your data is stored. The parent child is (i - 1) / 2.
		- this representation actually really sucks, he says right after we spend a lot of time going over it...
		- height of tree is log(n) for complete and full binary trees
Binary Search Tree
	1. Binary Tree, can be stored in 6 different ways just like a normal binary tree
	2. Elements are stored in some order
		- The value stored in the root is greater than all of the values in its left subtree
		- The value stored in the root is less than all of the values in its left subtree
			- the true is same for each individual node in the tree
	3. The beauty of a binary search tree:
		- You're looking for the number 25
			- You start from the root of the tree and compare the root to 25
			- Go right or left based on the comparison
			- Compare 25 to that node, go left or right based on the comparison
			- Process continues
			- If the number is not there, you'll end up in an empty leaf node 
	4. Worst case: height of the tree
		- worst case height of binary tree = n (number of nodes)
		- worst case of binary tree with n nodes = n
	5. Best case: 1

template <class DT>
bool BinarySearchTree<DT>::find(DT& x)
{
	if (info == NULL)
	{
		return false;
	}

	if ((*info) == x)
	{
		return true;
	}

	if ((*info) > x)
	{
		return (*left).find(x);
	}

	else
	{
		return (*right).find(x);
	}
}

Complexity of the find function: O(height) = O(n)
Balancing the binary search tree: making complexity log(n)
	1. Take middle most element of inorder traversal array, make it the root
	2. Now you have "2 arrays", take middle most element of left array and make it left child, same with right array and child
	3. Make this recursive, the tree is "balanced"
To remove a node, shift everything below it up a node
To remove the root, find the smallest guy in the right sub tree and swap, then delete the root in its swapped position
*/