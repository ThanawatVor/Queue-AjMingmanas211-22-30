#include <iostream>
using namespace std;
#include "queue.h"

int main(int argc, char *argv[]) {
  Queue q;
  int i, price;
  int customer=1;
  for (i = 1; i < argc; i++) {
    if (argv[i][0] == 'x') {
      price = q.dequeue();
      cout << "Customer no: " << customer++ << endl;
       
      // ask the customer to pay
      if (price > 0) {
        cout << "You have to pay " << price << endl;
        int money, change;
        do {
          if (money == price)
            break;
          cout << ":Cash:";
          cin >> money;
          if (money > price) {
            change = money - price;
      
           cout << "The change is " << change << endl;
          }
        } 
        while(money < price);
           cout << "Thank you" << endl;
      }
      
    } else {
      q.enqueue(atoi(argv[i]), atoi(argv[i + 1]));
      i++;
    }
  }
  cout<<"==================================="<<endl;
  if (!q.isEmpty()) {
        cout << "There is 1 person left in the queue" << endl;
    } else {
        cout << "The queue is empty" << endl;
    }
  //cout << "End of program" << endl;
}



