#pragma once

#include <cstddef>
#include <map>
#include <string>
#include <vector>

namespace leetcode {
std::vector<int> twoSum(std::vector<int> A, int target);
int fib(int n, std::map<int, int> &memo);
int rod_cutting(int length, std::vector<int> prices, std::map<int, int> &memo);

class Solution {
public:
  int numMagicSquaresInside(std::vector<std::vector<int>> &grid);
  bool containsDuplicate(std::vector<int> &nums);
  bool isAnagram(std::string s, std::string t);
  std::vector<std::vector<std::string>>
  groupAnagrams(std::vector<std::string> &strs);
  std::vector<int> topKFrecuent(std::vector<int> &nums, int k);
  std::vector<int> productExceptSelf(std::vector<int> &nums);
  Solution();
};
} // namespace leetcode

namespace algorithms {
std::vector<int> insertionSort(std::vector<int> A);
std::vector<int> invertedInsertionSort(std::vector<int> A);
void bubbleSort(std::vector<int> &A);
} // namespace algorithms
namespace searchAlgorithms {
bool linearSearch(std::vector<int> A, int key);
bool binarySearch(std::vector<int> A, int key);
} // namespace searchAlgorithms
namespace structures {
class Node {
private:
  std::string val;
  Node *next;
  Node *prev;

public:
  Node();
  Node(std::string val, Node *next, Node *prev);
  ~Node();
  std::string get_value();
  Node *get_next();
  Node *get_prev();
  void set_value(std::string val);
  void set_next(Node *n);
  void set_prev(Node *n);
};

class ArrayList {
private:
  int length;
  std::map<int, Node *> node_map;
  Node *head;
  Node *tail;

public:
  void set_head(Node *n);
  void set_tail(Node *n);
  Node *get_node(int index);
  void insert(int index, Node *n);
};

} // namespace structures
