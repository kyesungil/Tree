#include "Tree.h"


/* Node ����*/
Node* LCRS_CreateNode(ElementType NewData)
{
	Node* new_node = (Node*)malloc(sizeof(Node));
	if (new_node == NULL)
	{
		printf("Allocate Error!\n");
		return NULL;
	}
	new_node->LeftChild = NULL;
	new_node->RightSibling = NULL;
	new_node->Data = NewData;
	return new_node;
}

/* ��� ���� */
void LCRS_DestroyNode(Node* node)
{
	free(node);
}

/* ��� ���� */
void LCRS_AddChildNode(Node* parent, Node* child)
{
	/* parent node �� child Ȯ�� */
	if (parent->LeftChild == NULL)
	{
		parent->LeftChild = child;
	}
	/* if child�� null �̸� parent node�� child�� ���� */
	else
	{/* ������ sibling�� null�� �ƴҶ� ���� ã�� ���� */
		Node* SearchNode = parent->LeftChild;
		while (SearchNode->RightSibling != NULL)
			SearchNode = SearchNode->RightSibling;

		SearchNode->RightSibling = child;
	}
}

/* ��� ��� */
void LCRS_PrintTree(Node* node, int Depth)
{
	int i = 0;

	for (i = 0; i < Depth; i++)
		printf(" ");

	printf("%c\n", node->Data);

	if (node->LeftChild != NULL)
		LCRS_PrintTree(node->LeftChild, Depth + 1);

	if (node->RightSibling != NULL)
		LCRS_PrintTree(node->RightSibling, Depth);
}
