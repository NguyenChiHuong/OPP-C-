#include<iostream>
#include<string.h>
#include<stdio.h>
#include<iomanip>
using namespace std;

struct ngaysinh{
    int ngay,thang,nam;
};
class sinhvien{
    private:
        char maso[10];
        char hoten[10];
        char lop[10];
        char quequan[10];
        ngaysinh ns;
        float diemtoan,diemvan,diemanh;
    public:
        sinhvien(){}
        sinhvien(char*ms,char*ht,char*lop,char*qq,float dt,float dv,float da){
            strcpy(this->maso,ms);
            strcpy(this->hoten,ht);
            strcpy(this->lop,lop);
            strcpy(this->quequan,qq);
            this->diemtoan = dt;
            this->diemvan = dv;
            this->diemanh = da;
        }
        ~sinhvien(){}
        friend istream&operator>>(istream&is,sinhvien &sv){
            cout<<"\t-Nhap sinh vien-\n";
            cout<<"\nNhap ma so: "; fflush(stdin); is.getline(sv.maso,10);
            cout<<"Nhap ho ten: "; is.getline(sv.hoten,10);
            cout<<"Nhap lop: "; is.getline(sv.lop,10);
            cout<<"Nhap que quan: "; is.getline(sv.quequan,10);
            cout<<"\n\t-Nhap ngay sinh-\n";
            cout<<"\nNhap ngay: "; is>>sv.ns.ngay;
            cout<<"Nhap thang: "; is>>sv.ns.thang;
            cout<<"Nhap nam: "; is>>sv.ns.nam;
            cout<<"\n\t-Nhap diem-\n";
            cout<<"\nNhap diem toan: "; is>>sv.diemtoan;
            cout<<"Nhap diem van: "; is>>sv.diemvan;
            cout<<"Nhap diem anh: "; is>>sv.diemanh;
            return is;
        }
        float diemtb(){
            return (diemtoan + diemvan + diemanh) / 3;
        }
        char hocluc(){
            if(diemtb() > 8)
                cout<<"Gioi";
            else if(diemtb() >=6.5 && diemtb() <8)
                cout<<"Kha";
            else if(diemtb() >=4 && diemtb() <6.5)
                cout<<"Trung binh";
            else    cout<<"Yeu";
        }
        
        friend ostream&operator<<(ostream&os,sinhvien sv){
            os<<"|"<<setw(5)<<sv.maso<<"|"<<setw(15)<<sv.hoten<<"|"<<setw(10)<<sv.lop<<"|"<<setw(12)<<sv.quequan
                <<"|"<<setw(2)<<sv.ns.ngay<<"/"<<setw(2)<<sv.ns.thang<<"/"<<setw(4)<<sv.ns.nam<<"|"<<setw(9)
                <<sv.diemtoan<<"|"<<setw(8)<<sv.diemvan<<"|"<<setw(8)<<sv.diemanh<<"|"<<setw(13)<<sv.diemtb()<<"|"
                <<setw(10)<<sv.hocluc()<<"|"<<endl;
            return os;
        }
};
void dongketieude(){
    cout<<"=========================================================================================================="<<endl;
}
void dongkengang(){
    cout<<"----------------------------------------------------------------------------------------------------------"<<endl;
}
void tieude(){
    cout<<"|"<<setw(5)<<left<<"Ma so"<<"|"<<setw(15)<<left<<"Ho ten"<<"|"<<setw(10)<<left<<"Lop"<<"|"<<setw(12)<<left<<"Que quan"
        <<"|"<<setw(10)<<"Ngay sinh"<<"|"<<setw(5)<<"Diem toan"<<"|"<<setw(8)<<"Diem van"<<"|"<<setw(8)<<"Diem anh"<<"|";
    cout<<setw(13)<<"DiemTrungBinh"<<"|"<<setw(10)<<"Hoc luc"<<"|"<<endl;
}
int main(){
    int n;
    sinhvien*sv;
    cout<<"->Nhap so sinh vien: ";
    cin>>n;
    sv= new sinhvien[n];
    for(int i=0;i<n;i++){
        cout<<"\n$ Sinh vien thu "<<i+1<<" $"<<endl;
        cin>>sv[i];
    }cout<<endl; 
    cout<<"DANH SACH SINH VIEN"<<endl;
    tieude();
    for(int i=0;i<n;i++){
        cout<<sv[i];
    }
    return 0;
}