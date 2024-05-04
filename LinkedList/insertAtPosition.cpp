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

int Lenght(Node* head){
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
    int len = Lenght(head);
    
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


int main(){
    
    Node* head = NULL;
    Node* tail = NULL;
    
    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtPosiiton(head, tail, 2, 500);
    
    
    printLL(head);
    cout << endl;

    return 0;
}