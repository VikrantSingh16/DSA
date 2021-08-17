#include<iostream>
using namespace std;
class node{
    public:
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}
};
void search(node* head,int key){
    bool flag=0;
while(head!=NULL){
    if(key==head->data){
        flag=1;
     break;
    }
       head=head->next;
}
if(flag) cout<<"found";
else cout<<"Not found";
}
void insertAtTail(node* &head,int val){
    node* n = new node(val);
    node* temp = head;
    if(temp==NULL){
        head=n;
    }    
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = n;
    }

}
void display(node* head){
while(head!=NULL){
    cout<<head->data<<"-->";
head = head->next;
}
    cout<<"NULL"<<endl;
}
void Delete(node* head,int key){
node* temp = head;
node* del;
while(temp->next!=NULL){
    
    if(temp->data==key){
    break;
    }del=temp;
        temp=temp->next;
}
del->next=temp->next;
}
int main()
{
 node* head=NULL;
 insertAtTail(head,1);
 insertAtTail(head,2);
 insertAtTail(head,3);
  insertAtTail(head,4);
   insertAtTail(head,6);
 display(head);
 Delete(head,2);
 display(head);
 search(head,12);
 return 0;
}