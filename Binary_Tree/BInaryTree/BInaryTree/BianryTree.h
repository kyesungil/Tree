#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

/* ������ ���� */
typedef char ElementType;


/* ��� ���� */
typedef struct Node_
{
	struct Node_* RightChild;
	struct Node_*  LeftChild;

	ElementType Data;
} Node;


/* ���̳ʸ� �Լ� ���� */

/* ��� ���� */
Node* CreateNode(ElementType NewData);
/* ��� �ı� */
void DestroyNode(Node* node);

/* ���� ��ȸ ���� Ʈ�� ��� */
void PreorderPrintTree(Node* root);

/* ���� ��ȸ ���� Ʈ�� ���*/
void InorderPrintTree(Node* root);

/* ���� ��ȸ ���� Ʈ�� ���*/
void PostorderPrintTree(Node* root);

/* Ʈ�� �Ҹ� �Լ� - ������ȸ*/
void DestroyTree(Node* root);
