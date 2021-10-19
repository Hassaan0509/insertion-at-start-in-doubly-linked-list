bool list::insertEnd(int x)
{
	node* newNode = new node();
	newNode->data = x;
	if (tail == NULL)
	{
		head = newNode;
		tail = newNode;
		return 1;
	}
	else
	{
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;

		return 1;
	}
}