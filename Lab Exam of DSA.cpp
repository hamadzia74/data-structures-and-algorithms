#include<iostream>
using namespace std;
class Binary_Search_Tree
{
	public:
    struct node
    {
        int data;
        node *left, *right;
    };
    node* root_node;
    node* emptytree(node* tree)
    {
        if(tree==NULL)
            return NULL;
        {
            emptytree(tree->left);
            emptytree(tree->right);
        }
    }
     node* insert(int val,node* tree)
    {
        if(tree==NULL)
        {
            tree=new node;
            tree->data = val;
            tree->left = tree->right=NULL;
        }
        else if(val<tree->data)
            tree->left=insert(val,tree->left);
        else if(val>tree->data)
            tree->right=insert(val,tree->right);
        return tree;
    }
    node* deletion(int val, node* tree)
    {
        node* temp;
        if(tree==NULL)
            return NULL;
        else if(val<tree->data)
            tree->left=deletion(val, tree->left);
        else if(val>tree->data)
            tree->right=deletion(val,tree->right);
        else
        {
            temp=tree;
            if(tree->left==NULL)
                tree=tree->right;
            else if(tree->right==NULL)
                tree=tree->left;
            delete temp;
        }

        return tree;
    }
     void inorder(node* tree)
    {
        if(tree == NULL)
            return;
        inorder(tree->left);
        cout<<tree->data<<" ";
        inorder(tree->right);
    }
    void insert(int val)
    {
        root_node=insert(val, root_node);
    }
    void deletion(int val)
    {
        root_node=deletion(val,root_node);
    }
     void display()
    {
        inorder(root_node);
        cout<<endl;
    }
};
int main()
{
	Binary_Search_Tree tree;
	tree.insert(10);
	tree.insert(20);
	tree.insert(5);
	tree.insert(8);
	tree.insert(7);
	tree.insert(30);
    tree.display();
    tree.deletion(20);
    tree.display();
    tree.display();
    tree.deletion(30);
    tree.display();
	system("pause");
}
