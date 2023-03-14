#include <stdio.h>

int main() {
    int arr[10000];
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_num = arr[0];

    // Rastgele 10000 say�l�k bir dizi olu�turma
    srand(time(0));
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;
    }

    // En b�y�k say�y� bulma
    clock_t start_time = clock();
    for(int i = 1; i < n; i++) {
        if(arr[i] > max_num) {
            max_num = arr[i];
        }
    }
    clock_t end_time = clock();

    // Sonu�lar� yazd�rma
    printf("En b�y�k say�: %d\n", max_num);
    printf("�al��ma s�resi: %f saniye\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

    return 0;
}
//BruteForce algoritmas�, C dilinde de a�a��daki �ekilde uygulanabilir:


#include <stdio.h>

int main() {
    int arr[10000];
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_num = arr[0];

    // Rastgele 10000 say�l�k bir dizi olu�turma
    srand(time(0));
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;
    }

    // En b�y�k say�y� bulma
    clock_t start_time = clock();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > max_num) {
                max_num = arr[j];
            }
        }
    }
    clock_t end_time = clock();

    // Sonu�lar� yazd�rma
    printf("En b�y�k say�: %d\n", max_num);
    printf("�al��ma s�resi: %f saniye\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

    return 0;
}
