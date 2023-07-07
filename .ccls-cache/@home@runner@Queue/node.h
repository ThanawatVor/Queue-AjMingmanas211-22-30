#ifndef node_h
#define  node_h

int pricelist[]={100,20,50};
string menu[]={"Ramen","Somtum","KFC"};

class NODE{
	// int data;
  int ord_number,qty;
	NODE *nextPtr;
public:
	NODE(int,int=1);
	~NODE();
  int get_value();
	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(int o,int q){
	ord_number=o;
  qty=q;
	nextPtr=NULL;
}

int NODE::get_value(){
  
  int price;
  if(ord_number>3 ||ord_number<1)
  price= pricelist[ord_number-1]*qty;
  cout<<menu[ord_number-1]<<endl;
 /* switch(ord_number){
    case 1://ramen
       price=100*qty;
           return price;
    case 2://Somtum
      price=20*qty;
  }*/
  
  
     

	return price;

}

NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}

NODE::~NODE(){
	// cout<<"deleting " <<ord_number<<endl;

}


#endif