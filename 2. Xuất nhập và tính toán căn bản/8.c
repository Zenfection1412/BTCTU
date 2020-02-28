/*Viết chương trình cho phép nhập vào giá trị nhiệt độ Celsius (°C). Tính giá trị nhiệt độ Fahrenheit (°F) tương ứng.
Công thức chuyển đổi giữa 2 giá trị này là:
ToF=(9/5)*ToC+32
Ví dụ:
Nhập vào:
37
In ra:
37 do C = 98.6 do F
Đầu vào:
1 số nguyên (int) cho biết giá trị nhiệt độ Celcius.
Đầu ra:
In ra giá trị nhiệt độ Fahrenheit (°F) theo mẫu như trên. Làm tròn đến 1 số lẻ sau dấu chấm thập phân.
Chú ý:
Bạn có thể an tâm rằng dữ liệu đầu vào luôn hợp lệ
Bạn KHÔNG CẦN phải viết các lệnh printf trước scanf để giới thiệu.
Xem thêm mẫu bên dưới.
*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    int c;
    float f;
    scanf("%d",&c);
    f=(9.0/5)*c+32;
    printf("%d do C = %.1f do F\n",c,f);
    return 0;
}