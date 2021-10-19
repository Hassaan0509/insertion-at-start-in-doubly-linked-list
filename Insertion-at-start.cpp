bool list::insertStart(int value)
{
	node* newNode = new node();
	newNode->data = value;
	if (head == NULL)
	{
		head = newNode;
		tail = newNode;
		return 1;
	}
	else
	{
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
		return 1;
	}
}