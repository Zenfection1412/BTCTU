/*Phương trình bậc nhất là phương trình có dạng:
ax + b = 0
Đầu vào:
2 số thực (float) a b. 
Đầu ra:
Nếu phương trình vô nghiệm, in ra VO NGHIEM
Nếu phương trình vô số nghiệm, in ra VO SO NGHIEM
Nếu phương trình có 1 nghiệm duy nhất, in ra x = yyyy.d, làm tròn số đến 1 số lẻ.
Chú ý:
Bạn có thể an tâm rằng dữ liệu đầu vào luôn hợp lệ
Bạn KHÔNG CẦN phải viết các lệnh printf trước scanf để giới thiệu
For example:
0 0 => VO SO NGHIEM
0 5.4 => VO NGHIEM
2 4 => x = -2.0*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    float a,b;
    scanf("%f %f",&a,&b);
    if(a==0){
        if(b==0)
            printf("VO SO NGHIEM\n");
        else
            printf("VO NGHIEM\n");
    }
    else
        printf("x = %.1f\n",-b/a);
    return 0;
}