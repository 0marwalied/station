#include<iostream>
#include<string>
using namespace std;
string fn,sn, p, d, t;
int ty, nu;
double nm;
string complete_name = "";
void Input(string fname, string sname, int type, string place, string date, string time, int num_pass) {
	cout << "------<welcome to station>-----" << endl;//-->the start of program 
	cout << "First name : "; cin >> fn;//-->to enter the first name
	complete_name += fn;
	cout << "Second name : "; cin >> sn;//-->to enter the second name
	complete_name += ' '; complete_name += sn;//-->to add the first name with the second name
	{//for types the tiket
		cout << "Types of tiket" << endl;
		cout << "(1) ->100$" << endl;
		cout << "(2) ->80$" << endl;
		cout << "(3) ->60$" << endl;
		cout << "(4) ->40$" << endl;
		cout << "(5) ->25$" << endl;
	}
	cout << "Choose Type : "; cin >> ty;
	{//if the user enter wrong type
		if (ty > 5 || ty < 1) {
			while (ty > 5 || ty < 1) {
				cout << "Enter valid type : ";
				cin >> ty;
			}
    }
	}
	cout << "Place : "; cin >> p;
	cout << "Date : "; cin >> d;
	cout << "Time : "; cin >> t;
	cout << "Numper of passengers : "; cin >> nu;
	{//if the user enter wrong numper
		if (nu <= 0) {
			while (nu <= 0) {
				cout << "Enter numper more than zero : ";
				cin >> nu;
			}
		}
	}
	cout << "-------------------------------" << endl;
}
double prossing(int type_of_tiket, int numper_pass) {//-->to get the price 
	//conditions the price
	if (type_of_tiket == 1) {  return (nu * 100); }
	if (type_of_tiket == 2) {  return (nu * 80); }
	if (type_of_tiket == 3) {  return (nu * 60); }
	if (type_of_tiket == 4) {  return (nu * 40); }
	if (type_of_tiket == 5) {  return (nu * 25); }
}
void Output(string name, int type, string place, string date, string time, int num_pass) {//-->to get the output form
	cout << "-----<your tiket>-----" << endl;
	cout << "Name : " << complete_name<< endl;
	cout << "Type : " << ty << endl;
	cout << "Place :" << p << endl;
	cout << "Date :" << d << endl;
	cout << "time :" << t << endl;
	cout << "Numper of passengers :" << nu <<" Passengers" << endl;
	cout << "Total price :" << prossing(ty, nu) <<"$"<< endl;
	cout << "----------------------------";
}
int main() {
	string fnames="",snames="", Place = "", Date = "", Time = "";
	int Num_pass=0, Type=0;
	while (1) {
		//the system 
		Input(fnames,snames, Type, Place, Date, Time, Num_pass);
		system("cls");
		Output(fnames,Type, Place, Date, Time, Num_pass);
		{
			char con;
			cout << endl << "Do you want repeat the prosses ? (Yes->y,No->n)" << endl;
			cout << "(y,n) : ";
			cin >> con;
			if (con == 'y' || con == 'Y') { system("cls"); }
			else { cout << "-<Thank you>-" << endl; break; }
		}
	}
}