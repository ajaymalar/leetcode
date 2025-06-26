class LRUCache {
public:
class node
{
public:
int key,val;
node*next;
node*prev;
node(int keys,int vals)
{
    key=keys;
    val=vals;
}
};
node*head=new node(-1,-1);
node*tail=new node(-1,-1);
int c;
unordered_map<int,node*>mpp;
    LRUCache(int capacity) {
         c=capacity;
        head->next=tail;
        tail->prev=head;
    }
    void addnode(node *newnode)
    {
        node*temp=head->next;
        newnode->next=temp;
        newnode->prev=head;
        head->next=newnode;
        temp->prev=newnode;
    }
    void deletenode(node*delnode)
    {
        node*dnext=delnode->next;
        node*dprev=delnode->prev;
        dnext->prev=dprev;
        dprev->next=dnext;
    }
    int get(int key) {
        if(mpp.find(key)!=mpp.end())
        {
            node*res=mpp[key];
            int r=res->val;
            mpp.erase(key);
            deletenode(res);
            addnode(res);
            mpp[key]=head->next;
            return r;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end())
        {
            node*n=mpp[key];
            mpp.erase(key);
            deletenode(n);
        }
        if(mpp.size()==c)
        {
            mpp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key,value));
        mpp[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */