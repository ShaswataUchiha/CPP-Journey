#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* prev;
    Node* next;

    Node() {
      this->prev = NULL;
      this->next = NULL;
    }

    Node(int data) {
      this->data = data;
      this->prev = NULL;
      this->next = NULL;
    }
};

void print(Node* head) {
  Node* temp = head;

  while(temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }

}

int findLength(Node* &head) {
  Node* temp = head;
  int len = 0;

  while(temp != NULL) {
    len++;
    temp = temp->next;
  }
  return len;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
  //LL is empty
  if(head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else {
    //LL is not empty
    Node* newNode = new Node(data);
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;
  }
}

void insertAtTail(Node* &head, Node* &tail, int data) {
  if(head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else {
    //LL is non empty
    Node* newNode = new Node(data);
    tail-> next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
}

void insertAtPostion(Node* &head, Node* &tail, int data, int pos){
  if(head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else{
    int len = findLength(head);
    if(pos == 1){
      insertAtHead(head, tail, data);
    }
    else if(pos == len+1){
      insertAtTail(head, tail, data);
    }
    else{
      Node* newNode = new Node(data);
      Node* prevNode = NULL;
      Node* currNode = head;

      while(pos != 1){
        pos--;
        prevNode = currNode;
        currNode =  currNode->next;
      }

      prevNode->next = newNode;
      newNode->prev = prevNode;

      currNode->prev = newNode;
      newNode->next =currNode;
    }
  }
}

void deleteNode(Node* &head, Node* &tail, int pos){
  int len = findLength(head);
  if(head == NULL){
    cout << "Linked List is empty";
    return;
  }

  if(head == tail){
    Node* temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
    return;
  }

  if(pos == 1){
    //Delete Head
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    head->prev = NULL;
    delete temp;
  }
  else if(pos == len){
    //Delete from Tail
    Node* prevNode = tail->prev;
    prevNode->next = NULL;
    tail->prev = NULL;
    delete tail;
    tail = prevNode;
  }
  else{
    //Delete from any position
    Node* prevNode = NULL;
    Node* currNode = head;

      while(pos != 1){
        pos--;
        prevNode = currNode;
        currNode =  currNode->next;
      }

    Node* nextNode = currNode->next;

    prevNode->next = NULL;
    currNode->prev = NULL;

    nextNode->prev = NULL;
    currNode->next = NULL;

    delete currNode;

    prevNode->next = nextNode;
    nextNode->prev = prevNode;  
  }
}

int main() {

  Node* head = NULL;
  Node* tail = NULL;
  insertAtHead(head, tail, 40);
  insertAtHead(head, tail, 30);
  insertAtHead(head, tail, 20);
  insertAtHead(head, tail, 10);
  print(head);
  cout << endl;

  // insertAtPostion(head, tail, 1000, 5);
  // print(head);

  deleteNode(head, tail, 1);
  // deleteNode(head, tail, 2);
  // deleteNode(head, tail, 3);
  // deleteNode(head, tail, 4);
  print(head);



  return 0;
}