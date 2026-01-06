/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
void traversal(Node* node,queue<Node*>&trav){
    if(node==NULL)return;
    trav.push(node);
    traversal(node->child,trav);
    traversal(node->next,trav);
}
    Node* flatten(Node* head) {
        queue<Node*>trav;
        traversal(head,trav);
        Node* dummy=head;
        if(!trav.empty())trav.pop();
        while(!trav.empty()){
            Node* NN=trav.front();
            trav.pop();
            head->next=NN;
            NN->prev=head;
            head->child=NULL;
            head=NN;
        }
        return dummy;
    }
};