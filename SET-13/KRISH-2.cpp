//WAP to implement Simple queue
//https://www.programiz.com/cpp-programming/queue
#include <iostream>
#include <queue>

using namespace std;

int main() 
{
  queue<string> animals;                             // create a queue of string
  animals.push("Cat");                              // push elements into the queue
  animals.push("Dog");
  cout << "Queue: ";
  while(!animals.empty())                            //print elements of queue loop until queue is empty
  {
    cout << animals.front() << ", ";                // print the element
    animals.pop();                                  // pop element from the queue
  }
  cout << endl;
  return 0;
}

// OUTPUT:
// Queue: Cat, Dog, 