#include "lr.h"

int main(void) {
    int n;

    while (1) {
        printf("ENTER THE lab number (TO SELECT AN ADDITIONAL TASK, ENTER THE LAB NUMBER INCREASED BY 10, PRESS 0 TO EXIT: ");
        scanf("%d", &n);
        getchar();

        if (n == 0) {
            break;
        } else if (n == 1) {
            lr1();
        } else if (n == 2) {
            lr2();
        } else if (n == 3) {
            lr3();
        } else if (n == 4) {
            lr4();
        } else if (n == 11) {
            lr1d();  
        } else if (n == 12) {
            lr2d();
        } else if (n == 13) {
            lr3d();
        } else if (n == 5) {
            lr5();
        } else if (n == 14) {
            lr4d();
        } else if (n == 15) {
            lr5d();
        } else if (n == 6) {
            lr6();
        } else if (n == 16) {
            lr6d();
        } else if (n == 7) {
            lr7();
        } else if (n == 17) {
            printf("Welcome to the additional task for laboratory work number 7. Follow the link https://github.com/NikSer1334/Labi_po_AiP\n");
        } else {
            printf("такой лабы нет ");
        }
    }

    return 0;
}




