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
*/