#include <stdio.h>

int hitungLangkah(int n) {
    if (n == 1) {
        return 0;
    }
    
    else if (n % 2 == 0) {
        return 1 + hitungLangkah(n / 2);
    } 
    else {
        return 1 + hitungLangkah(3 * n + 1);
    }
}

int main() {
    int T;
    scanf(" %d", &T);
    int n;
    for (int i=0;i<T; i++) {
        scanf("%d", &n);
        if (n <= 0) {
        printf("Masukkan bilangan bulat positif lebih dari 0.\n");
        } else {
            int langkah = hitungLangkah(n);
            printf("Langkah %d\n", langkah);
        }
    }
    return 0;
}
