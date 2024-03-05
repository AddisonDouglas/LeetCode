struct Node 
{
    int value;
    Node* next;
    int minval;
};
class MinStack {
public:

    MinStack() 
    {
        top_node_ = nullptr;
        
    }
    
    void push(int val) 
    {
        if(top_node_ == nullptr)
        {
            Node* push = new Node();
            push->value = val;
            push->next = nullptr;
            push->minval = val;
            top_node_ = push;

        }
        else
        {
            Node* push = new Node();
            push->value = val;
            push->next = top_node_;
            if(val < top_node_->minval)
            {
                push->minval = val;
            }
            else
            {
                push->minval = top_node_->minval;
            }
            top_node_ = push;
        }
    }
    
    void pop()
    {
        Node* pop = top_node_;
        top_node_ = top_node_->next;
        delete (pop);
        
    }
    
    int top() 
    {
        return top_node_->value;
        
    }
    
    int getMin() 
    {
        return top_node_->minval;
    }

    private:
    Node* top_node_;
};

