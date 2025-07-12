#include <stdio.h>
#include <string.h>

#define MAX 2000

typedef struct {
    char country[75];
    int count;
} Country;

int main() {
    int n, count = 0;
    scanf("%d", &n);
    Country countries[MAX];

    while (n--) {
        char country[75], name[75];
        scanf("%s", country);
        fgets(name, 75, stdin);

        int found = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(countries[i].country, country) == 0) {
                countries[i].count++;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(countries[count].country, country);
            countries[count++].count = 1;
        }
    }

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(countries[i].country, countries[j].country) > 0) {
                Country temp = countries[i];
                countries[i] = countries[j];
                countries[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%s %d\n", countries[i].country, countries[i].count);
    }

    return 0;
}
