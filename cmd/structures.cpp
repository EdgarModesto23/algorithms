#include <map>
#include <string>
class Node {
private:
  std::string val;
  Node *next;
  Node *prev;

public:
  Node() {
    this->val = "";
    this->next = nullptr;
    this->prev = nullptr;
  }
  Node(std::string val, Node *next, Node *prev) {
    this->val = val;
    this->next = next;
    this->prev = prev;
  }
  ~Node() {
    this->next = nullptr;
    this->prev = nullptr;
  }
  std::string get_value() { return this->val; }
  Node *get_next() { return this->next; }
  Node *get_prev() { return this->prev; }
  void set_value(std::string val) { this->val = val; }
  void set_next(Node *n) { this->next = n; }
  void set_prev(Node *n) { this->prev = n; }
};
class LinkedList {
private:
  int length;
  std::map<int, Node *> node_map;
  Node *head;
  Node *tail;

public:
  void set_head(Node *n) { this->head = n; }
  void set_tail(Node *n) { this->tail = n; }
  Node *get_node(int index) { return this->node_map[index]; }
  void insert(int index, Node *n) {
    if (index > this->length) {
      return;
    }
    if (this->head != nullptr && this->tail != nullptr) {
      this->set_head(n);
      this->set_tail(n);
      this->length = 1;
      this->node_map.insert({1, n});
    }
    Node *prev = this->get_node(index - 1);
    Node *curr = prev->get_next();
    prev->set_next(n);
    n->set_prev(prev);
    curr->set_prev(n);
    n->set_next(curr);
  }
};
