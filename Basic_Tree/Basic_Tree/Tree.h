#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;

typedef struct TagLCRSNode
{
	struct TagLCRSNode* LeftChild;
	struct TagLCRSNode* RightSibling;

	ElementType Data;
} Node;

/* Tree Interface Function */

/* Node ����*/
Node* LCRS_CreateNode(ElementType NewData);

/* ��� ���� */
void LCRS_DestroyNode(Node* node);


void LCRS_AddChildNode(Node* parent, Node* child);

void LCRS_PrintTree(Node* node, int Depth);
