/*
 - Sorting
	- Sorting by selection
		- We should know the algorithm(s) for selection sort, in the textbook.
		- Heap sort
			- O(nlogn)
	- Sorting by Exchanges
		- Bubble sort
			- O(n) - best case
			- O(n^2) - worst case
			- Look in textbook
		- Quick sort
			- O(n^2) - best and worst case
			- Partition: pivot position = first element or fist index position
			- Know how to do quick sort by hand, one partition at a time
			- Example
				- 10, 18, 5, 9, 21 48, 3, 2, 1
				- int i, int j
				- Pivot element: 10
				- increment i = 0 until you find number bigger than 10 (18)
				- decrement j = 9 until you find a number smaller than 10 (1)
				- swap i, j
				- i = 1, j = 18
				- 10, 1, 5, 9, 21, 48, 3, 2, 18
				- Increment i until number bigger than 1 is found, decrement j until number less than 18 is found
				- 10, 1, 5, 9, 2, 48, 3, 21, 18
				- i = 21, j = 2
			- Algorithm quickSort(A, L, R)
				if (L < R)
				{
					int mid = partition(A, L, R);
					quickSort(A, L, mid - 1);
					quickSort(A, mid + 1, R);
				}
	- Sorting by merging
		- Merge sort
			- O(nlogn) - best and worse case
			- Merging takes 2 sorted arrays and turns them into 1
			- Example
				- A: 7, 9, 13, 15, 60 B: 1, 2, 4, 6, 10, 12, 19
				- |A| = n, |B| = m, copy = O(n + m)
				- Sort O(n + m) * log(n + m)
				- Can we merge in O(n + m) time? ** KNOW BELOW ALGORITHM FOR EXAM **
					- Index 0 of A = i, index 0 of B = j, index 0 of C = k
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
			- Actual sort part, above is just merging
				- 18, 100, 5, 9, 12, 65, 40, 80, 22, 1
				- 18, 100, 5, 9, 12 split 65, 40, 80, 22, 1
				- 18, 100 split 5, 9, 12 split 65, 40 split 80, 22, 1
				- 18 split 100 split 5 split 9, 12 split 65 split 40 split 80 split 22, 1
				- 18 split 100 split 5 split 9 split 12 split 65 split 40 split 80 split 22 split 1
				- Now have several different arrays that are sorted, start putting them back together
				- 18, 100 split 9, 12 split 40, 65 split 1, 22
				- 18, 100 split 5, 9, 12 split 40, 65, 80 split 1, 22
				- 5, 9, 12, 18, 100 split 1, 22, 40, 65, 80
					- At this point, call the merge algorithm above
				- 1, 5, 9, 12, 18, 22, 40, 65, 80, 100

			- Algorithm mergeSort(A, L, R)
				if (L < R)
				{
					int mid = (L + R) / 2;
					mergeSort(A, L, mid);
					mergeSort(A, mid + 1, R);
					merge(A, L, mid, mid + 1, R);
				}
			- For exam:
				- Be able to write mergeSort algorithm
				- Be able to do a merge sort by hand

	- Sorting by insertion
		- Insertion sort
			- Know algorithm(s) in book
			- Compare first two elements, swap them if they're not sorted. 
			- Go to next element. Move it if it's not sorted, don't if it is. Continue
			- Example:
				- 10, 20, 30, 40, 50, 60, 70
					- n - 1 comparisons, O(n) - best case
					- 0 data movements
				- 70, 60, 50, 40, 30, 20, 10
					- 60, 70, 50, 40, 30, 20, 10
					- 50, 60, 70, 40, 30, 20, 10
					- 40, 50, 60, 70, 30, 20, 10, etc
					- O(n^2) - worst case

*/