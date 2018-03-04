//
// Created by inb on 04/03/18.
//

#include <stdio.h>
#include "foo.h"
#include "bar.h"

int main (int argc, char** argv) {

    int a = get_bar_number(argc);
    int b = make_foo(a, 333);

    printf("result a = %d, b = %d\n", a, b);

    return 0;
}