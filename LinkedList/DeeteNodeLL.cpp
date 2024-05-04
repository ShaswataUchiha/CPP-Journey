#include <stdio.h>
#include <iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;

    Node(){
        this->next = NULL;
    }
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int findLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}


void insertAtHead(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    
    if(head == NULL){
        head = tail = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);
    
    if(head == NULL){
        head = tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAtPosiiton(Node* &head, Node* &tail, int position, int data){
    int len = findLength(head);
    
    if(position == 1){
        insertAtHead(head, tail, data);
    }
    else if(position > len){
        insertAtTail(head, tail, data);
    }
    else{
        Node* newNode = new Node(data);
        
        Node* prev = NULL;
        Node* curr = head;
        
        while(position != 1){
            position--;
            prev = curr;
            curr = curr->next;
        }
        newNode->next = curr;
        prev->next = newNode;
    }
}

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deleteNode(Node* &head, Node* &tail, int position){
  if(head == NULL){
    cout << "Node is empty";
    return;
  }

  if(head == tail){
    Node* temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
  }

  int len = findLength(head);

  if(position == 1){
    //Delete from head
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  }
  else if(position == len){
    //Delete from tail
    Node* temp = head;
    while(temp->next != tail){
      temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
  }
  else{
    //Delete from middle
    Node* prev = NULL;
    Node* curr = head;
    while(position != 1){
      position--;
      prev = curr;
      curr = curr->next;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}

int main(){
    
    Node* head = NULL;
    Node* tail = NULL;
    
    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 70);
    
    
    printLL(head);
    cout << endl;

    cout << "After Deletion -> " << endl;
    deleteNode(head, tail, 7);
    printLL(head);

    return 0;
}