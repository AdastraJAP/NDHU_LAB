#include <string.h>
#include <ctype.h>

struct Number {
    char digit[1024];
    int base;
};

struct Number convertToDec(struct Number num)
{
    struct Number dec;
    dec.base = 10;
    long long decimalValue = 0;

    for (int i = 0; num.digit[i] != '\0'; i++) {
        int value;

        if (isdigit(num.digit[i])) {
            value = num.digit[i] - '0';
        } else {
            value = toupper(num.digit[i]) - 'A' + 10;
        }

        if (value >= num.base) {
            strcpy(dec.digit, "Error");
            return dec;
        }

        decimalValue = decimalValue * num.base + value;
    }

    sprintf(dec.digit, "%lld", decimalValue);
    return dec;
}
