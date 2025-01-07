class node {
public:
    int val;
    node* next;
    node(int data) {
        val = data;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    node* head;
    MyLinkedList() { head = nullptr; }
        int length(){
        int count=0;
        node*temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
    return count;
    }

    int get(int index) {
          int len=length();
        if (head == nullptr)
            return -1;
        else if (len < index)
            return -1;
        else {
            int cnt = 0;
            node* temp = head;
            while (cnt <index) {
                temp = temp->next;
                cnt++;
            }
            if (temp == nullptr)
                return -1;
            return temp->val;
        }
    }

    void addAtHead(int val) {
        node* newNode = new node(val);
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val) {
        node* newNode = new node(val);
        if (head == NULL) {
            head = newNode;
        } else {
            node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void addAtIndex(int k, int value) {
        node* new_node = new node(value);
        if (k == 0) {
            addAtHead(value);
        } else {
            int count = 0;
            node* temp = head;
            while (temp != NULL && count < k - 1) {
                temp = temp->next;
                count++;
            }
            if (temp == NULL)
                return;
            node* right = temp->next;
            temp->next = new_node;
            new_node->next = right;
        }
    }

    void deleteAtIndex(int k) {
        if (head == NULL)
            return;
        else if (k == 0) {
            node* del = head;
            head = head->next;
            delete del;
        } else {
            int count = 0;
            node* temp = head;
            while (count < k - 1) {
                temp = temp->next;
                count++;
            }
            if (temp == NULL || temp->next == NULL)
                return;
            node* del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */