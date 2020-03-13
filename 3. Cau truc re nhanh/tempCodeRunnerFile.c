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