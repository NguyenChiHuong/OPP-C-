//#include<iostream>
//#include<string.h>
//#include<stdio.h>
//using namespace std;
//
//class Mathang{
//	public:
//		char mahang[10];
//		char tenhang[10];
//	    float dongia;
//	public:
//		Mathang(){}
//		Mathang(char*mahang,char*ten,float dongia){
//			strcpy(this->mahang,mahang);
//			strcpy(this->tenhang,tenhang);
//			this->dongia = dongia;
//		}
//		~Mathang(){}
//		virtual void nhap(){
//			cout<<"Nhap vao ma hang: ";
//			fflush(stdin);
//			cin.getline(mahang,10);
//			cout<<"Nhap vao ten hang: ";
//			fflush(stdin);
//			cin.getline(tenhang,10);
//			cout<<"Nhap vao don gia: ";
//			cin>>dongia;
//		}
//		virtual void hienthi(){
//			cout<<"Ma hang:"<<mahang<<endl;
//	        cout<<"Ten hang:"<<tenhang<<endl;
//			cout<<"Don gia:"<<dongia<<endl;
//		}
////		float getdongia(){
////			return dongia;
////		}
////		void setdongia(float dg){
////			dongia = dg;
////		}
//};
//
//class Banhkeo : public Mathang{
//	private:
//		float soluong;
//		char nsx[10];
//		float thanhtien;
//	public:
//		Banhkeo(char*mahang="",char*tenhang="",float dongia=0
//		        ,float soluong=0,char*nsx="",float thanhtien=0):Mathang(mahang,tenhang,dongia){
//		        	this->soluong = soluong;
//					strcpy(this->nsx,nsx);
//					this->thanhtien = thanhtien;
//				}
//		~Banhkeo(){}
//		void nhap(){
//			Mathang::nhap();
//			cout<<"Nhap vao so luong: ";
//			cin>>soluong;
//			cout<<"Nhap vao noi san xuat: ";
//			fflush(stdin);
//			cin.getline(nsx,10);
//		}
//		void hienthi(){
//			Mathang::hienthi();
//			cout<<"So luong: "<<soluong<<endl;
//			cout<<"Noi san xuat: "<<nsx<<endl;
//		}
////		float getsoluong(){
////			return soluong;
////		}
////		void setsoluong(float sl){
////			soluong = sl;
////		}
//
//		float tinhthanhtien(){
//			return soluong*dongia;
//		}
//};
//int main(){
//	Banhkeo b;
//	b.nhap();
//	b.hienthi();
//	cout<<"Thanh tien:"<<b.tinhthanhtien()<<endl;
//	return 0;
//}

//#include<iostream>
//#include<string.h>
//#include<stdio.h>
//#include<iomanip>
//#include<stdbool.h>
//using namespace std;
//
//class Mathang{
//	public:
//		char mahang[10];
//		char tenhang[10];
//	    float dongia;
//	public:
//		Mathang(){}
//		Mathang(char*mahang,char*ten,float dongia){
//			strcpy(this->mahang,mahang);
//			strcpy(this->tenhang,tenhang);
//			this->dongia = dongia;
//		}
//		~Mathang(){}
//		friend istream&operator>>(istream&is,Mathang &mh){
//			cout<<"Nhap vao ma hang: ";
//			fflush(stdin);
//			is.getline(mh.mahang,10);
//			cout<<"Nhap vao ten hang: ";
//			fflush(stdin);
//			is.getline(mh.tenhang,10);
//			cout<<"Nhap vao don gia: ";
//			is>>mh.dongia;
//			return is;
//		}
//		friend ostream&operator<<(ostream&os,Mathang mh){
//			os<<"-------------------------------------- \n";
//			os<<"Ma hang:"<<mh.mahang<<endl;
//	        os<<"Ten hang:"<<mh.tenhang<<endl;
//			os<<"Don gia:"<<mh.dongia<<endl;
//			return os;
//		}
//};
//
//class Banhkeo : public Mathang{
//	public:
//		float soluong;
//		char nsx[10];
//		float thanhtien;
//	public:
//		Banhkeo(char*mahang="",char*tenhang="",float dongia=0
//		        ,float soluong=0,char*nsx="",float thanhtien=0):Mathang(mahang,tenhang,dongia){
//		        	this->soluong = soluong;
//					strcpy(this->nsx,nsx);
//					this->thanhtien = thanhtien;
//				}
//		~Banhkeo(){}
//		friend istream&operator>>(istream&is,Banhkeo &bk){
//			is>>(Mathang&)bk;
//			cout<<"Nhap vao so luong: ";
//			is>>bk.soluong;
//			cout<<"Nhap vao noi san xuat: ";
//			fflush(stdin);
//			is.getline(bk.nsx,10);
//			return is;
//		}
//	    int operator>(Banhkeo dg){
//	    	int max=0;
//			if(max > dg.dongia){
//	    		return true;
//			}else
//				return false;
//	    }
//	    bool ssnsx (char a[10]){
//	    	if (strcmp(nsx,a)==0){
//	    		return true;
//			}else
//				return false;
//		}
//		float tinhthanhtien(){
//			return dongia*soluong;
//		}
//		float operator+(float a){
//			int t=0;
//			return t = this->tinhthanhtien() + a;
//		}
//		friend ostream&operator<<(ostream&os,Banhkeo bk){
//			os<<(Mathang&)bk;	
//			os<<"So luong: "<<bk.soluong<<endl;
//			os<<"Noi san xuat: "<<bk.nsx<<endl;
//			return os;
//		}
//
//};
//int main(){
//	int n;
//	cout<<"Nhap vao so mat hang: ";
//	cin>>n;
//	Banhkeo b[n];
//	for(int i=0;i<n;i++){
//		cin>>b[i];
//	}
//	for(int i=0;i<n;i++){
//		cout<<b[i];
//	}
//	cout<<"-------------------------------------- \n";
//	cout<<"So sanh 2banh keo theo don gia:\n";
//	int max = 0;
//	for(int i=0;i<n;i++){
//		if(b[i].dongia > max)
//			max = b[i].dongia;
//	}	
//	cout<<"Don gia banh keo lon nhat la: "<<max<<endl;
//    cout<<"---------------------------------------------\n";
//	cout<<"So sanh bang cua mot banh keo voi mot chuoi:\n ";
//	for(int i=0;i<n;i++){
//		if(b[i].ssnsx("hanoi"))
//            cout<<"Mat hang: "<<b[i].tenhang<<endl;
//	}
//	cout<<"---------------------------------------------\n";
//	for(int i=0;i<n;i++){
//		cout<<"Thanh tien "<<b[i].tenhang<<":"<<b[i].tinhthanhtien()<<endl;
//	}
//	int T=0;
//	for(int i=0; i<n;i++){
//		T = b[i] + T;
//	}
//	cout<<"Tong thanh tien cua danh sach banh keo: "<<T<<endl;
//    return 0;
//}
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<iomanip>
#include<stdbool.h>
using namespace std;

class Mathang{
	public:
		char mahang[10];
		char tenhang[10];
	    float dongia;
	public:
		Mathang(){}
		Mathang(char*mahang,char*ten,float dongia){
			strcpy(this->mahang,mahang);
			strcpy(this->tenhang,tenhang);
			this->dongia = dongia;
		}
		~Mathang(){}
		friend istream&operator>>(istream&is,Mathang &mh){
			cout<<"Nhap vao ma hang: ";
			fflush(stdin);
			is.getline(mh.mahang,10);
			cout<<"Nhap vao ten hang: ";
			fflush(stdin);
			is.getline(mh.tenhang,10);
			cout<<"Nhap vao don gia: ";
			is>>mh.dongia;
			return is;
		}
		friend ostream&operator<<(ostream&os,Mathang mh){
			os<<"-------------------------------------- \n";
			os<<"Ma hang:"<<mh.mahang<<endl;
	        os<<"Ten hang:"<<mh.tenhang<<endl;
			os<<"Don gia:"<<mh.dongia<<endl;
			return os;
		}
};

class Banhkeo : public Mathang{
	public:
		float soluong;
		char nsx[10];
		float thanhtien;
	public:
		Banhkeo(char*mahang="",char*tenhang="",float dongia=0
		        ,float soluong=0,char*nsx="",float thanhtien=0):Mathang(mahang,tenhang,dongia){
		        	this->soluong = soluong;
					strcpy(this->nsx,nsx);
					this->thanhtien = thanhtien;
				}
		~Banhkeo(){}
		friend istream&operator>>(istream&is,Banhkeo &bk){
			is>>(Mathang&)bk;
			cout<<"Nhap vao so luong: ";
			is>>bk.soluong;
			cout<<"Nhap vao noi san xuat: ";
			fflush(stdin);
			is.getline(bk.nsx,10);
			return is;
		}
		
		int operator > (Banhkeo dg){
			int max;
			if(max > dg.dongia){
				return true;
			}else
				return false;
		}
		float tthanhtien(){
			return dongia*soluong;
		}
		float operator +(float a){
			int t=0;
			return t = tthanhtien() + a;
		} 
		bool sosanh(char c[10]){
			if(strcmp(nsx,c)==0){
				return true;
			}else
				return false;
		}
		friend ostream&operator<<(ostream&os,Banhkeo bk){
			os<<(Mathang&)bk;	
			os<<"So luong: "<<bk.soluong<<endl;
			os<<"Noi san xuat: "<<bk.nsx<<endl;
			return os;
		}

};
int main(){
	int n;
	cout<<"Nhap vao so mat hang: ";
	cin>>n;
	Banhkeo b[n];
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		cout<<b[i];
	}
	cout<<"-------------------------------------- \n";
	cout<<"So sanh 2banh keo theo don gia:\n";
	int max=0;
	for(int i=0;i<n;i++){
		if(b[i].dongia > max)
			max = b[i].dongia;
	}
	cout<<"Don gia banh keo lon nhat la: "<<max<<endl;
    cout<<"---------------------------------------------\n";
	cout<<"So sanh bang cua mot banh keo voi mot chuoi:\n ";
	for(int i=0;i<n;i++){
		if(b[i].sosanh("hanoi")){
			cout<<b[i].tenhang;
		}
	}
	cout<<"---------------------------------------------\n";
	int T=0;
	for(int i=0;i<n;i++){
		T = b[i].tthanhtien() + T;
	}
	cout<<"Tong thanh tien cua danh sach banh keo: "<<T<<endl;
    return 0;
}
