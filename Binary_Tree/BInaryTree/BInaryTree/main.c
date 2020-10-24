#include "BianryTree.h"

int main()
{
	Node* A = CreateNode('A');
	Node* B = CreateNode('B');
	Node* C = CreateNode('C');
	Node* D = CreateNode('D');
	Node* E = CreateNode('E');
	Node* F = CreateNode('F');
	Node* G = CreateNode('G');


	A->LeftChild  = B;
	B->LeftChild  = C;
	B->RightChild = D;
	A->RightChild = E;
	E->LeftChild  = F;
	E->RightChild = G;

	printf("Preorder ...\n");
	PreorderPrintTree(A);
	printf("\n\n");

	printf("Inorder ...\n");
	InorderPrintTree(A);
	printf("\n\n");
	
	printf("Postorder ...\n");
	PostorderPrintTree(A);
	printf("\n\n");

	DestroyNode(A);

	return 0;
}