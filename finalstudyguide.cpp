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
		- splay tree
			- understand definition
		- AVL, RB
			- Will be given a tree, insert elements, find violation and do fix
			- Color an RB tree
		- 2-3 Tree
			- Look at exam 2
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
	- Bonus: Write Sridhar's Name
		- Sridhar Radhakrishnan
*/