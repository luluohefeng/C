#include <stdio.h>
//获取n!的位数(本行用于测试Git)
void num_lenth(int n, int *length) {
    *length = 1;
    for (int i = 2; i <= n; i++) {
        *length *= i;
    }
}

void this_num(int length, int d, int *num) {
    *num = d;
    for (int i = 1; i < length; i++) {
        *num = *num * 10 + d;
    }
}

int main(void){

    int d; //这个数仅由一个数字d组成
    int n; //数字位数为n!

    scanf("%d %d", &n, &d);

    //一个超级大的数num，这个数仅由一个数字d组成，
    //数字位数为n!，也就是说这个数是由n阶乘个d组成的
    
    int length;
    num_lenth(n, &length);
    int num;
    this_num(length, d, &num); //超级大的数num成功获取

    //现在小Y想要知道，这个数能否被1，3，5，7，9整除
    //输出若干个数字，表示这个大数能被1，3，5，7，9中的哪些数整除，
    //按从小到大的顺序输出

    if (num % 1 == 0) {
        printf("1 ");
    }   
    if (num % 3 == 0) { 
        printf("3 ");
    }
    if (num % 5 == 0) {
        printf("5 ");
    }
    if (num % 7 == 0) {
        printf("7 ");
    }
    if (num % 9 == 0) {
        printf("9 ");
    }



    return 0;//
    
}