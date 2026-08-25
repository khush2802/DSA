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


     return 0;



}