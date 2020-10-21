#include "Tree.h"


/* Node 생성*/
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

/* 노드 삭제 */
void LCRS_DestroyNode(Node* node)
{
	free(node);
}

/* 노드 연결 */
void LCRS_AddChildNode(Node* parent, Node* child)
{
	/* parent node 의 child 확인 */
	if (parent->LeftChild == NULL)
	{
		parent->LeftChild = child;
	}
	/* if child가 null 이면 parent node의 child와 연결 */
	else
	{/* 없으면 sibling이 null이 아닐때 가지 찾고 연결 */
		Node* SearchNode = parent->LeftChild;
		while (SearchNode->RightSibling != NULL)
			SearchNode = SearchNode->RightSibling;

		SearchNode->RightSibling = child;
	}
}

/* 노드 출력 */
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
