#include<iostream>
using namespace std;
class node{
public:
int data;
node* right;
node* left;
node(int value){
data=value;
right=NULL;
left=NULL;
}
};
class BinarySearchTree{
public:
void insert(node* &root,int value){
node* temp=root;
node* n = new node(value);
if(root==NULL){
    root=n;
    return;
}
while(temp!=NULL){
if(temp->data>value){
    if(temp->left==NULL){
    temp->left=n;
    break;
    }
    temp=temp->left;
}
else if(temp->data<value){
    if(temp->right==NULL){
    temp->right=n;
    break;
    }
    temp=temp->right;
}
}
delete temp;
}
void display(node* root)
{
    if (root != NULL)
     {
        display(root->left);
        cout<<root->data<<" ";
        display(root->right);
    }
}
void lookUp(node* root,int data)
{
node* current=root;
if(data==current->data){
    cout<<"found";
    return;
}
while(current->data != data){
	
      if(current != NULL) {
cout<<current->data<<" ";			
         //go to left tree
         if(current->data > data){
            current = current->left;
         }//else go to right tree
         else {                
            current = current->right;
         }
			
         //not found
         if(current == NULL){
            cout<<"Not found";
         }
      }			
   }
}
};
int main()
{
 BinarySearchTree bst;
 node* root=NULL;
 bst.insert(root,4);
  bst.insert(root,5);
  bst.insert(root,8);
  bst.insert(root,10);
  bst.insert(root,1);
cout<<endl;
 bst.display(root);
 bst.lookUp(root,5);

  return 0;
}