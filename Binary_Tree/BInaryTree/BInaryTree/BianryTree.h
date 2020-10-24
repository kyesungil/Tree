#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

/* 데이터 구조 */
typedef char ElementType;


/* 노드 구조 */
typedef struct Node_
{
	struct Node_* RightChild;
	struct Node_*  LeftChild;

	ElementType Data;
} Node;


/* 바이너리 함수 구조 */

/* 노드 생성 */
Node* CreateNode(ElementType NewData);
/* 노드 파괴 */
void DestroyNode(Node* node);

/* 전위 순회 이진 트리 출력 */
void PreorderPrintTree(Node* root);

/* 중위 순회 이진 트리 출력*/
void InorderPrintTree(Node* root);

/* 후위 순회 이진 트리 출력*/
void PostorderPrintTree(Node* root);

/* 트리 소멸 함수 - 후위순회*/
void DestroyTree(Node* root);
