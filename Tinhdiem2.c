#include <stdio.h>

struct diemphay
{
    double diemtbhk1; 
    double diemtbhk2;
}; 
int main()
{
    struct diemphay Toan, Vatli, Hoahoc, Sinhhoc, Tinhoc, Nguvan, Lichsu, Diali, Ngoaingu, Congnghe, GDQP, GDCD;
    
    double diemtbtoanlop10;
    printf("Diem trung binh Toan hoc ki 1 cua ban la: ");
    scanf("%lf", &Toan.diemtbhk1);
    printf("Diem trung binh Toan hoc ki 2 cua ban la: ");
    scanf("%lf", &Toan.diemtbhk2);
    diemtbtoanlop10 = (Toan.diemtbhk1+Toan.diemtbhk2*2)/3;
    
    printf("\nDiem trung binh Toan ca nam cua ban la: %.1f", diemtbtoanlop10);

    printf("\n----------------------\n");

    double diemtblilop10;
    printf("Diem trung binh Li hoc ki 1 cua ban la: ");
    scanf("%lf", &Vatli.diemtbhk1);
    printf("Diem trung binh Li hoc ki 2 cua ban la: ");
    scanf("%lf", &Vatli.diemtbhk2);
    diemtblilop10 = (Vatli.diemtbhk1+Vatli.diemtbhk2*2)/3;
    
    printf("\nDiem trung binh Li ca nam cua ban la: %.1f", diemtblilop10);

    printf("\n----------------------\n");

    double diemtbhoalop10;
    printf("Diem trung binh Hoa hoc ki 1 cua ban la: ");
    scanf("%lf", &Hoahoc.diemtbhk1);
    printf("Diem trung binh Hoa hoc ki 2 cua ban la: ");
    scanf("%lf", &Hoahoc.diemtbhk2);
    diemtbhoalop10 = (Hoahoc.diemtbhk1+Hoahoc.diemtbhk2*2)/3;
    
    printf("\nDiem trung binh ca Hoa nam cua ban la: %.1f", diemtbhoalop10);

    printf("\n----------------------\n");

    double diemtbsinhlop10;
    printf("Diem trung binh Sinh hoc ki 1 cua ban la: ");
    scanf("%lf", &Sinhhoc.diemtbhk1);
    printf("Diem trung binh Sinh hoc ki 2 cua ban la: ");
    scanf("%lf", &Sinhhoc.diemtbhk2);
    diemtbsinhlop10 = (Sinhhoc.diemtbhk1+Sinhhoc.diemtbhk2*2)/3;
    
    printf("\nDiem trung binh Sinh ca nam cua ban la: %.1f", diemtbsinhlop10);

    printf("\n----------------------\n");

    double diemtbtinlop10;
    printf("Diem trung binh Tin hoc ki 1 cua ban la: ");
    scanf("%lf", &Tinhoc.diemtbhk1);
    printf("Diem trung binh Tin hoc ki 2 cua ban la: ");
    scanf("%lf", &Tinhoc.diemtbhk2);
    diemtbtinlop10 = (Tinhoc.diemtbhk1+Tinhoc.diemtbhk2*2)/3;
    
    printf("\nDiem trung binh Tin ca nam cua ban la: %.1f", diemtbtinlop10);

    printf("\n----------------------\n");

    double diemtbvanlop10;
    printf("Diem trung binh Van hoc ki 1 cua ban la: ");
    scanf("%lf", &Nguvan.diemtbhk1);
    printf("Diem trung binh Van hoc ki 2 cua ban la: ");
    scanf("%lf", &Nguvan.diemtbhk2);
    diemtbvanlop10 = (Nguvan.diemtbhk1+Nguvan.diemtbhk2*2)/3;
    
    printf("\nDiem trung binh Van ca nam cua ban la: %.1f", diemtbvanlop10);

   printf("\n----------------------\n");

    double diemtbsulop10;
    printf("Diem trung binh Su hoc ki 1 cua ban la: ");
    scanf("%lf", &Lichsu.diemtbhk1);
    printf("Diem trung binh Su hoc ki 2 cua ban la: ");
    scanf("%lf", &Lichsu.diemtbhk2);
    diemtbsulop10 = (Lichsu.diemtbhk1+Lichsu.diemtbhk2*2)/3;
    
    printf("\nDiem trung binh Su ca nam cua ban la: %.1f", diemtbsulop10);

   printf("\n----------------------\n");

    double diemtbdialop10;
    printf("Diem trung binh Dia hoc ki 1 cua ban la: ");
    scanf("%lf", &Diali.diemtbhk1);
    printf("Diem trung binh Dia hoc ki 2 cua ban la: ");
    scanf("%lf", &Diali.diemtbhk2);
    diemtbdialop10 = (Diali.diemtbhk1+Diali.diemtbhk2*2)/3;
    
    printf("\nDiem trung binh Dia ca nam cua ban la: %.1f", diemtbdialop10);

   printf("\n----------------------\n");

    double diemtbanhlop10;
    printf("Diem trung binh Anh hoc ki 1 cua ban la: ");
    scanf("%lf", &Ngoaingu.diemtbhk1);
    printf("Diem trung binh Anh hoc ki 2 cua ban la: ");
    scanf("%lf", &Ngoaingu.diemtbhk2);
    diemtbanhlop10 = (Ngoaingu.diemtbhk1+Ngoaingu.diemtbhk2*2)/3;
    
    printf("\nDiem trung binh Anh ca nam cua ban la: %.1f", diemtbanhlop10);

    printf("\n----------------------\n");

    double diemtbcongnghelop10;
    printf("Diem trung binh Cong nghe hoc ki 1 cua ban la: ");
    scanf("%lf", &Congnghe.diemtbhk1);
    printf("Diem trung binh Cong nghe hoc ki 2 cua ban la: ");
    scanf("%lf", &Congnghe.diemtbhk2);
    diemtbcongnghelop10 = (Congnghe.diemtbhk1+Congnghe.diemtbhk2*2)/3;
    
    printf("\nDiem trung binh Cong nghe ca nam cua ban la: %.1f", diemtbcongnghelop10);

    printf("\n----------------------\n");

    double diemtbgdqplop10;
    printf("Diem trung binh GDQP hoc ki 1 cua ban la: ");
    scanf("%lf", &GDQP.diemtbhk1);
    printf("Diem trung binh GDQP hoc ki 2 cua ban la: ");
    scanf("%lf", &GDQP.diemtbhk2);
    diemtbgdqplop10 = (GDQP.diemtbhk1+GDQP.diemtbhk2*2)/3;
    
    printf("\nDiem trung binh GDQP ca nam cua ban la: %.1f", diemtbgdqplop10);

    printf("\n----------------------\n");

    double diemtbgdcdlop10;
    printf("Diem trung binh GDCD hoc ki 1 cua ban la: ");
    scanf("%lf", &GDCD.diemtbhk1);
    printf("Diem trung binh GDCD hoc ki 2 cua ban la: ");
    scanf("%lf", &GDCD.diemtbhk2);
    diemtbgdcdlop10 = (GDCD.diemtbhk1+GDCD.diemtbhk2*2)/3;
    
    printf("\nDiem trung binh GDCD ca nam cua ban la: %.1f", diemtbgdcdlop10);

    printf("\n----------------------\n");

    double diemtrungbinhcanam;
    diemtrungbinhcanam = (diemtbtoanlop10 + diemtblilop10 + diemtbhoalop10 + diemtbsinhlop10 + diemtbtinlop10 + diemtbvanlop10 + diemtbsulop10 + diemtbdialop10 + diemtbanhlop10 + diemtbcongnghelop10 + diemtbgdqplop10 + diemtbgdcdlop10)/12;
    printf("Diem trung binh cac mon ca nam cua ban la: %.1f", diemtrungbinhcanam);
    
    return (0);
}
