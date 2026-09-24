#include <stdio.h>

int main() {
    int maPhim, tuoi, loaiGhe, doiTuong;
    int giaCoBan = 80000;
    int phuThu = 0;
    float tiLeGiam = 0.0;
    float tongTruocGiam;
    float tienGiam;
    float tongTienThanhToan;

    printf("=== HE THONG BAN VE PHIM CGV / LOTTE ===\n");

    printf("Nhap ma loai phim (1: Phim P, 2: Phim C18): ");
    scanf("%d", &maPhim);

    printf("Nhap tuoi cua khan gia: ");
    scanf("%d", &tuoi);

    printf("Nhap loai ghe (1: Ghe Thuong, 2: Ghe VIP): ");
    scanf("%d", &loaiGhe);

    printf("Nhap doi tuong (1: Khach thong thuong, 2: HSSV): ");
    scanf("%d", &doiTuong);

    // Kiem tra do tuoi phim C18
    if (maPhim == 2 && tuoi < 18) {
        printf("\n[THONG BAO] Tu choi ban ve: Khach gia chua du 18 tuoi de xem phim mac C18!\n");
        return 0;
    }

    // Tinh phu thu theo loai ghe
    switch (loaiGhe) {
        case 1:
            phuThu = 0;
            break;

        case 2:
            phuThu = 15000;
            break;

        default:
            printf("\n[LOI] Ma loai ghe khong hop le! Vui long chon 1 (Thuong) hoac 2 (VIP).\n");
            return 0;
    }

    // Tinh giam gia theo doi tuong
    if (doiTuong == 2) {
        tiLeGiam = 0.20;
    } else if (doiTuong == 1) {
        tiLeGiam = 0.0;
    } else {
        printf("\n[LOI] Ma doi tuong khong hop le! Vui long chon 1 (Khach thong thuong) hoac 2 (HSSV).\n");
        return 0;
    }

    // Tinh tien
    tongTruocGiam = giaCoBan + phuThu;
    tienGiam = tongTruocGiam * tiLeGiam;
    tongTienThanhToan = tongTruocGiam - tienGiam;

    // In hoa don
    printf("\n=== HOA DON THANH TOAN VE PHIM ===\n");
    printf("Gia ve chuan: %d VNĐ\n", giaCoBan);
    printf("Phu thu ghe VIP: %d VNĐ\n", phuThu);
    printf("Tong phi dich vu: %.0f VNĐ\n", tongTruocGiam);

    if (doiTuong == 2) {
        printf("Giam gia HSSV (20%%): %.0f VNĐ\n", tienGiam);
    } else {
        printf("Giam gia: 0 VNĐ\n");
    }

    printf("-----------------------------------\n");
    printf("TONG TIEN PHAI THANH TOAN: %.0f VNĐ\n", tongTienThanhToan);

    return 0;
}
