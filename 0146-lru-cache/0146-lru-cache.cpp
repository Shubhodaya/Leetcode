class LRUCache {
public:
 class Node{
    public:
    int key;
    int val;
    Node* prev;
    Node* next;

    Node ( int x, int v){
        key=x;
        val=v;
    }
 };

 Node* head = new Node(-1,-1);
 Node* tail = new Node(-1,-1);
 unordered_map<int,Node*>mp;

int cap;

    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
        
    }

    void addNode(Node* node){
        Node* ptr= head->next; 
        head->next=node;
        node->prev=head;
        node->next=ptr;
        ptr->prev=node;
    }

    void deleteNode(Node* node){
         
         Node* nextNode= node->next;
         Node* prevNode= node->prev;
         prevNode->next=nextNode;
         nextNode->prev=prevNode;

    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            Node* resNode = mp[key];
            // int ans = resNode -> val;

            mp.erase(key);
            deleteNode(resNode);
            addNode(resNode);

            mp[key] = head -> next;
            return mp[key]->val;
        }
return -1;
        
    }
    
    void put(int key, int value) {

        if(mp.find(key)!=mp.end()){
            Node* node=mp[key];
            mp.erase(key);
            deleteNode(node);
            node->val=value;
            addNode(node);
            mp[key]=head->next;
            return;
        }else{

        if(mp.size()==cap){
              mp.erase(tail->prev->key);
              deleteNode(tail->prev);
        }
        Node* newNode= new Node(key,value);
 addNode(newNode);
 mp[key]=head->next;

        }
        return;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */