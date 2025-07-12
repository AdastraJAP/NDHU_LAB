#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }


    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int num1 = numbers[i];
            int num2 = numbers[j];

      
            int isPrime1 = (num1 > 1);
            for (int k = 2; k * k <= num1; k++) {
                if (num1 % k == 0) {
                    isPrime1 = 0;
                    break;
                }
            }

          
            int isPrime2 = (num2 > 1);
            for (int k = 2; k * k <= num2; k++) {
                if (num2 % k == 0) {
                    isPrime2 = 0;
                    break;
                }
            }

           
            if (isPrime1 && !isPrime2) {
              
            } else if (!isPrime1 && isPrime2) {
              
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            } else if (isPrime1 && isPrime2) {
                if (num1 < num2) {
                    int temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            } else {
             
                if (num1 > num2) {
                    int temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }
    }


    for (int i = 0; i < N; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}