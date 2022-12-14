#include <iostream>
using namespace std;


struct Node {
  string name;
  string address;
  string phone;

  Node* next;
  Node* prev;
};

int main() {
  Node* head = nullptr;

  Node* n1 = new Node{"John", "Jl.Raya", "08964416464"};
  Node* n2 = new Node{"Jane", "Jl.Asia", "08125464654"};
  Node* n3 = new Node{"Bob", "Jl.IR", "081552315454"};

  n1->prev = nullptr;
  n1->next = n2;
  n2->prev = n1;
  n2->next = n3;
  n3->prev = n2;
  n3->next = nullptr;

  head = n1;

  Node* curr = head;
  while (curr != nullptr) {
    cout << curr->name << ": " << curr->address << ", " << curr->phone << endl;
    curr = curr->next;
  }

  cout << "\nPress ENTER to exit the program." << endl;
  getchar();
}
