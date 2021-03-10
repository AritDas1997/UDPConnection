#include<iostream>
#include<fstream>
#include<ctype.h>
#include<string>
#include<cstring>

using namespace std ;

int main()
{

int i ;
i=0 ;
char ch,c ;
char buff[1000] ;
string line ;
ifstream f("omega.pcap", ios::in) ;
ofstream o("cameo.txt", ios::out) ;

while(f){
f >> ch ;
if(isalnum(ch) || ch=='%' || ch==','){
o << ch ;
}
}
f.close() ;
o.close() ;



ifstream n("cameo.txt", ios::in) ;
ofstream b("retro.txt", ios::out) ;
while(n){
n >> ch ;
if(ch == '%'){
/*
do{
if(ch == '%'){
b << endl ;
}
n >> ch ;
b << ch ;
}while(ch != '%') ;
}
}n
*/
b << endl ;
n >> ch ;
while(ch != '%'){
b << ch ;
n >> ch ;
}
}
}


return 0 ;
}
