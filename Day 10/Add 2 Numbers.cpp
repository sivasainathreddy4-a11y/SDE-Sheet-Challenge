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
    void printLL(Node* head) {
        while (head != NULL) {
            cout << head->data << " ";
            head = head->next;
        }
    }
     Node* addTwoNumbers(Node* l1, Node* l2) {
         Node* dummyHead = new Node(0);
        Node* current = dummyHead;
        int carry = 0;
        
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int x = (l1 != nullptr) ? l1->data : 0;
            int y = (l2 != nullptr) ? l2->data : 0;
            int sum = carry + x + y;
            
            carry = sum / 10;
            current->next = new Node(sum % 10);
            current = current->next;
            
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        
        return dummyHead->next;
    
    }
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int N = 3;
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    
     
     Node*head2=new Node(3);
     head2->next=new Node(2);
     head2->next=new Node(1);
     
     head=addTwoNumbers(head,head2);
   

   
    printLL(head);
}
