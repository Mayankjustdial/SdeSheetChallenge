/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
#include<bits/stdc++.h>
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    vector<int> vec;
    while(head != NULL) {
        vec.push_back(head->data);
        head = head->next;
    }
    for(int i=0;i<vec.size()/2;i++){
         if(vec[i] != vec[vec.size()-i-1]) 
             return false;
    } 
    return true;
    }
