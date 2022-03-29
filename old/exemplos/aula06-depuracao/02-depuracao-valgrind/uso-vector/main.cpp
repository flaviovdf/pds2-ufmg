#include <vector>

struct QQCoisa {};

int main() {
  std::vector<QQCoisa *> v;
  QQCoisa *o = new QQCoisa();
  v.push_back(o);
}
