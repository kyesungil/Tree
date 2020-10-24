#include "BianryTree.h"


/* 노드 생성 */
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

/* 노드 파괴 */
void DestroyNode(Node* node)
{
	free(node);
}

/* 전위 순회 이진 트리 출력 */
void PreorderPrintTree(Node* root)
{
	if (root == NULL)
		return;

	printf(" %c", root->Data);

	PreorderPrintTree(root->LeftChild);
	PreorderPrintTree(root->RightChild);
}

/* 중위 순회 이진 트리 출력*/
void InorderPrintTree(Node* root)
{
	if (root == NULL)
		return;

	InorderPrintTree(root->LeftChild);
	printf(" %c", root->Data);
	InorderPrintTree(root->RightChild);
}

/* 후위 순회 이진 트리 출력*/
void PostorderPrintTree(Node* root)
{
	if (root == NULL)
		return;

	PostorderPrintTree(root->LeftChild);
	PostorderPrintTree(root->RightChild);
	printf(" %c", root->Data);
}

/* 트리 소멸 함수 - 후위순회*/
void DestroyTree(Node* root)
{
	if (root == NULL)
		return;

	DestroyTree(root->LeftChild);

	DestroyTree(root->RightChild);

	DestroyNode(root);
}