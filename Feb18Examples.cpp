/*
** Using Arrayclass to create a matrix, important for the quiz **
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

Matrix methods:
	1. int matrix[10][10];
	2. sparsematrix
	3. arrayclass of arrayclass objects
	4. row major ordering
		a. i, j location in the array. i * noOfCols + j --> position within the array
	5. column major ordering

	A set does not have duplicates, a list does.

	bool BinarySearch(A, L, R, key)
	{
		if (L < R)
		{
			mid = (L + R) / 2;
			if (A[mid] == key)
			{
				return true;
			}
			else if (A[mid] > key)
			{
				binarySearch(A, L, mid - 1, key);
			}
			else 
			{
				BinarySearch(A, mid + 1, R, key);
			}
		}
		else
		{
			return false;
		}
	}

	bool BinarySearch(A, L, R, key)
	{
		found = false;

		while ((L < R) && (!found))
		{
			int mid = (L + R) / 2;
			if (A[mid] == key)
			{
				found = true;
			}
			else if (A[mid] > key)
			{
				R = mid - 1;
			}
			else
			{
				L = mid + 1;
			}
		}
		return found;
	}
*/