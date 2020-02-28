/*Viết chương trình cho phép nhập vào một ký tự và in mã ASCII của nó ra màn hình. Tham khảo bảng mã ASCII tại http://www.asciitable.com.
Ví dụ:
Nhập vào:
A
In ra:
Ma ASCII cua 'A' la 65.
Đầu vào:
1 ký tự (char).
Đầu ra:
In ra mã ASCII của ký tự vừa nhập theo mẫu trên.
Chú ý:
Bạn có thể an tâm rằng dữ liệu đầu vào luôn hợp lệ
Bạn KHÔNG CẦN phải viết các lệnh printf trước scanf để giới thiệu.
Xem thêm mẫu bên dưới.
For example:
Input	Result
A
Ma ASCII cua 'A' la 65.
b
Ma ASCII cua 'b' la 98.
;
Ma ASCII cua ';' la 59.*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    char n;
    scanf("%c",&n);
    printf("Ma ASCII cua '%c' la %d.\n",n,n);
    return 0;
}