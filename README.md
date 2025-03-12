# support-ticket-system-dsa
In this assignment, you will implement a real-world application of a Customer Support Ticket System using a linked list-based queue. The system will allow you to manage customer support tickets efficiently. The queue should support the following operations:

Add a ticket: Add a new support ticket to the end of the queue. Each ticket should have a unique ID, customer name, and issue description.
Serve a ticket: Remove the ticket at the front of the queue and display its details as "being served."
Peek next ticket: Display the details of the next ticket to be served without removing it from the queue.
Display all tickets: Display all tickets currently in the queue, in the order they will be served.
Each support ticket in the system must be represented by a `Node` class. The `Node` class should store the necessary ticket details and facilitate linking with other nodes in the queue.

Note: Failure to build a `Node` class to represent tickets will result in the submitted work not being accepted or graded.

Your implementation must use a custom linked list-based queue, and you are not allowed to use built-in queue libraries. The goal is to understand the inner workings of queues and linked lists by creating a system commonly used in industry applications such as customer service, tech support, and service desk operations.
