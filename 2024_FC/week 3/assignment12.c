#include <stdio.h>

int main() {
    int num;

    while (1) {
        
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        printf("%d = ", num);

        
        int first = 1; 
        while (num % 2 == 0) {
            if (!first) {
                printf(" * ");
            }
            printf("2");
            num /= 2;
            first = 0;
        }

        
        for (int i = 3; i * i <= num; i += 2) {
            while (num % i == 0) {
                if (!first) {
                    printf(" * ");
                }
                printf("%d", i);
                num /= i;
                first = 0;
            }
        }

        
        if (num > 1) {
            if (!first) {
                printf(" * ");
            }
            printf("%d", num);
        }

        printf("\n");
    }

    return 0;
}