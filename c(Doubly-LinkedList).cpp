//Doubly Linked List
//1.노드생성 2.노드찾기 3.노드삭제 4.노드추가 5.노드중간에추가

#include<stdio.h>
#include<stdlib.h>



typedef struct listNode
{
	int Data;
	struct listNode* Next;
	struct listNode* Prev;
}Node;
//노드생성
Node* createNode(int data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));

	//varaibles inialization
	newNode->Data = data;
	newNode->Next = NULL;
	newNode->Prev = NULL;

	return newNode;
}
void deleteNode(Node* Node)
{
	free(Node);

}

Node* getNodeAt(Node* head, int index)
{
	Node* horse = head;
	int count = 0;

	while (horse != NULL)
	{
		if (count++ == index)
		{
			return horse;
		}
		horse = horse->Next;

	}
	return NULL;
}
int countNode(Node* head)
{
	int count = 0;
	Node* horse = head;
	while (horse != NULL)
	{
		horse = horse->Next;
		count++;

	}
	return count;
}
void addNode(Node** head, Node* newNode)
{
	//리스트가 아무것도 없을때 추가할상황
	//NO List Exists
	if ((*head) == NULL)
	{
		*head = newNode;
	}
	
	 //이미리스트가 존재할때 뒤에 추가하는 상황
	//list exists
	else
	{
		Node* horse = (*head);

		while (horse->Next != NULL)
		{
			horse = horse->Next;
		}
		horse->Next = newNode;
		newNode->Prev = horse;
	}
}
void insertNode(Node* current, Node* newNode)
{
	//head
	if (current->Prev == NULL && current->Next == NULL)
	{
		current->Next = newNode;
		newNode->Prev = current;
	}

	//not head
		//if tail
	if (current->Next == NULL)
	{
		current->Next = newNode;
		newNode->Prev = current;
	}
	else
	{
		current->Next->Prev = newNode;
		newNode->Prev - current;
		newNode->Next = current->Next;
		current->Next = newNode;

	}
}
void removeNode(Node** head, Node* remove)
{
	//head
	if (*head == remove)
	{
		*head = remove->Next;
	}
	//when remove has next link to go
	if (remove->Next != NULL)
	{
		remove->Next->Prev = remove->Prev;

	}
	if (remove->Prev != NULL)
	{
		remove->Prev->Next = remove->Next;
	}
	deleteNode(remove);
}
