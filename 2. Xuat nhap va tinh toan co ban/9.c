/*Viết chương trình in cho phép nhập vào 1 chữ cái HOA, in ra màn hình chữ in thường của nó.
Tham khảo bảng mã ASCII tại http://www.asciitable.com.
Đầu vào:
1 chữ cái in HOA (A, B, ..., Z).
Đầu ra:
In ra chữ in thường của chữ vừa nhập vào theo mẫu trên.
Xem thêm mẫu bên dưới.
For example:
A => a
H => h
C => c
*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    char c,n;
    scanf("%c",&c);
    n=c+32;
    printf("%c\n",n);
    return 0;
}