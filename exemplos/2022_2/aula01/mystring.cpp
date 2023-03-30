#include <string.h>

class MyString {
  private:
    char *_data;
    unsigned int _size;
  public:
    MyString(char *data) {
      _data = data;
      _size = strlen(data);
    }
    unsigned int size() {
      return _size;
    }
};