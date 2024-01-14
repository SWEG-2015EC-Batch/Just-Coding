#include <iostream>
using namespace std;

int main() {
  bool friends[5][5] = {
    {false, true, false, true, true},
    {true, false, true, false, true},
    {false, true, false, false, false},
    {true, false, false, false, true},
    {true, true, false, true, false}};

  int pair_count = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (friends[i][j]) {
        pair_count++;
      }
    }
  }

  cout << "There are '" << pair_count << "' pairs of friends in the given data " << endl;

  return 0;
}
