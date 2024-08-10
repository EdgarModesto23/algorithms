#include "main.hpp"
#include <iostream>
#include <set>

int is_magic(int r, int c, std::vector<std::vector<int>> &grid) {
  std::set<int> vals;
  // check valid values
  int sum = 15;
  for (auto i = r; i < r + 3; ++i) {
    for (auto j = c; j < c + 3; ++j) {
      if (vals.contains(grid[i][j]) || !(1 <= grid[i][j] && grid[i][j] <= 9)) {
        return 0;
      }
      vals.insert(grid[i][j]);
    }
  }

  // check horizontal
  for (auto i = r; i < r + 3; ++i) {
    if (grid[i][c] + grid[i][c + 1] + grid[i][c + 2] != sum) {
      std::cout << "horizoantal" << "\n";
      return 0;
    }
  }

  // check vertical
  for (auto i = c; i < c + 3; ++i) {
    if (grid[r][i] + grid[r + 1][i] + grid[r + 2][i] != sum) {
      std::cout << "vertical" << "\n";
      return 0;
    }
  }

  // check diagonal
  if (grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2] != sum) {
    std::cout << "diagonal 1" << "\n";
    return 0;
  }

  if (grid[r][c + 2] + grid[r + 1][c + 1] + grid[r + 2][c] != sum) {

    std::cout << "diagonal 2" << "\n";
    return 0;
  }

  return 1;
}

int leetcode::Solution::numMagicSquaresInside(
    std::vector<std::vector<int>> &grid) {
  int ROWS = grid.size();
  std::cout << ROWS << "\n";
  int COLS = static_cast<int>(grid[0].size());
  int result{0};

  for (auto r = 0; r < ROWS - 2; ++r) {
    for (auto c = 0; c < COLS - 2; ++c) {
      std::cout << "Current top left: " << r << "\n";
      result += is_magic(r, c, grid);
    }
  }

  return result;
}
