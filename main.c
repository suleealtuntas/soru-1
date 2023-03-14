#include <stdio.h>

int main() {
    int arr[10000];
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_num = arr[0];

    // Rastgele 10000 sayýlýk bir dizi oluþturma
    srand(time(0));
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;
    }

    // En büyük sayýyý bulma
    clock_t start_time = clock();
    for(int i = 1; i < n; i++) {
        if(arr[i] > max_num) {
            max_num = arr[i];
        }
    }
    clock_t end_time = clock();

    // Sonuçlarý yazdýrma
    printf("En büyük sayý: %d\n", max_num);
    printf("Çalýþma süresi: %f saniye\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

    return 0;
}
//BruteForce algoritmasý, C dilinde de aþaðýdaki þekilde uygulanabilir:


#include <stdio.h>

int main() {
    int arr[10000];
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_num = arr[0];

    // Rastgele 10000 sayýlýk bir dizi oluþturma
    srand(time(0));
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;
    }

    // En büyük sayýyý bulma
    clock_t start_time = clock();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > max_num) {
                max_num = arr[j];
            }
        }
    }
    clock_t end_time = clock();

    // Sonuçlarý yazdýrma
    printf("En büyük sayý: %d\n", max_num);
    printf("Çalýþma süresi: %f saniye\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

    return 0;
}
