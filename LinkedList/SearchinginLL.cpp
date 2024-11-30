class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        while(head!=NULL){
            if(head->data==key){
                return true;
            }
            head=head->next;
        }
        return false;
    }
};
