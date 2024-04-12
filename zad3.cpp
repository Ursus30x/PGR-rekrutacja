#include <iostream>

class MinStack{
    struct Item{
        int value;
        Item * next;

        // I could make it a integer, but with this 
        // implementation we can have direct reference
        // to a min value and modify it if we want
        Item * minItem;
    };
    Item * topItem;
public:
    MinStack(){
        topItem = nullptr;    
    }
    
    void push(const int &val){
        Item * newTop = new Item;
        newTop->value = val;
        if(topItem == nullptr || topItem->minItem->value > val) newTop->minItem = newTop;
        else newTop->minItem = topItem->minItem;
        newTop->next = topItem; 
        
        topItem = newTop;
    }

    void pop(){
        if(topItem == nullptr)return;
        Item * poped = topItem;
        topItem = topItem->next;
        delete poped;
    }

    int &top(){
        return topItem->value;
    }

    int &getMin(){
        return topItem->minItem->value;
    }

    ~MinStack(){
        if(topItem == nullptr)return;

        Item * temp;
        while(topItem != nullptr){
            temp = topItem->next;
            delete topItem;
            topItem = temp;
        }

        delete topItem;
    }
};

int main(){
    MinStack* StackMin = new MinStack();
    StackMin->push(10);
    StackMin->push(-12);
    StackMin->push(22);  
    std::cout<< StackMin->getMin() << std::endl; // pokaże -12
    StackMin->pop();
    std::cout<< StackMin->top() << std::endl;    // pokaże -12
    std::cout<< StackMin->getMin() << std::endl; // pokaże -12
    
    delete StackMin; //added pointer deletion so i can see if memory doesnt leak in valgrind
}
