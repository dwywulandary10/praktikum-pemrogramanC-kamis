#include <stdio.h>

int main() {
    int X[4] = {12, 2, 7, 10};
    int Y[6] = {15, 4, 16, 20, 25, 30};
    int Z[10];

    int indexZ = 0;

    // Menggabungkan nilai kurang dari 10 dari array X ke array Z
    for (int i = 0; i < 4; ++i) {
        if (X[i] < 10) {
            Z[indexZ] = X[i];
            ++indexZ;
        }
    }

    // Menggabungkan nilai di lokasi ganjil dari array Y ke array Z
    for (int i = 1; i < 6; i += 2) {
        Z[indexZ] = Y[i];
        ++indexZ;
    }

    // Menampilkan isi array Z
    printf("Z ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", Z[i]);
    }

    return 0;
}