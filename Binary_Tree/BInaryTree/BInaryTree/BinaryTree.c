#include "BianryTree.h"


/* ��� ���� */
Node* CreateNode(ElementType NewData)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));
	if (NewNode == NULL)
	{
		printf("Allocate Error\n");
		exit(0);
	}
	NewNode->RightChild = NULL;
	NewNode->LeftChild = NULL;
	NewNode->Data = NewData;
	return NewNode;
}

/* ��� �ı� */
void DestroyNode(Node* node)
{
	free(node);
}

/* ���� ��ȸ ���� Ʈ�� ��� */
void PreorderPrintTree(Node* root)
{
	if (root == NULL)
		return;

	printf(" %c", root->Data);

	PreorderPrintTree(root->LeftChild);
	PreorderPrintTree(root->RightChild);
}

/* ���� ��ȸ ���� Ʈ�� ���*/
void InorderPrintTree(Node* root)
{
	if (root == NULL)
		return;

	InorderPrintTree(root->LeftChild);
	printf(" %c", root->Data);
	InorderPrintTree(root->RightChild);
}

/* ���� ��ȸ ���� Ʈ�� ���*/
void PostorderPrintTree(Node* root)
{
	if (root == NULL)
		return;

	PostorderPrintTree(root->LeftChild);
	PostorderPrintTree(root->RightChild);
	printf(" %c", root->Data);
}

/* Ʈ�� �Ҹ� �Լ� - ������ȸ*/
void DestroyTree(Node* root)
{
	if (root == NULL)
		return;

	DestroyTree(root->LeftChild);

	DestroyTree(root->RightChild);

	DestroyNode(root);
}