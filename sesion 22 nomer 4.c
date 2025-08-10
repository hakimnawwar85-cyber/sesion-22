#include <stdio.h>
#include <string.h>

struct mhs {
    int nim;
    float gpa;
    char name[20];
};

void selectionSort(struct mhs arr[], int n) {
    int minIndex;
    struct mhs temp;

    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            // Urutkan berdasarkan GPA dulu
            if (arr[j].gpa < arr[minIndex].gpa) {
                minIndex = j;
            }
            // Jika GPA sama, urutkan berdasarkan nama
            else if (arr[j].gpa == arr[minIndex].gpa &&
                     strcmp(arr[j].name, arr[minIndex].name) < 0) {
                minIndex = j;
            }
        }
        // Tukar elemen
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    struct mhs data[10] = {
        {101, 3.5, "Budi"},
        {102, 3.8, "Ani"},
        {103, 3.5, "Ali"},
        {104, 3.2, "Tono"},
        {105, 3.9, "Bayu"},
        {106, 3.5, "Amir"},
        {107, 3.8, "Tini"},
        {108, 3.2, "Ucok"},
        {109, 3.9, "Paijo"},
        {110, 3.8, "Susi"}
    };

    int n = 10;

    printf("Data sebelum sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2f\t%s\n", data[i].nim, data[i].gpa, data[i].name);
    }

    selectionSort(data, n);

    printf("\nData setelah sorting (Ascending GPA, lalu Nama):\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2f\t%s\n", data[i].nim, data[i].gpa, data[i].name);
    }

    return 0;
}
