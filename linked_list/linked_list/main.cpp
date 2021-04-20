//
//  main.cpp
//  linked_list
//
//  Created by helloKaviraj MBP on 11/04/21.
//

/* How to use code and understand?
 Uncomment the each section code till main and read out the comment.
 I provided step by step operations of a linked list so after completing one section I provided 10 line breaks so move on....
 */


#include <iostream>
using namespace std;




//struct Node {
//    int data;
// pointer next (Node *next) which is called self referencing structure, every nodes have to be address of next node and data type is same for all
//    Node *next;
//    Node(int x) {
//        data = x;
//        next = NULL;
//    }
//};
//
//int main() {
//    Node *head = new Node(10);
//    Node *temp1 = new Node(20);
//    Node * temp2 = new Node(30);
//    head -> next = temp1;
//    temp1 -> next = temp2;
//    return 0;
//}













// shorter implementation to create linked list
//struct Node {
//    int data;
//    Node *next;
//    Node(int x) {
//        data = x;
//        next = NULL;
//    }
//};
//
//int main() {
//    Node *head = new Node(10);
//    head -> next = new Node(20);
//    head -> next -> next = new Node(30);
//    cout << &head << endl;
//    cout << &head->next <<endl;
//    cout << &head->next->next<<endl;
//}












// Traversing a single linked list in c++
//struct Node {
//    int data;
//    Node *next;
//    Node(int x) {
//        data = x;
//        next = NULL;
//    }
//};
//
//
// single link list traversal function
//void printLinkedList(Node *head) {
//    Node *curr = head;
//    while (curr != NULL) {
//        cout << curr->data <<"\t";
//        curr = curr->next;
//    }
//
//}
//
//
//int main() {
//    Node *head = new Node(10);
//    head -> next = new Node(20);
//    head -> next -> next = new Node(30);
//    head -> next -> next -> next = new Node(40);
//    printLinkedList(head);
//    return 0;
//}













//recursiverly traversal of a linked list
/*struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// recursive travel code
void printRecursiveLinkedList(Node *head) {
    // if section is  base condition for linked list
    if (head == NULL) {
        return;
    }
    cout << head -> data << " ";
    printRecursiveLinkedList(head -> next);
}


int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    printRecursiveLinkedList(head);
    return 0;
}*/













// Insert at begin of singly linked list
/*struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Insert at begin our function
// Below function head treated differently than main
Node* insertBegin(Node *head, int x) {// we're returning node pointer
    Node *temp = new Node(x);
    temp -> next = head;
    return temp;
}

// main function function treated diff than insertBegin function
int main() {
    Node *head = NULL;// key code this means right now our linked list is empty
    head = insertBegin(head, 30);// return data assign to head makes it start head
    head = insertBegin(head, 20);
    head = insertBegin(head, 10);
    return 0;
}*/













//Insert at the end of singly linked list
//struct Node {
//    int data;
//    Node *next;
//
//    Node(int x) {
//        data = x;
//        next = NULL;
//    }
//};

// Insert node at the end of linked list function
//Node* insertEnd(Node *head, int x) {
//    Node *temp = new Node(x);
//    if (head == NULL) {
//        return temp; // this means this will be our head node
//    }
//    Node *curr = head;
//    while (curr -> next != NULL) {
//        curr = curr -> next;
//    }
//    curr -> next = temp;
//    return head;
//}
//
//int main() {
//    Node *head = NULL;
//    // All the cases we must need address of first node
//    head = insertEnd(head, 10);
//    head = insertEnd(head, 20);
//    head = insertEnd(head, 30);
//    return 0;
//}











// delete first node of singly linked list
// shorter implementation to create linked list
/*struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// I want to write a function which deletes a node
Node* deleteFirst(Node *head) {
    if (head == NULL) {
        return NULL;
    } else {
        Node *temp = head -> next;
        delete head;
        return temp;
    }
}

// printing data;
void printRecursiveLinkedList(Node *head) {
    // if section is  base condition for linked list
    if (head == NULL) {
        return;
    }
    cout << head -> data << " ";
    printRecursiveLinkedList(head -> next);
}

 
int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    cout << "Before deletion of node\n";
    printRecursiveLinkedList(head);
    Node *curr = deleteFirst(head);
    cout << "\n After deletion of node\n";
    printRecursiveLinkedList(curr);
}
*/















// delete last node of a singly linked list
//struct Node {
//    int data;
//    Node *next;
//    Node(int x) {
//        data = x;
//        next = NULL;
//    }
//};

// I want to write a function which deletes a node
//Node* deleteLast(Node *head) {
//    if (head == NULL) {
//        return NULL;
//    }
//    if (head -> next == NULL) {
//        delete head;
//        return NULL;
//    }
//    Node *curr = head;
//    while (curr -> next -> next != NULL) {
//        curr = curr -> next;
//    }
//    delete curr -> next;
//    curr -> next = NULL;
//    return head;
//}
//
// printing data;
//void printRecursiveLinkedList(Node *head) {
//    // if section is  base condition for linked list
//    if (head == NULL) {
//        return;
//    }
//    cout << head -> data << " ";
//    printRecursiveLinkedList(head -> next);
//}


//int main() {
//    Node *head = new Node(10);
//    head -> next = new Node(20);
//    head -> next -> next = new Node(30);
//    cout << "Before deletion of node\n";
//    printRecursiveLinkedList(head);
//    Node *curr = deleteLast(head);
//    cout << "\n After deletion of node\n";
//    printRecursiveLinkedList(curr);
//}














//Insert at given position in singly linked list
//struct Node {
//    int data;
//    Node *next;
//    Node(int x) {
//        data = x;
//        next = NULL;
//    }
//};


// insert at any position a single linked list element
/*Node* insertPos(Node *head, int pos, int x) {
    Node *temp = new Node(x);
    
    // insert at the front
    if (pos == 1) {
        temp -> next = head;
        return temp;
    }
    
    // inserting at the middle
    Node *curr = head;
    for (int i = 1; i <= pos - 2 && curr != NULL; i++) {
        curr = curr -> next;
    }
    
    // segmentation fault case if pos is beyond maxsize linked list
    if (curr == NULL) {
        return head;
    }
    temp -> next = curr -> next;
    curr -> next = temp;
    return head;
}

// display linked list elements
void printRecursiveLinkedList(Node *head) {
    // if section is  base condition for linked list
    if (head == NULL) {
        return;
    }
    cout << head -> data << " ";
    printRecursiveLinkedList(head -> next);
}


int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    // function call to insert a node at specified position
    Node *newHead = insertPos(head, 4, 35);
    printRecursiveLinkedList(newHead);
    return 0;
}
*/













//struct Node {
//    int data;
//    Node *next;
//    Node(int x) {
//        data = x;
//        next = NULL;
//    }
//};

// search an element in a linked list
/*int searchData(Node *head, int x) {
    int pos = 1;
    Node *curr = head;
    // traversal in a linked list and search compare
    // while condition also handles if linked list is empty and search key not found
    while (curr != NULL) {
        if (curr -> data == x) {
            return pos;
        } else {
            pos++;
            curr = curr -> next;
        }
    }
    return -1;
}*/


// Iterative approach

//int searchDataRecursive(Node *head, int x) {
//    // if linked list is empty
//    if (head == NULL) {
//        return -1;
//    }
//    if (head -> data == x) {//first node is your search key
//        return 1;
//    } else {
//        int res = searchDataRecursive(head -> next, x);
//        if (res == -1) {
//            return -1;
//        } else {
//            return res + 1;
//        }
//    }
//}


//int main() {
//    Node *head = new Node(2);
//    head -> next = new Node(20);
//    head -> next -> next = new Node(30);
//    head -> next -> next -> next = new Node(-1);
//    //cout << searchData(head, -1) <<endl;
//    cout << searchDataRecursive(head, 20);
//    return 0;
//}

