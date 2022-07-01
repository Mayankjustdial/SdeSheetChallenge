#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/
Node* merge(Node* a, Node* b)
{
     
    // If first linked list is empty then second
    // is the answer
    if (a == NULL)
        return b;
 
    // If second linked list is empty then first
    // is the result
    if (b == NULL)
        return a;
 
    // Compare the data members of the two linked
    // lists and put the larger one in the result
    Node* result;
 
    if (a->data < b->data)
    {
        result = a;
        result->child = merge(a->child, b);
    }
 
    else
    {
        result = b;
        result->child = merge(a, b->child);
    }
    result->next = NULL;
    return result;
}


Node* flattenLinkedList(Node* head) 
{
	// Write your code here
     // Base Cases
    if (head == NULL || head->next == NULL)
        return head;
 
    // Recur for list on right
    head->next = flattenLinkedList(head->next);
 
    // Now merge
    head = merge(head, head->next);
 
    // Return the root
    // it will be in turn merged with its left
    return head;
}
