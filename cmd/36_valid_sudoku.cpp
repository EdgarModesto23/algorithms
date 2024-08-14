#include "main.hpp"
#include <iostream>
#include <set>
#include <vector>

bool checkHorizontal(std::vector<std::vector<char>> &board) {
  for (int i = 0; i < board.size(); ++i) {
    std::set<char> lookup{};
    for (int j = 0; j < board[i].size(); ++j) {
      if (board[j][i] == '.') {
        continue;
      }
      if (lookup.contains(board[j][i])) {
        return false;
      }
      lookup.insert(board[j][i]);
    }
  }
  return true;
}

bool checkVertical(std::vector<std::vector<char>> &board) {
  for (int i = 0; i < board.size(); ++i) {
    std::set<char> lookup{};
    for (int j = 0; j < board[i].size(); ++j) {
      if (board[i][j] == '.') {
        continue;
      }
      if (lookup.contains(board[i][j])) {
        return false;
      }
      lookup.insert(board[i][j]);
    }
  }
  return true;
}

bool leetcode::Solution::isValidSudoku(std::vector<std::vector<char>> &board) {
  bool result{true};

  result = checkHorizontal(board);
  if (!result) {
    return result;
  }
  result = checkVertical(board);
  if (!result) {
    return result;
  }
  for (int i = 0; i < board.size(); i += 3) {
    for (int j = 0; j < board[i].size(); j += 3) {
      std::vector<std::vector<char>> sub_board{};
      int vertical_prefix{i};
      int horizontal_prefix{j};
      for (auto k = 0; k < 3; ++k) {
        std::vector<char> sub_vector(
            board[vertical_prefix].begin() + horizontal_prefix,
            board[vertical_prefix].begin() + (horizontal_prefix + 3));
        sub_board.push_back(sub_vector);
        ++vertical_prefix;
      }
      std::set<char> sub_lookup{};
      for (int val = 0; val < sub_board.size(); ++val) {
        for (auto num : sub_board[val]) {
          if (num == '.') {
            continue;
          }
          if (sub_lookup.contains(num)) {
            return false;
          }
          sub_lookup.insert(num);
        }
      }
    }
  }

  return result;
}
