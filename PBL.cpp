#include<conio.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include<iomanip>
#define MAX 100
using namespace std;
 
struct Garage {
    int id;
    char ten[30];
    int tuoi;
    char addr[50]; // dia chi
    char phone[11];
    char hangxe[20];
    char hieuxe[20];

};
 
typedef Garage GR;
 
void printLine(int n);
void nhapThongTinHK(GR &gr, int id);
void nhapHK(GR a[], int id, int n);
void capNhatThongTinHK(GR &gr);
void capNhatHK(GR a[], int id, int n);
int xoaTheoID(GR a[], int id, int n);
void timKiemTheoTen(GR a[], char ten[], int n);
//void tinhDTB(SV &sv);
//void xeploai(SV &sv);
int idLonNhat(GR a[], int n);
//void sapxepTheoDTB(SV a[], int n);
void sapXepTheoTen(GR a[], int n);
void showHK(GR a[], int n);
int docFile(GR a[], char fileName[]);
//void ghiFile(GR a[], int n, char fileName[]);
void pressAnyKey();
 
int main() {
    int key;
    char fileName[] = "khachhang.txt";
    GR arrayGR[MAX];
    int soluongHK = 0;
    int idCount = 0;
    // nhap danh sach sinh vien tu file
    soluongHK = docFile(arrayGR, fileName);
    idCount = idLonNhat (arrayGR, soluongHK);
 
    while(true) {
        cout << "CHUONG TRINH QUAN LY SINH VIEN C/C++\n";
        cout << "*************************MENU**************************\n";
        cout << "**  1. Them thong tin khach hang.                    **\n";
        cout << "**  2. Cap nhat thong tin khach hang boi ID.         **\n";
        cout << "**  3. Xoa thong tin khach hang boi ID.              **\n";
        cout << "**  4. Tim kiem khach hang theo ten.                 **\n";
        cout << "**  5. Sap xep khach hang theo ten.                  **\n";
        cout << "**  6. In hoa don.                                   **\n";
        cout << "**  7. Hien thi danh sach khach hang.                **\n";
        cout << "**  0. Thoat                                         **\n";
        cout << "*******************************************************\n";
        cout << "Nhap tuy chon: ";
        cin >> key;
        switch(key){
            case 1:
                cout << "\n1. Them khach hang.";
                idCount++;
                nhapHK(arrayGR, idCount, soluongHK);
                printf("\nThem khach hang thanh cong!");
                soluongHK++;
                pressAnyKey();
                break;
            case 2:
                if(soluongHK > 0) {
                    int id;
                    cout << "\n2. Cap nhat thong tin khach hang. ";
                    cout << "\n Nhap ID: "; cin >> id;
                    capNhatHK(arrayGR, id, soluongHK);
                }else{
                    cout << "\nDanh sach khach hang trong!";
                }
                pressAnyKey();
                break;
            case 3:
                if(soluongHK > 0) {
                    int id;
                    cout << "\n3. Xoa khach hang.";
                    cout << "\n Nhap ID: "; cin >> id;
                    if (xoaTheoID(arrayGR, id, soluongHK) == 1) {
                        cout<<"Khach hang co id da bi xoa";
                        //printf("\nKhach hang co id = %d da bi xoa.", &id);
                        soluongHK--;
                    }
                }else{
                    cout << "\nDanh sach khach hang trong!";
                }
                pressAnyKey();
                break;
            case 4:
                if(soluongHK > 0) {
                    cout << "\n4. Tim kiem khach hang theo ten.";
                    char strTen[30];
                    cout << "\nNhap ten de tim kiem: "; fflush(stdin); gets(strTen);
                    timKiemTheoTen(arrayGR, strTen, soluongHK);
                }else{
                    cout << "\nDanh sach khach hang trong!";
                }
                pressAnyKey();
                break;
            /*case 5:
                if(soluongHK > 0) {
                    cout << "\n5. Sap xep sinh vien theo diem trung binh (GPA).";
                    sapxepTheoDTB(arraySV, soluongSV);
                    showStudent(arraySV, soluongSV);
                }else{
                    cout << "\nSanh sach sinh vien trong!";
                }
                pressAnyKey();
                break; */
            case 5:
                if(soluongHK > 0) {
                    cout << "\n5. Sap xep khach hang theo ten.";
                    sapXepTheoTen(arrayGR, soluongHK);
                    showHK(arrayGR, soluongHK);
                } else {
                    cout << "\nDanh sach khach hang trong!";
                }
                pressAnyKey();
                break;
            case 6:
            	
{
	cout  <<"  _________________________________________________________________"<< endl;
	cout  <<" | No.  |               DICH VU                   |      GIA      | "<< endl;
	cout  <<" |----------------------------------------------------------------| "<< endl;
	cout  <<" | 1.   |   Rua xe ngoai                          |     50.000 vnd|" << endl;
	cout  <<" |----------------------------------------------------------------| "<< endl;
	cout  <<" | 2.   |   Hut bui                               |     25.000 vnd|" << endl;
	cout  <<" |----------------------------------------------------------------| "<< endl;
	cout  <<" | 3.   |   Xit gam                               |     30.000 vnd|" << endl;
	cout  <<" |----------------------------------------------------------------| "<< endl;
	cout  <<" | 4.   |   Phu bong Posi                         |    200.000 vnd|" << endl;
	cout  <<" |----------------------------------------------------------------| "<< endl;
	cout  <<" | 5.   |   Ve sinh giat kho ben trong            |    700.000 vnd|" << endl;
	cout  <<" |----------------------------------------------------------------| "<< endl;
	cout  <<" | 6.   |   Bao duong danh bong lam moi           |    700.000 vnd|" << endl;
	cout  <<" |----------------------------------------------------------------| "<< endl;
	cout  <<" | 7.   |   Khu mui he thong lanh va rua xe ngoai |    700.000 vnd|" << endl;
	cout  <<" |----------------------------------------------------------------| "<< endl;
	cout  <<" | 8.   |   Danh bong + Phu bong Posi             |    800.000 vnd|" << endl;
	cout  <<" |----------------------------------------------------------------| "<< endl;
	cout  <<" | 9.   |  Danh bong + Phu bong Nano HD-Nitro     |  1.500.000 vnd|" << endl;
	cout  <<"  _________________________________________________________________"<< endl;
	cout  << endl;
//MA SO THE
	int c;
	cout << setw(0) << " CHON MA SO PHIEU: ";
	cin >> c;
	cout << endl;
//HAM SU DUNG DICH VU
		star1 :
	float jum = 0;
	int n;
	int no[10];
	long price[10];
	string name[10], nv ;	
	float pay;
	cout<<"Ten thu ngan: ";
	cin>>nv;	
	cout <<" SO DICH VU SU DUNG : "; 
	cin >> n;
	cout << endl;
	if(n>=0 && n<19)
	{
		for(int i=0; i<n;i++)
		{
			cout << " DICH VU THU " << i+1 <<": ";
			cin >> no[i];
			if (no[i]==1)
			{
				name[i]=" Rua xe ngoai";
				price[i]=50000 ;
			}
			else if (no[i]==2)
			{
				name[i]=" Hut bui";
				price[i]=25000;
			}	
			else if (no[i]==3)
			{
				name[i]=" Xit gam";
				price[i]=30000;
			}
			else if (no[i]==4)
			{
				name[i]=" Phu bong Posi";
				price[i]=200000;
			}
			else if (no[i]==5)
			{
				name[i]=" Ve sinh giat kho ben trong";
				price[i]=700000;
			}
			else if (no[i]==6)
			{
				name[i]=" Bao duong danh bong lam moi";
				price[i]=700000;
			}
			else if (no[i]==7)
			{
				name[i]=" Khu mui he thong lanh va rua xe ngoai";
				price[i]=700000;
			}
			else if (no[i]==8)
			{
				name[i]=" Danh bong + Phu bong Posi";
				price[i]=800000;
			}
			else if (no[i]==9)
			{
				name[i]=" Danh bong + Phu bong HD-Nitro";
				price[i]=1500000;
			}
			jum+=price[i];
		}
		cout << endl;
		cout << ">> 1. BACK"<<endl;
		cout << ">> 2. THANH TOAN"<< endl;
		int o1;
		nhaplai1 :
		cin >> o1;
		switch (o1)
		{
			case 1:
				//system ("cls");
				goto star1;
				break;
			case 2:
				system ("cls");
				cout << "---------------------------------------------------------------------"<< endl;
				cout << "TT";
				cout <<setw(30)<< "Ten Dich Vu";
				cout <<setw(30)<< "D.Gia";
				cout << endl;
				cout << "---------------------------------------------------------------------"<< endl;
				for(int i=0;i<n;i++)
				{
				cout << i+1;
				cout <<setw(30)<< name[i];
				cout <<setw(30)<< price[i];
				cout << endl;
				}
				cout << "====================================================================="<< endl;
				cout << endl;
				//cout << "THANH TIEN: "<<setw(40) << jum;
				cout << setprecision(2) << fixed <<"THANH TIEN:"<<setw(40) <<jum;
				cout << endl;
				cout << "---------------------------------------------------------------------"<< endl;
				cout << endl;
				//cout << "THANH TOAN: "<<setw(40) << jum;
				cout << setprecision(2) << fixed <<"THANH TOAN:"<<setw(40) <<jum;
				cout << endl;
				cout << "TIEN KHACH DUA:                               ";
				cin >> pay;
				if((pay-jum)>=0)
				{
				cout << "TIEN THUA:" <<setw(38) <<pay-jum <<endl;
				}
				else
				{
				cout << "So tien khong du.";
				}
				cout << endl;
				cout <<">>  1. BACK" << endl;
				cout <<">>  2. IN HOA DON" << endl;
				int o2;
				nhaplai2 :
				cin >> o2;
				switch(o2)
				{
					case 1:
						goto star1;
						break;
					case 2:
						system ("cls");
						cout <<"                      ----<<    HOA-DON    >>----     ";
						cout << endl;
						cout << endl;
						cout << "THU NGAN: " << nv;
						cout <<setw(22) << "So the: " << n;
						cout << endl;
						cout << "---------------------------------------------------------------------"<< endl;
						cout << "TT";
						cout <<setw(35)<< "TEN DICH VU";
						cout <<setw(15)<< "DON GIA";
						cout <<setw(13) <<"THANH TIEN";
						cout << endl;
						cout << "---------------------------------------------------------------------"<< endl;
						for(int i=0;i<n;i++) {
						cout << i+1;
						cout <<setw(35)<<name[i];
						cout <<setw(15)<< price[i];
						cout <<setw(13)<< price[i];
						cout << endl;
						}
						cout << "===================================================================="<< endl;
						cout<<endl;
						cout << "THANH TIEN: "<<setw(40) << jum<<endl;
						cout << endl;
						cout << "---------------------------------------------------------------------"<< endl;
						cout<<endl;
						cout << "THANH TOAN: "<<setw(40) << jum<<endl;
						cout << endl;
						cout << "TIEN KHACH DUA: " <<setw(38) << pay << endl;
						if((pay-jum)>=0)
						{
						cout<< "TIEN THUA: " <<setw(40) << pay-jum <<endl;
						}
						else
						{
						cout << "So tien khong du." << endl;
						}
						cout<<endl;
						cout<<"====<<  CAM ON QUY KHACH DA SU DUNG DICH VU CUA CHUNG TOI  >>====="<<endl;
						cout<<endl;
						cout<<"======================<<   HEN-GAP-LAI   >>=======================";
						break;
					default :
						cout <<"ERROR !";
						cout<< "nhap lai: ";
			            goto nhaplai2;
			            break;
				}
				break;
			default :
				cout <<"ERROR !" << endl;
				cout<< "nhap lai: ";
				goto nhaplai1;
				break;
					
		}
	}
}

            	pressAnyKey();
                break;
            case 7:
                if(soluongHK > 0){
                    cout << "\n7. Hien thi danh sach khach hang.";
                    showHK(arrayGR, soluongHK);
                }else{
                    cout << "\nDanh sach khach hang trong!";
                }
                pressAnyKey();
                break;
            /* case 8:
                if(soluongHK > 0){
                    cout << "\n8. Ghi danh sach sinh vien vao file.";
                    ghiFile(arraySV, soluongSV, fileName);
                }else{
                    cout << "\nSanh sach sinh vien trong!";
                }
                printf("\nGhi danh sach sinh vien vao file %s thanh cong!", fileName);
                pressAnyKey();
                break; */
            case 0:
                cout << "\nBan da chon thoat chuong trinh!";
                getch();
                return 0;
            default:
                cout << "\nKhong co chuc nang nay!";
                cout << "\nHay chon chuc nang trong hop menu.";
                pressAnyKey();
                break;
        }
    }
}
  
/*void tinhDTB(SV &sv) {
    sv.diemTB = (sv.diemToan + sv.diemLy + sv.diemHoa) / 3;    
} */
 
/*void xeploai(SV &sv) {
    if(sv.diemTB >= 8) strcpy(sv.hocluc, "Gioi");
    else if(sv.diemTB >= 6.5) strcpy(sv.hocluc, "Kha");
    else if(sv.diemTB >= 5) strcpy(sv.hocluc, "Trung binh");
    else strcpy(sv.hocluc, "Yeu");
} */
  
void nhapThongTinHK(GR &gr, int id) {
    cout << "\n Nhap ten: "; fflush(stdin); gets(gr.ten);
    cout << " Nhap tuoi: "; cin >> gr.tuoi;
    cout << " Nhap addr: "; fflush(stdin); gets(gr.addr);
    cout << " Nhap SDT: "; fflush(stdin); gets(gr.phone);
    cout << " Nhap Hangxe: "; fflush(stdin); gets(gr.hangxe);
    cout << " Nhap Hieuxe: "; fflush(stdin); gets(gr.hieuxe);
    gr.id = id;
    //tinhDTB(sv);
    //xeploai(sv);
}
 
void nhapHK(GR a[], int id, int n) {
    printLine(40);
    printf("\n Nhap khach hang thu %d:", n + 1);
    nhapThongTinHK(a[n], id);
    printLine(40);
}
 
void capNhatThongTinHK(GR &gr) {
    cout << "\n Nhap ten: "; fflush(stdin); gets(gr.ten);
    cout << " Nhap tuoi: "; cin >> gr.tuoi;
    cout << " Nhap addr: "; fflush(stdin); gets(gr.addr);
    cout << " Nhap SDT: "; fflush(stdin); gets(gr.phone);
    cout << " Nhap Hangxe: "; fflush(stdin); gets(gr.hangxe);
    cout << " Nhap Hieuxe: "; fflush(stdin); gets(gr.hieuxe);
}
 
void capNhatHK(GR a[], int id, int n) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            cout << "\n Cap nhat thong tin khach hang co ID = " << id;
            capNhatThongTinHK(a[i]);
            printLine(40);
            break;
        }
    }
    if (found == 0) {
        printf("\n Khach hang co ID = %d khong ton tai.", id);
    }
}
 
int xoaTheoID(GR a[], int id, int n) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].id == id) {
            found = 1;
            printLine(40);
            for (int j = i; j < n; j++) {
                a[j] = a[j+1];
            }
            cout << "\n Da xoa khach hang co ID = " << id;
            printLine(40);
            break;
        }
    }
    if (found == 0) {
        printf("\n Khach hang co ID = %d khong ton tai.", id);
        return 0;
    } else {
        return 1;
    }
}
 
void timKiemTheoTen(GR a[], char ten[], int n) {
    GR arrayFound[MAX];
    char tenHK[30];
    int found = 0;
    for(int i = 0; i < n; i++) {
        strcpy(tenHK, a[i].ten);
        if(strstr(strupr(tenHK), strupr(ten))) {
            arrayFound[found] = a[i];
            found++;
        }
    }
    showHK(arrayFound, found);
}
 
void showHK(GR a[], int n) {
    printLine(120);
    cout<<setw(3)<<"STT";
    cout<<setw(5)<<"ID";
    cout<<setw(20)<<"HO VA TEN";
    cout<<setw(15)<<"TUOI";
    cout<<setw(20)<<"DIA CHI";
    cout<<setw(15)<<"SDT";
    cout<<setw(15)<<"HANG XE";
    cout<<setw(15)<<"SO HIEU";
    cout<<endl;
    for(int i = 0; i < n; i++) {
        // in KH thu i ra man hinh
        cout<<setw(3)<<i+1;
        cout<<setw(5)<<a[i].id;
        cout<<setw(20)<<a[i].ten;
        cout<<setw(15)<<a[i].tuoi;
        cout<<setw(20)<<a[i].addr;
        cout<<setw(15)<<a[i].phone;
        cout<<setw(15)<<a[i].hangxe;
        cout<<setw(15)<<a[i].hieuxe;
        cout<<endl;
        //printf("\n %d", i + 1);
        //printf("\t%d", a[i].id);
        //printf("\t%s", a[i].ten);
        //printf("\t\t%s", a[i].tuoi);
        //printf("\t\t%d", a[i].addr);
        //printf("\t\t%d", a[i].phone);
        //printf("\t\t%d", a[i].hangxe);
        //printf("\t\t%d", a[i].hieuxe);

       // printf("\t%.2f\t%.2f\t%.2f", a[i].diemToan, a[i].diemLy, a[i].diemHoa);
       // printf("\t%.2f", a[i].diemTB);
       // printf("\t%s", a[i].hocluc);
    }
    printLine(120);
}
  
/*void sapxepTheoDTB(SV a[], int n) {
    //Sap xep theo DTB tang dan
    SV tmp;
    for(int i = 0;i < n;i++) {
        for(int j = i+1; j < n;j++) {
            if(a[i].diemTB > a[j].diemTB) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
} */
 
void sapXepTheoTen(GR a[], int n) {
    //Sap xep sinh vien theo ten theo thu tu tang dan
    GR tmp;
    char tenKH1[30];
    char tenKH2[30];
    for(int i = 0;i < n; i++) {
        strcpy(tenKH1, a[i].ten);
        for(int j = i+1; j < n; j++) {
            strcpy(tenKH2, a[j].ten);
            if(strcmp(strupr(tenKH1), strupr(tenKH2)) > 0) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
 
int idLonNhat (GR a[], int n) {
    int idMax = 0;
    if (n > 0) {
        idMax = a[0].id;
        for(int i = 0;i < n; i++) {
            if (a[i].id > idMax) {
                idMax = a[i].id;
            }
        }
    }
    return idMax;
}
 
int docFile(GR a[], char fileName[]) {
     /* FILE * fp;
    int i = 0;
    fp = fopen (fileName, "r");
    cout << "Chuan bi doc file: "; puts(fileName);
    // doc thong tin sinh vien
   
    while (fscanf(fp, "ID: %s\t\tten: %s\t\ttuoi%s\t\tadrr%s\t\tphone%s\t\thangxe%d\t\thieuxe: %f\n", &a[i].id, &a[i].ten, 
            &a[i].tuoi, &a[i].addr, &a[i].phone, &a[i].hangxe, &a[i].hieuxe) != EOF) {
       i++;
       cout << " Doc ban ghi thu: " << i << endl;
    }
    cout << " So luong khach hang co san trong file la: " << i << endl;
    cout << endl;
    fclose (fp); */

    fstream f;
    int i = 0;
    char input[100];
    //string data;
    string line;
    f.open(fileName, ios::in);
    if (!f.is_open())
    {
          cout << "File trong!";
    }
    else {
        while (f >> input)
        {   
            getline(f, line);
            i++;
            cout << "Doc thong tin khach hang thu: "<< i <<endl;
        }
        //cout << "So luong khach hang co san trong file la: " << i << endl;
    }
 
    f.close();
    return i;
    /*{
        while (!f.eof())
        {          // (1)
        getline(f, line); // (2)
        data += line;
        i++;
        cout << " Doc ban ghi thu: " << i << endl;
        }
    }
    
    cout << " So luong khach hang co san trong file la: " << i << endl;
    cout << endl;
    f.close();


    // tra ve so luong khach hang duoc doc tu file
    return i; */
} 
 
/*void ghiFile(SV a[], int n, char fileName[]) {
    FILE * fp;
    fp = fopen (fileName,"w");
    for(int i = 0;i < n;i++){
        fprintf(fp, "%5d%30s%5s%5d%10f%10f%10f%10f%10s\n", a[i].id, a[i].ten,a[i].gioiTinh, 
            a[i].tuoi, a[i].diemToan, a[i].diemLy, a[i].diemHoa, a[i].diemTB, a[i].hocluc);
    }
    fclose (fp);
} */

void printLine(int n) {
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "_";
    }
    cout << endl;
}
 
void pressAnyKey() {
    cout << "\n\nBam phim bat ky de tiep tuc...";
    getch();
    system("cls");
}
