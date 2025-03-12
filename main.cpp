#include <iostream>
using namespace std;

//Define a Node class

class Node {
public:
    int id;
    string name;
    string issue;
    Node* next;

//Node constructor
    Node(int ticketID, string customerName, string issueDescription) {
        id = ticketID;
        name = customerName;
        issue = issueDescription;
        next = nullptr;
    }
};

//Define Queue class
class Queue {
public:
    Node* head; //front of queue
    Node* tail; //back of queue

    Queue() { //initialize head and tail pointer; empty queue
        head = nullptr; 
        tail = nullptr;
    }
    
//method to enqueue ticket
    void enqueue(int id, string name, string issue) {
    //declares pointer NewNode of type Node*
    //newNode now points to mem location where Node object stored
        Node* newNode = new Node (id, name, issue); 

        //If queue empty, both head and tail point to new node
        if (tail == nullptr) {
            head = tail = newNode;
        }
        else{
            //If queue isn't empty add new node at tail and update
            tail->next = newNode;
            tail = newNode;
        }
    }

}
