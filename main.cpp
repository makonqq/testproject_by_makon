#include "inout.h"
#include <algorithm>

int main() {
    vector<int> vec;
    read(vec);
    sort(vec.begin(), vec.end());
    print(vec);
    return 0;
}
