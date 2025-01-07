class MyCircularQueue {
public:
    vector<int> v;
    int len=0, front=0;
    int n;
    MyCircularQueue(int k) {
        v.resize(k);
        n=k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        v[(front+len)%n]=value;
        len++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        front=(front+1)%n;
        len--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return v[front];
     }
    
    int Rear() {
        if(isEmpty()) return -1;
        return v[(front+len-1)%n];
    }
    
    bool isEmpty() {
        return len==0;
    }
    
    bool isFull() {
        return len==n;
    }
};