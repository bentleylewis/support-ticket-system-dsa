#include <iostream>
#include <string>
using namespace std;


int main(){
    supportQueue queue;
    int choice;

    do {
        cout << "\n--- Customer Support Ticket System ---\n";
        cout << "1. Add a Ticket (Enqueue)\n";
        cout << "2. Serve a Ticket (Dequeue)\n";
        cout << "3. View Next Ticket (Peek)\n";
        cout << "4. Display All Tickets\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
 
        if (choice == 1) {
            int id;
            string name, issue;
            cout << "Enter Ticket ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Customer Name: ";
            getline(cin, name);
            cout << "Enter Issue Description: ";
            getline(cin, issue);

            queue.enqueue(id, name, issue);
            cout << "Ticket added successfully!\n";
        } 
        else if (choice == 2) {
            queue.dequeue();
        } 
        else if (choice == 3) {
            queue.peek();
        } 
        else if (choice == 4) {
            queue.displayAll();
        } 
        else if (choice == 5) {
            cout << "Exiting program.\n";
        } 
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}


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
class supportQueue {
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

    //method for dequeue
    void dequeue(){
        if (head = nullptr) {
            cout<<"Queue is empty. No tickets to be served" << endl;
            return;
        }
    // temp pointer to same mem location as head; both point to front node
        Node* temp = head;
    
    //print ticket details
        cout << "Serving Ticket: Ticket ID: " << temp->id
             << ", Customer name: " << temp ->name
             << ", Issue: " << temp->issue << std::endl;


    //move head to next node
        head = head->next;

    //check case for queue becoming empty
        if (head == nullptr) {
            tail = nullptr;
        }

    //delete old front node (for memory)
        delete temp;

    }
    //method for viewing top ticket
    void peek() {
        if (head == nullptr) {
            cout<<"Queue is empty. No ticket to be viewed." << endl;
            return;
        }
        else{
            cout << "Serving Ticket: Ticket ID: " << head->id
                 << ", Customer name: " << head ->name
                 << ", Issue: " << head->issue << std::endl;
        }

    }

    //method for displaying all tickets
    void displayAll(){
        Node* temp = head;

        //check for empty queue
        if (temp == nullptr)
            cout << "Queue is empty. No tickets to display."
        while (temp != nullptr){
            cout << "Serving Ticket: Ticket ID: " << temp->id
                 << ", Customer name: " << temp ->name
                 << ", Issue: " << temp->issue << std::endl;
            temp = temp->next; //continue to next ticket
        }


    }

};
