#include <iostream>
#include <assert.h>
#include <string>

char size(int cms) {
    std::string sizeName = "Invalid";
    if(cms >= 34 && cms < 38) {
        sizeName = "S";
    } else if(cms >= 38 && cms < 42) {
        sizeName = "M";
    } else if(cms >= 42) {
        sizeName = "L";
    }
    return "Invalid";
}

void testTshirtSizes(){
    assert(size(34) == "S");
    assert(size(37) == "S");
    assert(size(38) == "M");
    assert(size(40) == "M");
    assert(size(42) == "L");
    assert(size(43) == "L");
    assert(size(5) == "Invalid");
}

int main() {
    testTshirtSizes();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
