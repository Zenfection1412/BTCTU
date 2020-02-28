/*Viết chương trình cho phép nhập vào độ dài 3 cạnh của 1 tam giác. Tính chu vi và diện tích của tam giác đó.Ví dụ:
Nhập vào:
3 4 5
In ra:
Chu vi: 12.00
Dien tich: 6.00
Đầu vào:
3 số thực (float) a b c tương ứng với độ dài 3 cạnh của tam giác. Hai số cách nhau ít nhất 1 khoảng trắng.
Đầu ra:
In ra chu vi và diện tích của hình tam giác theo mẫu như ví dụ trên. Làm tròn đến 2 số lẻ sau dấu chấm thập phân.
Chu vi: xx.xx
Dien tich: yyy.yy
Chú ý:
Bạn có thể an tâm rằng dữ liệu đầu vào luôn hợp lệ
Bạn KHÔNG CẦN phải viết các lệnh printf trước scanf để giới thiệu.
Xem thêm mẫu bên dưới.
Gợi ý:
Sử dụng công thức Herong để tính diện tích tam giác.
S=√(p(p−a)(p−b)(p−c))
Trong đó, a, b, c là chiều dài 3 cạnh của tam giác và p là nửa chu vi.
Sử dụng hàm sqrt() để tính căn bậc 2 của 1 số. Để sử dụng hàm sqrt() cần thêm #include <math.h> vào đầu chương trình.
Sử dụng chuỗi định dạng phù hợp trong hàm printf() để in 2 số lẻ.
For example:
Input	Result
3 4 5
Chu vi: 12.00
Dien tich: 6.00
2.5 5 4.2
Chu vi: 11.70
Dien tich: 5.24
6 10 8
Chu vi: 24.00
Dien tich: 24.00*/
#include "stdio.h"
#include <math.h>
int main(int argc, char const *argv[]){
    float a,b,c,p,cv,dt;
    scanf("%f %f %f",&a,&b,&c);
    cv=a+b+c;
    p=cv/2;
    dt=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Chu vi: %.2f\n",cv);
    printf("Dien tich: %.2f\n",dt);
    return 0;
}