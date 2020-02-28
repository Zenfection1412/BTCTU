/*Viết chương trình nhập từ bàn phím 3 giá trị là d, m, y biểu thị là ngày, tháng,năm nào đó; kiểm tra xem các giá trị này có biểu diễn hợp lệ 1 giá trị ngày hay không? Nếu hợp lệ, kết quả là YES, nếu không kết quả là NO.
Ngày hợp lệ: tuỳ theo tháng, năm.  Tháng 2 của năm thường có 28 ngày, năm nhuận có 29 ngày.
Đầu vào:
3 số nguyên mô tả ngày, tháng và năm. 
Đầu ra:
In ra YES nếu ngày tháng năm hợp lệ.
Ngược lại in ra NO.
Gợi ý:
Kiểm tra năm: y≥1
Kiểm tra tháng: 1≤m≤12
Kiểm tra ngày:
xem lại bài tập tính số ngày của tháng để tính số ngày của tháng, lưu vào D.
1≤d≤D 
Nếu cả 3 đều hợp lệ thì ngày tháng năm mới hợp lệ
2 10 2011 => YES
29 2 2008 => YES
29 2 1900 => NO
32 12 2018 => NO
-1 2 2000 => NO
*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    int d,m,y;
    scanf("%d %d %d",&d,&m,&y);
    if(y>=1&&(m<=12&&m>=1)&&(d>=1&&d<=31)){
        if(m==2){
            if(((y%4==0&&y%100!=0)||(y%400==0))&&d<=29){
                printf("YES\n");
            }
            else if(((y%4!=0||y%100==0)&&(y%400!=0))&&d<=28)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
            if(d<=31)
                printf("YES\n");
        }
        else if(m==4||m==6||m==9||m==11)
            if(d<=30)
                printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}