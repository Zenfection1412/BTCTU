/*Viết chương trình nhập vào số nguyên chỉ số đo độ của một góc và cho biết nó thuộc góc phần tư thứ mấy trên đường tròn lượng giác.
Gợi ý
- Nhập vào số đo lượng giác bất kỳ ( x > 0).
- Xác định cung lượng giác theo điều kiện dưới đây:
o    Góc phần tư thứ I: (360*k) <= x < (90 + 360*k)
o    Góc phần tư thứ II: (90 + 360*k) <= x < (180 + 360*k)
o    Góc phần tư thứ III: (180 + 360*k) <= x < (270 + 360*k)
o    Góc phần tư thứ III: (270 + 360*k) <=  x < 360*(k+1)
Ví dụ:
720 => 1
Đầu vào:
1 số nguyên
Đầu ra:
Một số nguyên chỉ góc phần tư lượng giác tương ứng
Xem mẫu đầu ra ở trên
Chú ý:
Bạn có thể an tâm rằng dữ liệu đầu vào luôn hợp lệ
Bạn KHÔNG CẦN phải viết các lệnh printf trước scanf để giới thiệu
*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    int n,k;
    scanf("%d",&n);
    k=n/360;
    if(n<(90+360*k))
        printf("1\n");
    else if (n<180+360*k)
        printf("2\n");
    else if(n<270+360*k)
        printf("3\n");
    else if(n<360*(k+1))
        printf("4\n");
    return 0;
}