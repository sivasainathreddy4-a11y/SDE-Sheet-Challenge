#include <bits/stdc++.h>

using namespace std;
class Node {
public:
   
    int data;
    
    
    Node* next;

    
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};


Node* sortTwoLinkedLists(Node* list1, Node* list2) {
    
     if(list1==NULL||list2==NULL){
            return list1==NULL?list2:list1;
        }
        if(list1->data<=list2->data){
            list1->next=sortTwoLinkedLists(list1->next,list2);
            return list1;
        }
        else{
            list2->next=sortTwoLinkedLists(list1,list2->next);
            return list2;
        }
}


void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
       
        cout << temp->data << " "; 
        
        temp = temp->next; 
    }
    cout << endl;
}

int main() {
   
    Node* list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->next = new Node(5);

    Node* list2 = new Node(2);
    list2->next = new Node(4);
    list2->next->next = new Node(6);

    cout << "First sorted linked list: ";
    printLinkedList(list1);

    cout << "Second sorted linked list: ";
    printLinkedList(list2);

    Node* mergedList = sortTwoLinkedLists(list1, list2);

    cout << "Merged sorted linked list: ";
    printLinkedList(mergedList);

    return 0;
}