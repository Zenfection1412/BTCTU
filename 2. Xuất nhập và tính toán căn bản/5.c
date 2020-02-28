/*Viết chương trình tính tổng trở mạch điện 
Rtd=R1nt(R2//R3)
Biết công thức:
    nối tiếp: Rtd=R1+R2+...+Rn
    song song: Rtd=1/R1+1/R2+...+1/RnĐầu vào
Dữ liệu đầu vào được đọc từ bàn phím (stdin).
Dữ liệu gồm 1 dòng duy nhất chứa 3 số nguyên dương R1 R2 R3 (1 <= R1, R2, R3 <= 100), các số cách nhau ít nhất 1 khoảng trắng: giá trị của các điện trở R1, R2, R3.
Đầu ra
In ra màn hình (stdout) tổng trở của mạch điện. Làm tròn kết quả đến 2 số lẻ.
Xem thêm các ví dụ bên dưới.
For example:
Input	Result
1 2 2
2.00
10 5 6
12.73
100 2 3
101.20*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    int r1,r2,r3;
    float rtd,r23;
    scanf("%d %d %d",&r1,&r2,&r3);
    r23=(float)(r2*r3)/(r2+r3);
    rtd=r1+r23;
    printf("%.2f\n",rtd);
    return 0;
}