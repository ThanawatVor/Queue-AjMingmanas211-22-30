#include "node.h"

class Queue {
  NodePtr headPtr, tailPtr;
  int size;

public:
  void enqueue(int,int);
  int dequeue();
  Queue();
  ~Queue(); // dequeue all
};

Queue::Queue(){
  size=0;
  headPtr=NULL;
  tailPtr=NULL;
}

Queue::~Queue(){
 int i;
 int n=size;

  //while(size>0)
  for(i=0;i<n;i++)
    dequeue();
  
}
void Queue::enqueue(int x,int y) {
  // 1.Create
  NodePtr new_node = new NODE(x,y);
 if(new_node){
  if(size==0){
 // 2.1 change head
    headPtr=new_node;
  }
  else{
// 2.2connect tail
      tailPtr->set_next(new_node);
      }
// 3 change tail
   tailPtr=new_node;
// 4. increase size
   ++size;

  }
 else cout<<"Not enough memory"<<endl;

}

int Queue::dequeue() {
  int value;
  NodePtr t;
 if(headPtr){
  
  // 1. Save the node to be deleted
   t=headPtr;
    // 1.5 take the value out to value
    value=t->get_value();
    // 2. move (head)
     headPtr=headPtr->get_next();
     if(size==1) tailPtr=NULL;
     size--;
    // 3. delete
   delete t;
   return value;
   
  }
  return -1;
}