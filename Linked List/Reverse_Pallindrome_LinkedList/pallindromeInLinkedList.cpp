#include<iostream>
using namespace std;

class Node{
  public:
  char data;
  Node* link;
  Node(char val){
      data=val;
  }
};

class LinkedList{
    public:
    void insert(Node* &head,char data,int pos){
        Node* newNode = new Node(data);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* temp  = head;
        while(temp->link!=NULL){
            temp=temp->link;
        }
       temp->link=newNode;
    }

    string display(Node* head){
       Node* temp=head;
       string headString;
        while(temp!=NULL){
            cout<<temp->data<<"-->";
         headString=headString+temp->data;
            temp=temp->link;
        }
    
        cout<<"NULL"<<"\n";
        return headString;
    }
    Node* reverse(Node* &head){
        Node* prev = NULL;
        Node* curr = head;
        while(curr!=NULL){
            Node* temp = curr->link;
            curr->link=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
 
};

int main(){
    Node* head=NULL;
    LinkedList ls;
    ls.insert(head,'a',0);
    ls.insert(head,'b',1);
    ls.insert(head,'b',2);
    ls.insert(head,'a',2);
    string str=ls.display(head);
    cout<<"\n";
    string strRev=ls.display(ls.reverse(head));
    if(str==strRev){
        cout<<"Pallindrome";
    }
    else{
        cout<<"Not pallindrome";
    }
    return 0;
    
}