#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;

typedef struct BTree btree;

struct BTree {
	char item;
	BTree* left;
	BTree* right;
};

void maketree(btree* root, char c, char l, char r)
{
	btree* tmp = root;
	if(tmp->item == c){
		if(l != '.') {
			btree* lnode = (btree*)malloc(sizeof(btree));
			tmp->left = lnode;
			lnode->item = l;
			lnode->left = NULL;
			lnode->right = NULL;
		}
		if(r != '.') {
			btree* rnode = (btree*)malloc(sizeof(btree));
			tmp->right = rnode;
			rnode->item = r;
			rnode->left = NULL;
			rnode->right = NULL;
		}
	}
	else {
		if(root->left != NULL) maketree(root->left, c, l, r);
		if(root->right != NULL) maketree(root->right, c, l, r);
	}
}

void preorder(btree* root)
{
	printf("%c", root->item);
	if(root->left != NULL) preorder(root->left);
	if(root->right != NULL) preorder(root->right);
}

void inorder(btree* root)
{
	if(root->left != NULL) inorder(root->left);
	printf("%c", root->item);
	if(root->right != NULL) inorder(root->right);
}

void postorder(btree* root)
{
	if(root->left != NULL) postorder(root->left);
	if(root->right != NULL) postorder(root->right);
	printf("%c", root->item);
}

int main()
{
	int N;
	cin >> N;
	btree* root = (btree*)malloc(sizeof(btree));
	root->item = 'A';
	root->left = NULL;
	root->right = NULL;
	for(int i = 0; i < N; i++){
		char a, b, c;
		cin >> a >> b >> c;
		maketree(root, a, b, c);
	}
	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
	printf("\n");
	return 0;
}