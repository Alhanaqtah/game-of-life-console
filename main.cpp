#include <iostream>
#include "Field.h"
#include <unistd.h>

int main() {
    Field f(8, 8);

    while (true) {
        system("clear");
        f.update();
        f.draw();
        sleep(1);
    }

    f.~Field();

    return 0;
}
