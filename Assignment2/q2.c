#include <stdio.h>

int main() {
    int p_pen = 10, p_pencil = 5, p_sharpener = 2;
    int n_pen = 2, n_pencil = 3, n_sharpener = 1;

    int total_of_pen = n_pen * p_pen;
    int total_of_pencil = n_pencil * p_pencil;
    int total_of_sharpener = n_sharpener * p_sharpener;

    int priceSum = p_pen + p_pencil + p_sharpener;
    int totalPrice = total_of_pen + total_of_pencil + total_of_sharpener;

    printf("\t\t******  LIST OF ITEMS  ******\n");
    printf("Item\t\t\tPrice (Rs.)\t\tTotal (Rs.)\n");
    printf("Pen\t\t\t%d\t\t\t%d\n", p_pen, total_of_pen);
    printf("Pencil\t\t\t%d\t\t\t%d\n", p_pencil, total_of_pencil);
    printf("Sharpener\t\t%d\t\t\t%d\n", p_sharpener, total_of_sharpener);
    printf("Grand Total (Rs.)\t%d\t\t\t%d\n", priceSum, totalPrice);

    return 0;
}