/*

LinkedList<int>* one =new LinkedList<int>();

template <class DT>
LinkedList<DT>::LinkedList()
{
	_info = NULL;
	_next = NULL;
}

cout << (*one).size(); << endl;

template <class DT>
int LinkedList<DT>::size() 
{
	if (_info == NULL)
	{
		return 0;
	}

	return (1 + (*_next).size());
}

// Also in the textbook I think
template <class DT>
void LinkedList<DT>::add(DT& other)
{
	LinkedList<DT>* temp = new LinkedList(_info, _next);
	_info = new DT(x);
	_next = temp;
}

template <class DT>
void LinkedList<DT>::insertAt(int pos, DT& x)
{
	if (pos == 0)
	{
		add x;
	}
	else 
	{
		(*_next).insertAt(pos - 1, x);
	}
}

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

template <class DT>
LinkedList<DT>::remove()
{
	if (_info != NULL)
	{
		delete _info;
		LinkedList<DT>* temp = _next;
		_info = (*temp)._info;
		_next = (*temp)._next;
		(*temp)._info = NULL;
		(*temp)._next = NULL;
		delete temp;
	}
}

template <class DT>
DT& LinkedList<DT>::infoAt(int pos)
{
	if (pos == 0)
	{
		return (*_info);
	}
	else
	{
		return (*_next).infoAt(pos - 1);
	}
}

template <class DT>
DT& LinkedList<DT>::operator[](int pos)
{
	return infoAt(pos);
}

// Project 3 Stuff
class Term
{
	protected:
		int c;
		int exponent;
};
class Polynomial
{
	public:
		LinkedList<Term>* iCantReadSridharsWriting;
};

// LinkedList as Array
template<class DT>
class LinkedListRow
{
protected:
	DT* _info;
	int _next;
	int start; // first index position
}

// Types of LinkedLists
	-Dolly LinkedList
	-Circularly LinkedList
	-Generalized List

// Purpose of the stack is to remember the recent something. Used for backtracking

template<class DT>
class ArrayStack
{
protected:
	int _top;
	Arrayclass<DT>* myStack;
public:
	ArrayStack();
	ArrayStack(const DT &copy);
	~ArrayStack();
	DT& pop();
	void push(DT &x);
	DT& peek();
	int size;
}

template<class DT>
void ArrayStack<DT>::push(DT &x)
{
	if (_top ==*S.size())
	{
		throw stackoverflow();
	}
	else
	{
		S[_top] = x;
		_top++
	}
}

template<class DT>
class LinkedListStack
{
protected:
	LinkedList<DT>* S;
public:
	
}

template<class DT>
DT& LinkedListStack<DT>::pop()
{
	if (_info == NULL)
	{
		throw stackoverflow();
	}
	else
	{
		DT temp = (*S).info();
		(*S).remove();
		return temp;
	}
}

int main()
{
	ArrayStack<int>* myStack = new ArrayStack<int>(100);
	(*myStack).push(100);
	(*myStack).push(20)
}
*/