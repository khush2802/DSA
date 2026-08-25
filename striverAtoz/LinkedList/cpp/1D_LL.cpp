#include <bits/stdc++.h>
using namespace std;

//NODE

struct Node{
     int data;
     // store the add. of next Node

     Node* next;

     //constructor 
     Node(int val){
          data = val;
          next = nullptr;
     }
};


//conversion of array to ll
Node* conversion(int arr[], int n){
     Node* head = new Node(arr[0]);//first node creation

     Node* currNode = head;

     for (int i =1; i<n;i++){

          //createing a new node
          Node* newNode = new Node(arr[i]);
          //curr node storing add of  next node
          currNode -> next = newNode;
          //move currNode to next node
          currNode = newNode;

     }
     return head;
}

void printList(Node* head){
     //currNode start from head
     Node* currNode = head;

     while(currNode!=nullptr){
          cout<<currNode->data<<" -> ";
          currNode = currNode->next;

     }

     cout<<"NULL"<<endl;

}


bool search(Node* head, int target){
     Node* currNode = head;

     while(currNode != nullptr){
          if(currNode->data == target){
               return true;
          }

          currNode = currNode->next;
     }

     return false;
}

Node* deleteNode(Node* head, int target){
     if(head == nullptr){return nullptr;}//if no node is there

     if(head->data == target){//if head to be deleted
          Node* toDelete = head;//setting the head to the delteding node
          head = head->next;//moving the head to the next element so that head can be derive
          delete toDelete;
          return head;
     }

     Node* curr = head;
     while(curr->next!=nullptr){
          if(curr->next->data == target){
               Node* toDelete = curr->next;
               curr->next = curr->next->next;
               delete toDelete;
               break;
          }
          curr = curr->next;
     }
     return head;
}

Node* insertion(Node* head, int target){
     Node* newNode = new Node(target);

     if(head == nullptr){return newNode;}

     Node* curr = head;

     while(curr->next!=nullptr){
          curr = curr->next;
     }

     curr->next = newNode;

     return head;
}


Node* reverseList(Node* head){
     Node* prev = nullptr;//prev node start as null
     Node* curr = head;//curr node start as head
     Node* nextNode = nullptr;//will store add of nxt node
     
     while(curr != nullptr){
          //save nxt node before changing the link
          nextNode = curr->next;
          curr->next = prev;
          prev = curr;
          curr = nextNode;
     }

     return prev;
}

int main(){
     int arr[] = {20,40,30,50};
     int n = sizeof(arr) / sizeof(arr[0]);

     cout<<"original array"<<endl;

     for(int i = 0; i < n; i++){
          cout<<arr[i]<<" ";
     }

     cout<<endl;
//   

     // conversion from arr to LL
     Node* head = conversion(arr, n);
     printList(head);


     //searching
     int target = 330;
     cout<<"searching for the "<<target<<endl;

     if(search(head, target)){
          cout<<"Founded"<<endl;
     }else{
          cout<<"Not Founded"<<endl;
     }


     //deleting of an particular element
     target = 30;
     cout<<"deleting "<<target<<endl;
     head = deleteNode(head, target);
     printList(head);

     //adding of element in the linkedlist at the back
     target = 60;
     cout<<"adding"<<target<<endl;
     head = insertion(head, target);
     printList(head);


     //reversing of list

     cout<<"reversing of the list"<<endl;
     head = reverseList(head);
     printList(head);



     return 0;

     
     



}