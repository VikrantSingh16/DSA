#include <iostream>
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

void insertAtHead(node* &head,int val){
    node* n = new node(val);
        n->next = head;
        head = n;
    
}

void insertAtTail(node* &head,int val){
   node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void search(node* head,int key){
    node* temp = head;
    bool flag=0;
    while(temp->next!=NULL){
        if(temp->data==key){
           flag=1;
        }
    temp=temp->next;
    }
    cout<<endl;
    if(flag) cout<<"found";
    else cout<<"Not found";
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL";
}

void Delete(node* &head,int key){
    if(head==NULL){
        cout<<"No data to delete";
        return;
    }
    if(head->data==key){
        head = head->next;
        return;
    }
    node* del;
    node*temp=head;
    while(temp!=NULL){
        
        if(temp->data==key){
            break;
        }
        del=temp;
        temp=temp->next;
    }
    cout<<"\ndata to del "<<del->data;
    del->next=temp->next;
}

int main()
{
    node* head=NULL;
insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtHead(head,0);
display(head);
    search(head,0);
    Delete(head,0);cout<<"\n";
    display(head);
    return 0;
}
