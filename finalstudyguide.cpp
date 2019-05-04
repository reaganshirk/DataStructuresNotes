/*
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
			- Zig
				- Good way to remember code for Zig:
					- check if tree is empty
					- check if left is empty
					- left = left
					- left = right
					- right = right
					- right = left
				template <class DT>
				zig()
				{
					if (isEmpty())
					{
						return;
					}
					if (left.isEmpty())
					{
						return;
					}
					SelfModifyingBST<DT>* leftChild = left;
					leftChild.left = leftChild.right;
					leftChild.right = right;
					right = leftChild;
					swap(root, leftChild.root);
				}
			- Zag
				- Good way to remember code for Zag:
					- check if tree is empty
					- check if right tree is empty
					- right = right
					- right = left
					- left = left
					- left = right
				template <class DT>
				zag()
				{
					if (isEmpty())
					{
						return;
					}
					if (right.isEmpty())
					{
						return;
					}
					SelfModifyingBST<DT>* rightChild = right;
					right = rightChild.right;
					rightChild.right = rightChild.left;
					rightChild.left = left;
					left = rightChild;
					swap(root, rightChild.root);
				}
			- If you can remember how to do one, the other is just the opposite
		- splay tree
			- understand definition
				- A tree that does a series of rotations (zigs and zags) to find a node in a BST. 
				- It finds the node by making that node the root
		- AVL, RB
			- Will be given a tree, insert elements, find violation and do fix
				- Violation: when the balance factor is not -1, 0, or 1
				- Violations are fixed with zigs/zags
					- right right violation: zag
					- right left violation: zag zig
					- left left violation: zig
					- left right violation: zag
			- Color an RB tree
				- Root should be black (even though Sridhar says otherwise?)
				- Empty tree is black
				- Emtpy tree that becomes non-empty is a red tree
				- The red condition: a red tree (node) never has a red subtree
					- i.e. a red parent can't have any red children, a red child can't have a red parent
				- The black condition: The number of black trees (nodes) along a path from the root to a leaf must be the same for each leaf
					- Black height: height of the leaf
				- The height h of a red black tree with black height b is not more than 2b + 1
				- b <= h <= 2b + 1 <= 2log_2(n+1) + 1
				- Class definition
					- Same as a BST but also has a bool variable called color
					- Override insert and remove methods
					- Rotations
		- 2-3 Tree
			- Look at exam 2 for insertion examples
			- Class definition
				template <class DT>
				class twoThreeTree
				{
				protected:
					DT* small;
					DT* large;
					twoThreeTree<DT>* left;
					twoThreeTree<DT>* right;
					twoThreeTree<DT>* middle;
					bool subtree;
				public:
					remove(DT& data);
					insert(DT& data);
					find(DT& data);
					size();
					isEmpty();
					isLeaf();
					height();
					threeNode();
					small();
				};
	- Binary Trees
		- Know all representations
			- parent and children pointers
			- inorder and preorder traversal arrays
			- parent and boolean arrays
			- generalized list
			- array implementation
			- complete binary tree representation
		- C++ class definition 
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
		- Traversals, c++ methods
			- non-recursive algorithm for preorder
				nonRecursivePreOrder(root)
				{
					create stack S
					S.push(root)
					while (!S.empty())
					{
						x = S.pop();
						cout << x < ", ";
						if (x.right != NULL)
						{
							S.push(x.right)
						}
						if (x.left != NULL)
						{
							S.push(x.left)
						}
					}
				 }
			- non-recursive algorithm for inorder
				nonRecursiveInOrder(root)
				{
					create stack S
					S.push(root)
					x = root
					while (x != NULL)
					{
						if (x.left != NULL)
						{
							s.push(x.left)
							x = x.left
						}
					}
					while (!(S.empty()))
					{
						x = S.pop()
						cout << x
						if (!(x.right == NULL))
						{
							S.pushToBottomLeft(x.right) // where pushToBottomLeft is the while loop written directly above
						}
					}
				}

		- BST
			- removing, what are the 3 cases
				- Node to be deleted is leaf, simply remove from tree
				- Node to be deleted has only one child, copy the child to the node and 
				  delete the child
				- Node to be deleted has 2 children, find inorder successor of the node, 
				  copy the contents of the inorder succcessor to the n ode and delete the 
				  inorder successor
			- method for size and height
				- Size()
				- Height()
	- Stacks and queues
		- Radix sort
			- Complexity: O(n * L)
		- Infix to postifx algorithms
		- Postfix evaluation
			s <-- stack
			while (there are more tokens
				A = getNextToken;
				if (A is an operator)
					a1 = s.pop
					a2 = s.pop
					perform a1 A a2
					the result x
					s.push(x)
				else
					s.push(A)
			cout << s.pop
	- LinkedList
		- Number of ways a LinkedList can be created
			- 
		- LinkedList destructor method, size method
			- Size()
				template <class DT>
				int LinkedList<DT>::size() 
				{
					if (_info == NULL)
					{
						return 0;
					}
					return (1 + (*_next).size());
				}	
			- Destructor
				template <class DT>
				LinkedList<DT>::~LinkedList()
				{
					if (_info == NULL)
					{	
						return;
					}
					else
					{
						delete _info;
						_info = NULL;
						delete _next;
						_next = NULL;
					}
				}

	- Array, matricies
		- Arrayclass data structure
			Arrayclass<int*>* one;
			one = new Arrayclass<int*>(10);
			for (int i = 0; i < (*one).size; ++i)
			{
					(*one)[i] = new int(0);
			}

			Arrayclass<Arrayclass<int>*>* two;
			two = new Arrayclass<Arrayclass<int>*>(10);
			for (int i = 0; i M (*two).size; ++i)
			{
				(*two)[i] = new Arrayclass<int>(10);
				for (int j = 0; j < *((*two)[i]).size(); ++j)
				{
					(*(*two)[i])[j] = 0;
				}
			}

		- number of ways to store a matrix
			- 5 ways to store a matrix
				- sparse matrix
				- arrayclass
				- 2 dimensional matrix
				- row major ordering
				- column major ordering
	- Big O
		- Definition
			- Let f(n) and g(n) be functions mapping non-negative integers to real numbers.
			  We say that f(n) belongs to O(g(n)) if there is a real number c > 0 and a 
			  fixed integer n_o \geq 1 such that f(n) \leq cg(n) for every integer n \geq n_o
		- Number of primitive operations
			int sum = 0;					--> 1 primitive operation
			for (int i = 0; i < 100; ++i)	--> 3n + 2 primitive operations
			{
				if (i % 2)					--> 2n primitive operations
				{
					sum += i;				--> n primitive operations
				}
			}
			1 + 3n + 2 + 2n + n = 6n + 3 = 6(100) + 3 = 603
	- Bonus: Write Sridhar's Name
		- Sridhar Radhakrishnan
*/