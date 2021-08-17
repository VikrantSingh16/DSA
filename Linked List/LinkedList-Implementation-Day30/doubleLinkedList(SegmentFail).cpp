#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node* prev;
node(int val){
    data=val;
    prev=NULL;
    next=NULL;
}
};
void insertAtHead(node* &head,int val){
node* temp = head;
node* n = new node(val);
    n->next=temp;
    if(head!=NULL){
    head->prev=n;
    }
    head=n;

}
void insertAtTail(node* &head,int val){
    node* n = new node(val);
    node* temp=head;
   if(temp==NULL){
       insertAtHead(head,val);
      
   }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    }
    void display(node* head){
        while(head!=NULL){
            cout<<head->data<<"-->";
            head=head->next;
        }
        cout<<"NULL"<<endl;
    }
int main()
{
    node* head=NULL;
    insertAtTail(head,2);
      insertAtTail(head,3);
        insertAtTail(head,4);
          insertAtTail(head,5);
          display(head);
 return 0;
}