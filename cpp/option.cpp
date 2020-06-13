#include <iostream>

using namespace std;

struct You06 {
  int64_t i;
  int64_t j;
  int64_t k;
  int64_t l;
  int64_t m;
};

You06 * pp(int64_t i) {
  if (i%2 == 0) {
    auto you06 = new You06{
      .i = i,
      .j = i,
      .k = i,
      .l = i,
      .m = i,
    };
    return you06;
  }
  return nullptr;
}

int main() {
  int64_t sum = 0;
  int64_t i = 1;

  while (i < 20000000000) {
    i += 3;
    auto p = pp(i);
    if (p != nullptr) {
      sum += p->i;
    }
  }

  cout << sum << endl;

  return 0;
}
