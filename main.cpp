#include "ThuVienCuaToi.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char **argv)
{
	BenhNhan *DSBN;
	int soLuong = 0;
    int chon_1;
    do
    {
        textcolor(15);
        printf("\t\t\t\t\t\t   QUAN LI BENH VIEN\n");
        printf("\t\t\t\t-----------------------------------------------------------\n");
        printf("\t\t\t\t|\t%-50s%s\n", "0. Thoat", "|");
        printf("\t\t\t\t|\t%-50s%s\n", "1. Nhap danh sach benh nhan", "|");
        printf("\t\t\t\t|\t%-50s%s\n", "2. Xuat danh sach benh nhan", "|");
        printf("\t\t\t\t|\t%-50s%s\n", "3. Xuat thong tin vaccine cua DSBN", "|");
        printf("\t\t\t\t|\t%-50s%s\n", "4. Them", "|");
        printf("\t\t\t\t|\t%-50s%s\n", "5. Xoa", "|");
        printf("\t\t\t\t|\t%-50s%s\n", "6. Sap xep", "|");
        printf("\t\t\t\t|\t%-50s%s\n", "7. Tim kiem theo ten", "|");
        printf("\t\t\t\t|\t%-50s%s\n", "8. Tien vien phi cua DSBN den hom nay", "|");
        printf("\t\t\t\t|\t%-50s%s\n", "10. Xoa man hinh", "|");
        printf("\t\t\t\t-----------------------------------------------------------\n");
        printf("\t\t\t\t-\t%-48s", "Nhap lua chon cua ban: ");
        scanf("%d", &chon_1);
        switch (chon_1)
        {
        case 0:
        {
            break;
        }
        case 1:
        {
            printf("Nhap so luong benh nhan: ");
            scanf("%d", &soLuong);
            DSBN = (BenhNhan *)malloc((soLuong) * sizeof(BenhNhan));
            nhapDanhSachBenhNhan(DSBN, soLuong);
            break;
        }
        case 2:
        {
        	if (soLuong < 1)
            {
                XoaManHinh();
                textcolor(4);
                printf("\t\t\t\t\t%-50s\n", "DANH SACH BENH NHAN DANG TRONG");
                system("pause");
                XoaManHinh();
                break;
            }
        	XoaManHinh();
            xuatDanhSachBenhNhan(DSBN, soLuong);
            textcolor(15);
            printf("\n");
            system("pause");
            XoaManHinh();
            break;
        }
        case 3:
        {
        	if (soLuong < 1)
            {
                XoaManHinh();
                textcolor(4);
                printf("\t\t\t\t\t%-50s\n", "DANH SACH VACCINE DANG TRONG");
                system("pause");
                XoaManHinh();
                break;
            }
        	XoaManHinh();
            xuatDanhSachVaccine(DSBN, soLuong);
            textcolor(15);
            printf("\n");
            system("pause");
            XoaManHinh();
            break;
        }
        case 4:
        {
            int chon_2;
            XoaManHinh();
            do
            {
                textcolor(15);
                printf("\t\t\t\t-----------------------------------------------------------\n");
                printf("\t\t\t\t|\t%-50s%s\n", "0. Tro ve", "|");
                printf("\t\t\t\t|\t%-50s%s\n", "1. Them vao dau", "|");
                printf("\t\t\t\t|\t%-50s%s\n", "2. Them vao cuoi", "|");
                printf("\t\t\t\t|\t%-50s%s\n", "3. Them vao bat ky", "|");
                printf("\t\t\t\t-----------------------------------------------------------\n");
                printf("\t\t\t\t-\t%-48s", "Nhap lua chon cua ban: ");
                scanf("%d", &chon_2);
                switch (chon_2)
                {
                case 0:
                {
                    XoaManHinh();
                    break;
                }
                case 1:
                {
                    if (soLuong == 0)
                    {
                        DSBN = (BenhNhan *)malloc(sizeof(BenhNhan));
                    }
                    else
                    {
                        realloc(DSBN, (soLuong + 1) * sizeof(BenhNhan));
                    }
                    themDau(DSBN, soLuong);
                    break;
                }
                case 2:
                {
                    if (soLuong == 0)
                    {
                        DSBN = (BenhNhan *)malloc(sizeof(BenhNhan));
                    }
                    else
                    {
                        realloc(DSBN, (soLuong + 1) * sizeof(BenhNhan));
                    }
                    themCuoi(DSBN, soLuong);
                    break;
                }
                case 3:
                {
                    if (soLuong == 0)
                    {
                        DSBN = (BenhNhan *)malloc(sizeof(BenhNhan));
                    }
                    else
                    {
                        realloc(DSBN, (soLuong + 1) * sizeof(BenhNhan));
                    }
                    themBatKy(DSBN, soLuong);
                    break;
                }
                default:
                {
                    XoaManHinh();
                    textcolor(4);
                    printf("\t\t\t\t\t%-50s\n", "LUA CHON SAI NHAP LAI");
                    break;
                }
                }
            } while (chon_2 != 0);
            break;
        }

        case 5:
        {
            int chon_3;
            if (soLuong < 1)
            {
                XoaManHinh();
                textcolor(4);
                printf("\t\t\t\t\t%-50s\n", "DANH SACH BENH NHAN DANG TRONG");
                system("pause");
                XoaManHinh();
                break;
            }
            XoaManHinh();
            do
            {
                textcolor(15);
                printf("\t\t\t\t\t%-50s\n", "XOA BENH NHAN");
                printf("\t\t\t\t-----------------------------------------------------------\n");
                printf("\t\t\t\t|\t%-50s%s\n", "0. Tro ve", "|");
                printf("\t\t\t\t|\t%-50s%s\n", "1. Xoa dau", "|");
                printf("\t\t\t\t|\t%-50s%s\n", "2. Xoa cuoi", "|");
                printf("\t\t\t\t|\t%-50s%s\n", "3. Xoa vi tri bat ky", "|");
                printf("\t\t\t\t-----------------------------------------------------------\n");
                printf("\t\t\t\t-\t%-48s", "Nhap lua chon cua ban: ");
                scanf("%d", &chon_3);
                switch (chon_3)
                {
                case 0:
                {
                    XoaManHinh();
                    break;
                }
                case 1:
                {
                    xoaDau(DSBN, soLuong);
                    realloc(DSBN, (soLuong) * sizeof(BenhNhan));
                    XoaManHinh();
                    textcolor(4);
                    printf("\t\t\t\t\t%-50s\n", "DA XOA BENH NHANH DAU TIEN");
                    system("pause");
                    XoaManHinh();
                    break;
                }
                case 2:
                {
                    xoaCuoi(DSBN, soLuong);
                    realloc(DSBN, (soLuong) * sizeof(BenhNhan));
                    XoaManHinh();
                    textcolor(4);
                    printf("\t\t\t\t\t%-50s\n", "DA XOA BENH NHANH CUOI CUNG");
                    system("pause");
                    XoaManHinh();
                    break;
                }
                case 3:
                {
                    xoaBatKy(DSBN, soLuong);
                    realloc(DSBN, (soLuong) * sizeof(BenhNhan));
                    XoaManHinh();
                    textcolor(4);
                    printf("\t\t\t\t\t%-50s\n", "DA XOA BENH NHAN VAO VI TRI");
                    system("pause");
                    XoaManHinh();
                    break;
                }
                default:
                {
                    XoaManHinh();
                    textcolor(4);
                    printf("\t\t\t\t\t%-50s\n", "LUA CHON SAI NHAP LAI");
                    break;
                }
                }
            } while (chon_3 != 0);
            break;
        }
        case 6:
        {
        	if (soLuong < 1)
            {
                XoaManHinh();
                textcolor(4);
                printf("\t\t\t\t\t%-50s\n", "DANH SACH BENH NHAN DANG TRONG");
                system("pause");
                XoaManHinh();
                break;
            }
            int chon_4;
            XoaManHinh();
            do
            {
                textcolor(15);
                printf("\t\t\t\t-----------------------------------------------------------\n");
                printf("\t\t\t\t|\t%-50s%s\n", "0. Tro ve", "|");
                printf("\t\t\t\t|\t%-50s%s\n", "1. Sap xep theo tuoi", "|");
                printf("\t\t\t\t|\t%-50s%s\n", "2. Sap xep theo ten", "|");
                printf("\t\t\t\t-----------------------------------------------------------\n");
                printf("\t\t\t\t-\t%-48s", "Nhap lua chon cua ban: ");
                scanf("%d", &chon_4);
                switch (chon_4)
                {
                case 0:
                {
                    XoaManHinh();
                    break;
                }
                case 1:
                {
                    int chon_5;
                    XoaManHinh();
                    do
                    {
                        textcolor(15);
                        printf("\t\t\t\t\t%-50s\n", "SAP XEP THEO TUOI");
                        printf("\t\t\t\t-----------------------------------------------------------\n");
                        printf("\t\t\t\t|\t%-50s%s\n", "0. Tro ve", "|");
                        printf("\t\t\t\t|\t%-50s%s\n", "1. Tang dan", "|");
                        printf("\t\t\t\t|\t%-50s%s\n", "2. Giam dan", "|");
                        printf("\t\t\t\t-----------------------------------------------------------\n");
                        printf("\t\t\t\t-\t%-48s", "Nhap lua chon cua ban: ");
                        scanf("%d", &chon_5);
                        switch (chon_5)
                        {
                        case 0:
                        {
                            XoaManHinh();
                            break;
                        }
                        case 1:
                        {
                            sapXepTangDanTheoTuoi(DSBN, soLuong);
                            XoaManHinh();
                            textcolor(4);
                            printf("\t\t\t\t\t%-50s\n", "DA SAP XEP TANG DAN THEO TUOI");
                            system("pause");
                            XoaManHinh();
                            break;
                        }
                        case 2:
                        {
                            sapXepGiamDanTheoTuoi(DSBN, soLuong);
                            XoaManHinh();
                            textcolor(4);
                            printf("\t\t\t\t\t%-50s\n", "DA SAP XEP GIAM DAN THEO TUOI");
                            system("pause");
                            XoaManHinh();
                            break;
                        }
                        default:
                        {
                            XoaManHinh();
                            textcolor(4);
                            printf("\t\t\t\t\t%-50s\n", "LUA CHON SAI NHAP LAI");
                            break;
                        }
                        }
                    } while (chon_5 != 0);
                    break;
                }
                case 2:
                {
                    sapXepBenhNhanTheoTen(DSBN, soLuong);
                    XoaManHinh();
                    textcolor(4);
                    printf("\t\t\t\t\t%-50s\n", "DA SAP XEP GIAM DAN THEO TUOI");
                    system("pause");
                    XoaManHinh();
                    break;
                }
                default:
                {
                    XoaManHinh();
                    textcolor(4);
                    printf("\t\t\t\t\t%-50s\n", "LUA CHON SAI NHAP LAI");
                    break;
                }
                }
            } while (chon_4 != 0);
            break;
        }
        case 7:
        {
        	if (soLuong < 1)
            {
                XoaManHinh();
                textcolor(4);
                printf("\t\t\t\t\t%-50s\n", "DANH SACH BENH NHAN DANG TRONG");
                system("pause");
                XoaManHinh();
                break;
            }
            printf("\t\t\t\t\t%-50s\n", "TIM KIEM BENH NHAN BENH NHAN");
            timKiemBenhNhanTheoTen(DSBN, soLuong);
            system("pause");
            textcolor(15);
            XoaManHinh();
            break;
        }
        case 8: {
        	if (soLuong < 1)
            {
                XoaManHinh();
                textcolor(4);
                printf("\t\t\t\t\t%-50s\n", "DANH SACH BENH NHAN DANG TRONG");
                system("pause");
                XoaManHinh();
                break;
            }
            XoaManHinh();
            xuatDanhSachHoaDon(DSBN, soLuong);
            textcolor(15);
            printf("\n");
            system("pause");
            XoaManHinh();
			break;
		}
        case 10:
        {
            XoaManHinh();
        }
        }
    } while (chon_1 != 0);
	NgayThang localTime = layRaNgayThangNamHienTai();
	printf("%d / %d / %d", localTime.ngay, localTime.thang, localTime.nam);
    free(DSBN);

//	NgayThang date_1;
//	date_1.ngay = 2;
//	date_1.thang = 2;
//	date_1.nam = 2003;
//	NgayThang date_2;
//	date_2.ngay = 8;
//	date_2.thang = 2;
//	date_2.nam = 2004;
//	printf("%d", chenhLechDate(date_1, date_2));
    return 0;
}

