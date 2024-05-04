#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node() { 
    // cout << "Default Constructor";
    this->next = NULL; 
  }

  Node(int data){
    // cout << "Parameter Constructor " << data << endl;
    this->data = data;
    this->next = NULL;
  }
};

void printLL(Node* head){
    Node* temp = head;
    int count = 0;
    
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
        count++;
    }
    cout << endl;
    cout << "Length Of Linked List " << count;
}

int main() {
  Node* first = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fifth = new Node(50);
  
  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  
  
  Node* head = first;
  cout << "Printing the Linked List -> " << endl;
  printLL(head);
  
  insertHead(head, 500);
  
  cout << "Printing the Linked List -> " << endl;
  printLL(head);
  
  
  
  return 0;
}