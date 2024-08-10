#include "main.hpp"
#include <iostream>
#include <set>

int is_magic(int r, int c, std::vector<std::vector<int>> &grid) {
  std::set<int> vals{};
  // check valid values
  for (auto i = 0; i < r + 3; ++i) {
    for (auto j = 0; j < c + 3; ++j) {
      std::cout << i << " " << j << "\n";
      if (vals.contains(grid[i][j]) || !(grid[i][j] >= 1 && grid[i][j] <= 9)) {
        return 0;
      }
      vals.insert(grid[i][j]);
    }
  }

  // check horizontal
  for (auto i = 0; i < r + 3; ++i) {
    std::cout << "check horizontal" << "\n";
    if (grid[i][c] + grid[i][c + 1] + grid[i][c + 2] != 15) {
      return 0;
    }
  }

  // check vertical
  for (auto i = 0; i < c + 3; ++i) {
    std::cout << "check vertical" << "\n";
    if (grid[r][i] + grid[r + 1][i] + grid[r + 2][i] != 15) {
      return 0;
    }
  }

  // check diagonal
  if (grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2] != 15) {
    std::cout << "check 1st diagonal" << "\n";
    return 0;
  }

  if (grid[r][c + 2] + grid[r + 1][c + 1] + grid[r + 2][c] != 15) {
    std::cout << "check 2nd diagonal" << "\n";
    return 0;
  }

  return 1;
}

int leetcode::Solution::numMagicSquaresInside(
    std::vector<std::vector<int>> &grid) {
  int ROWS = grid.size();
  int COLS = static_cast<int>(grid[0].size());
  int result{0};

  for (auto r = 0; r < ROWS - 2; ++r) {
    for (auto c = 0; c < COLS - 2; ++c) {
      result += is_magic(r, c, grid);
      std::cout << r << " : " << c << "\n";
    }
  }

  return result;
}
