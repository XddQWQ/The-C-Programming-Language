#include <stdio.h>

int main() {
    printf("%d\n", getchar() != EOF);

    return 0;
}
// NOTE: The expression getchar() != EOF is equal with 1 only if input char
// is != with EOF. A useful thing to know is that on Windows the EOF char is
// accessible with CTRL+Z, while on Unix like systems the EOF char is
// accessible with CTRL+D.