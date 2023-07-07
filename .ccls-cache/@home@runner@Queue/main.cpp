#include <iostream>
using namespace std;
#include "queue.h"

int main(int argc, char *argv[]) {
  Queue q;
  int i, price;
  for (i = 1; i < argc; i++) {
    if (argv[i][0] == 'x') {
      price = q.dequeue();
      // ask the customer to pay
      if (price > 0) {
        cout << "You have to pay " << price << endl;
        int money, change;
        do {
          cout << "Cash:";
          cin >> money;
        } while (money >= price);
        cout << "Thank you" << endl;
        if (money > price)
         cout << "The change is" << money - price << endl;
      }
    } else {
      q.enqueue(atoi(argv[i]), atoi(argv[i + 1]));
      i++;
    }
  }

  cout << "End of program" << endl;
}
