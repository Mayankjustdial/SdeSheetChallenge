#include <bits/stdc++.h> 
/********************************

    Following is the class structure of the Node class:
    
    class Node
    {
    	public:
    	    int data;
    	    Node *next;
    	    Node(int data)
    	    {
    	        this->data = data;
    	        this->next = NULL;
    	    }
    };

********************************/
    int size(Node* head){
      int n=0;
     while(head != NULL){
     n++;
     head = head->next;
    }
        return n;
    }

Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head==NULL)
           return head;
        
      int n = size(head);
      int loop = k%n;
      loop = n - loop;
    
      if(n==1 || loop ==n){
          return head;
      }
        
      int j=0;
      Node* temp = head;
      Node* firstAddress = head;
        
      while(temp != NULL){
      j++;
      if(j == loop){
       firstAddress = temp->next;
       temp->next = NULL;
        break;
      }
       temp = temp->next;
          
      }
        
        temp = firstAddress;
        while(temp->next != NULL){
         temp = temp->next;
        }
        temp->next = head;
        return firstAddress;
    
}