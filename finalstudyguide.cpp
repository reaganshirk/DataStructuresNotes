/*
	- Hashing:
		- Given a hash function and elements to hash on, provide techniques for handling collisions, handle the collisions
			- Given a hash function and elements
				- Just plug the elements into the hash function and store them in the array index that the function gives
			- Handling collisions:
				- Chaining (array of LL)
				- Linear probing (sticking everything in proper array indicies when you can, sticking them in the next open one when not)
		- Worst case time
			- O(n) (probably??)
	- Graphs:
		- Adjacency list, adjacency matrix, which is better and why. 
			- Adjacency matrix: 
				- O(n^2)
				- Boolean matrix
				- 0 down the diagonal from upper left to lower right if the graph is not connected
				- 1 if the row value is connected to the column value, 0 if not
				- adjMat[i][j] == 1 if (i, j) belongs to E
			- Adjacency list: 
				- A list of the index neighbors at that index
					- i.e at the 0th index, there with be a list containing 4 and 1
					- Array of lists, array of linkedlists, array of queues, whatever you want 
				- O(n + m)
			- Adjacency list is better than adjacency matrix because it has a smaller big O (depending on the size of m)
		- Given a graph, draw the adjacency list and/or matrix. 
		- Draw dfs, bfs and know the algorithms. 
			- dfs
				// main method
				for (int i = 0; i < n; ++i)
				{
					visited[i] = false;
				}

				for (int i = 0; i < n; ++i)
				{
					if (!visited[i])
					{
						dfs(i);
					}
				}

				// dfs method
				dfs (int x)
				{
					visited[x] = true;
					for (each neighbor y of x)
					{
						if (!visited[y])
						{
							parent[y] = x;
							dfs(y);
						}
					}
				}

			- bfs
				// main method
				for (int i = 0; i < n; ++i)
				{
					visited[i] = false;
				}
				bfs(1);

				// bfs method
				bfs(x)
				{
					Q.enqueue(x)
					visited[x] = true;
					while(!Q.empty)
					{
						k = Q.dequeue()
						for (each unvisited neighbor y of k)
						{
							parent[y] = k;
							visited[y] = true;
							Q.enqueue(y);
						}
					}
				}
		- Applications
			- For detecting cycles
			- Determine the number of connected components
			- To check if a graph is connected or not
		- Maximum number of edges in both directed and undirected graphs
			- directed graph: n^2 - n
			- undirected graph: (n^2 - n) / 2
		- May copy and paste questions from Quiz 3??
	- Sorting
		- Sorting by ranking algorithms
			- Not sure if the below algorithm is the correct one but it's the only one I can find in the book that kinda makes sense
				algorithm compareAndCount(K0, K1, ... , Kn-1)
				{
					Rank <-- createArray(n)
					for (int i = 0; i < n - 1; ++i)
					{
						Rank[i] = 0;
					}
					for (int i = n - 1; i > 1; --i)
					{
						for (int j = i - 1; j > 0; --j)
						{
							if (Ki < Kj)
							{
								Rank[j] = Rank[j] + 1;
							}
							else
							{
								Rank[i] = Rank[i] + 1;
							}
						}
					}
				}
		- Sorting by selection algorithms
			- Selection sort algorithm (complexity)
				- O(n^2)
				algorithm selectionSort(A)
				{
					for (int i = A.size; i > 1; --i)
					{
						maxIndex = 0;
						for (int j = 0; j < i; ++j)
						{
							if (A[j] > A[maxIndex])
							{
								maxIndex = j;
							}
						}
						Swap(A[i], A[maxIndex]);
					}
				}
			- Heap sort algorithm (complexity)
				- Number of comparisons and data movements
				- O(nlogn)
				- Heap sort definition:
					- Doing a number of delete mins/delete maxs (depending on the heap) until the heap is emtpy. The resulting array will be sorted
		- Merge sort algorithm
			- Given an array, do the splits and merges and shit
			- O(nlogn)
			- Merge sort sucks because it requires an extra array (takes up more space)
						while ((i < n) && (j < m))
							if A[i] < B{j]
								C[k++] = A[i++]
							else
								C[k++] = B[j++]
						if (i < n)
							for (int a = i; a < n; ++a)
								C[k++] = A[a]
						else
							for (int b = j; b < m; ++b)
								Ck++] = B[b]
					- above algorithm: O(n + m) * log(n + m)
		- Quick sort algorithm
			- Complexity O(n^2)
			- Best case input
				- Picks middle element as pivot, unsorted array
			- Worst case input
				- Picks smallest or largest element as pivot, sorted array
			algorithm quickSort(A, left, right)
			{
				if (left < right)
					pivot = A[left];
					i = left;
					j = right + 1;
					do
						do
							i = i + 1;
						while (i < A.size) && (A[i] < pivot)
						do
							j = j - 1;
						while (A[j] > pivot)
							if (i < j)
								Swap(A[i], A[j])
						while (i < j)
						Swap(A[left], A[j])
						quickSort(A, left, j - 1)
						quickSort(A, j + 1, right)
			}
		- Insertion sort
			template <class DT>
			void insertionSort(ArrayClass<DT>& list)
			{
				int i, j;
				DT insertElement;

				for (i = 1; i < list.size(); ++i)
				{
					insertElement = list[i];
					j = i - 1;
					while ((j >= 0) && (insertElement < list[j]))
					{
						list[j + 1] = list[j];
						--j;
					}
					list[j + 1] = insertElement;
				}
			}
	- Priority Search Trees
		- Minimum heap
			- English definition
				- A minimum heap is a complete binary tree with a maximum height of log(n) where each value 
				  at a node is smaller than all of the values stored in its subtree and the minimum is always the root
			- Draw the min heap
			- time complexity of operations
						min heap
				insert		log(n)
				find min	1	
				find max	x
				delete min	log(n)
				delete max	x
		- min-max heap
			- draw the min-max heap
			- time complexity of operations
						min-max heap
				insert		log(n)
				find min	1	
				find max	1
				delete min	log(n)
				delete max	log(n)
		- compare heap operations on BST (AVL, RB) and sorted array
					2-3	RB	AVL	Sorted array
			insert		log(n)	log(n)	log(n)	n
			find min	1*	1*	1*	1
			find max	1*	1*	1*	1
			delete min	log(n)	log(n)	log(n)	n
			delete max	log(n)	log(n)	log(n)	n
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
					template <class DT>
					int binarySearchTree<DT>::size()
					{
						if (isEmpty())
						{
							return 0;
						}

						return (1 + left->size() + right->size());
					}
				- Height()
					template <class DT>
					int binarySearchTree<DT>::height()
					{
						if (isEmpty())
						{
							return 0;
						}

						return (1 + max(left->height(), right->height()));
					}
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
			- LinkedList row (basic LinkedList)
			- Doubly Linked List (pointer to previous as well as next)
			- Circulary Linked List (points to itself eventually)
			- Generalized List (next, down, value)
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

			// class definition, not explicity said was needed but wasn't sure if above code was the data structure or if this is
			class arrayClass
			{
			protected:
				DT* object
				int _size
				void copy(const ArrayClass<DT>& ac)
			public:
				default constructor
				copy constructor
				non default constructor
				destructor
				size
				= operator
				[] operator 
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
		- Sridhar Radhakrishnan (Rad-ha-krish-nan)
*/
