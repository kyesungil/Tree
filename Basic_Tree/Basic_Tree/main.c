#pragma once
#include "Tree.h"

int main()
{
	Node* Root = LCRS_CreateNode('A');

	
	Node* B = LCRS_CreateNode('B');
	Node* C = LCRS_CreateNode('C');
	Node* D = LCRS_CreateNode('D');
	Node* E = LCRS_CreateNode('E');
	Node* F = LCRS_CreateNode('F');
	Node* G = LCRS_CreateNode('G');

	/* 트리 노드에 추가 */
	LCRS_AddChildNode(Root, B);
	LCRS_AddChildNode(Root, C);
	LCRS_AddChildNode(Root, D);
	LCRS_AddChildNode(Root, E);
	LCRS_AddChildNode(Root, F);
	LCRS_AddChildNode(Root, G);

	LCRS_PrintTree(Root, 0);


	return 0;
}