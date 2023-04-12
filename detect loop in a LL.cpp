
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
    int flag;
};
 
void push(struct Node** head_ref, int new_data){
    struct Node* new_node = new Node;
    new_node->data = new_data;
    new_node->flag = 0;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
bool detectLoop(struct Node* h)
{
    while (h != NULL) {
        if (h->flag == 1)
            return true;
        h->flag = 1; 
        h = h->next;
    }
 
    return false;
}
 
