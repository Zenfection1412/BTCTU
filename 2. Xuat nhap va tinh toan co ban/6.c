/*Viết chương trình nhập vào số đo 2 góc của 1 tam giác. In ra số của góc còn lại.
Tổng 3 góc trong tam giác bằng 180 độ.
Đầu vào
Hai số nguyên a b tương ứng với số đo của hai góc tam giác, tính bằng độ (a+b<180).
Đầu ra
In ra số đo góc còn lại của tam giác.
Xem thêm ví dụ trong phần "For example"
Chú ý
Dữ liệu đầu vào luôn hợp lệ.
For example:
Nhập vào
30 60 => 90
60 30 => 90
45 15 => 120*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=180-(a+b);
    printf("%d\n",c);
    return 0;
}