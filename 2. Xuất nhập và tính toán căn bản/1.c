/*Viết chương trình tính chu vi hình chữ nhật với chiều dài và chiều rộng được nhập từ bàn phím.
Đầu vào:
2 số nguyên d, r mô tả chiều dài và chiều rộng của hình chữ nhật. Hai số cách nhau ít nhất 1 khoảng trắng.
Đầu ra:
n rIa chu vi của hình chữ nhật theo mẫu
Chu vi: x
Với x là diện tích của hình chữ nhật.
Chú ý:
Bạn có thể an tâm rằng dữ liệu đầu vào luôn hợp lệ
Bạn KHÔNG CẦN phải viết các lệnh printf trước scanf để giới thiệu.
Xem mẫu bên dưới.
For example:
Input	Result
10 4
Chu vi: 28*/
#include "stdio.h"
int main(int argc, char const *argv[]){
  int d,r,x;
  scanf("%d %d",&d,&r);
  x=(d+r)*2;
  printf("Chu vi%d\n",x);
  return 0;
}