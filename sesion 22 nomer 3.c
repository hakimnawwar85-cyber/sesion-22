#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][20], int n) {
    char temp[20];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    char data[10][20] = {
        "Ali", "Ani", "Tono", "Bayu", "Amir",
        "Ani", "Budi", "Tini", "Ucok", "Paijo"
    };

    int n = 10;

    printf("Data sebelum sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", data[i]);
    }
    printf("\n");

    bubbleSort(data, n);

    printf("\nData setelah sorting (Ascending):\n");
    for (int i = 0; i < n; i++) {
        printf("%s ", data[i]);
    }
    printf("\n");

    return 0;
}
