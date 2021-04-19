#include <iostream>
using namespace std;
class node
{
	public:
	int data;
	node *left;
	node *right;
	node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
	
};
class binarytree
{
	public:
	int  inorder(node *p)
	{
		if(p==NULL)
		{ 
		  return 0;
		}
		inorder(p->left);
		cout<<p->data<<" ";
		inorder(p->right);
	}
	int  preorder(node *p)
	{
		if(p==NULL)
		{ 
		  return 0;
		}
		cout<<p->data<<" ";
		inorder(p->left);
		inorder(p->right);
	}
	int  postorder(node *p)
	{
		if(p==NULL)
		{ 
		  return 0;
		}
		
		inorder(p->left);
		inorder(p->right);
		cout<<p->data<<" ";
	}
	
};
int main()
{
	node *root;
	root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	binarytree b1;
	b1.inorder(root);
	cout<<"\n";
	b1.preorder(root);
	cout<<"\n";
	b1.postorder(root);
}
