/*Viết chương trình nhập từ bàn phím 3 giá trị là dd, mm, yy biểu thị là ngày, tháng, năm nào đó; tính và hiển thị giá trị ngày, tháng, năm của ngày hôm sau.
Xem mẫu đầu ra ở trên và trong phần "For example".
Chú ý:
Dữ liệu đầu vào là ngày hợp lệ. Bạn không cần phải kiểm tra.
Bạn KHÔNG CẦN phải viết các lệnh printf trước scanf để giới thiệu
Gợi ý:
Xem lại bài tập tính số ngày của tháng để tính số ngày của tháng, lưu vào D.
Nếu ngày d < D => tăng ngày lên 1.
Nếu ngày d == D => gán lại ngày = 1, tăng tháng lên. Nếu tháng > 12 => tháng = 1 và tăng năm lên.
For example:
2 10 2011 => 03/10/2011
29 2 2008 => 01/03/2008
31 12 1900 => 01/01/1901
30 11 2018 => 01/12/2018*/
#include <stdio.h>
void checknamnhuan(int d,int m,int y);
int main(int argc, char const *argv[]){
    int ngay,thang,nam;
    scanf("%d %d %d",&ngay,&thang,&nam);
    if (ngay==31&&thang==12){
        ngay=01;thang=01;nam++;
    }
    else if(ngay==31&&thang!=12){
        ngay=01;thang++;
    }
    else if(thang==2){
        if((nam%4==0&&nam%100!=0)||(nam%400==0)){
            if(ngay==29&&thang==12){
                ngay=01;thang=01,nam++;
            }
            else if(ngay==29&&thang!=12){
                ngay=01;thang++;
            }
            else{
                ngay++;
            }
        }
        else{
            if(ngay==28&&thang==12){
                ngay=01;thang=01,nam++;
            }
            else if(ngay==28){
                ngay=01;thang++;
            }
            else{
                ngay++;
            }
        }
    }
    else if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10){
        if(ngay==31){
            ngay=01;thang++;
        }
        else{
            ngay++;
        }
    }
    else if(thang==4||thang==6||thang==9||thang==11){
        if(ngay==30){
            ngay=01;thang++;
        }
        else{
            ngay++;
        }
    }
    printf("%.2d/%.2d/%d\n",ngay,thang,nam);
    return 0;
}