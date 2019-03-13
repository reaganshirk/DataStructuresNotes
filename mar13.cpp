/*
Binary Trees (BT):
	- Next project will be on binary trees. There is a chapter in the book.
	- Empty node is a BT
	- A node that is not empty has AT MOST two children
		- Left child (non empty) or left BT (empty)
		- Right child (non empty) or right BT (empty)
	- Each node of a BT is a BT
		- See Sridhar's class notes for pictures of BT's
		- Right and left subtrees, same thing as right and left children
		- a node without a parent is called the root of the tree
		- A node is a leaf node if BOTH left child and right child are empty 
		- Height
			- root is at height 1, first set of children is at height 2, second set of children is at height 3, etc
			- Also might hear the word level 
			- Height of the tree: maximum level of any non empty node
				- if final set of children is at height 5, the height of the tree is 5
	- Imagine a circle cut in thirds. For a BT, you have:
		- root pointer (top of circle)
		- right child pointer (right of circle)
		- left child pointer (left of circle)
	- Operations on a binary tree:
		- height();
		- setLeftChild();
		- setRightChild();
		- deleteLeftChild();
		- deleteRightChild();
		- size();
		- getLeftChild();
		- getRightChild();
		- getRoot();

template <class DT>
class BinaryTree
{
protected:
	DT* root;
	BinaryTree<DT>* left;
	BinaryTree<DT>* right;
public:
	BinaryTree();
	BinaryTree(DT& info);
	copy constructor
	~BinaryTree();
	setLeft();
	setRight();
	etc...
};

template <class DT>
BinaryTree<DT>::BinaryTree()
{
	root = NULL;
	left = NULL;
	right = NULL;
}

// I think this is supposed to be templated Sridhar 
// wrote it this way so I'll keep going this way
int BinaryTree<int>::size()
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		return (1 + (*left).size() + (*right).size())
}

// Assume there is a maximum function
// I think this is supposed to be templated Sridhar
// wrote it this way so I'll keep going this way
int BinaryTree<int>:: height()
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		return (1 + max((*left).height()), (*right).height()));
	}
}

int main()
{
	BinaryTree<int> myBT(100);
}

Few Definitions ** good exam/quiz questions ** :
	- What is the maximum number of non empty nodes in a BT of height h?
		- 2^h - 1
		- When a BT of height h has the maximum number of nodes, we call such a BT as a full BT
	- What is the minimum height of a BT with n nodes?
		- ln(n + 1)
*/