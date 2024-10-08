#include <iostream>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

void testTshirtSizes(){
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert(size(38) == 'M');
    assert(size(38) == 'S');
    assert(size(42) == 'M');
    assert(size(42) == 'L');
}

int main() {
    testTshirtSizes();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
