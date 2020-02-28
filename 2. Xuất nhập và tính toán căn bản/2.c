/*Viết chương trình cho phép nhập vào một số nguyên dương x. In ký tự có  ký tự có mã ASCII x ra màn hình. Tham khảo bảng mã ASCII tại http://www.asciitable.com.
Ví dụ:
Nhập vào:
65
In ra:
Ky tu co ma ASCII 65 la: 'A'.
Đầu vào:
1 số nguyên x (0 < x < 255).
Đầu ra:
In ra ký tự có mã ASCII x ra màn hình theo mẫu trên.
Chú ý:
Bạn có thể an tâm rằng dữ liệu đầu vào luôn hợp lệ, không cần kiểm tra.
Bạn KHÔNG CẦN phải viết các lệnh printf trước scanf để giới thiệu.
Xem thêm mẫu bên dưới.
For example:
Input	Result
65
Ky tu co ma ASCII 65 la: 'A'.
98
Ky tu co ma ASCII 98 la: 'b'.
59
Ky tu co ma ASCII 59 la: ';'.*/
#include "stdio.h"
int main(int argc, char const *argv[]){
  int x;
  scanf("%d",&x);
  printf("Ky tu co ma ASCII %d la: '%c'.\n",x,x);
  return 0;
}