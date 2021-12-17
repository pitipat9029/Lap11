#include<iostream>
#include <iomanip>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
    ifstream source("score.txt");
    double c , A , sum , sumA , mean ;

    string tt ;
    while (getline(source , tt) )
    {
        sum += atof(tt.c_str()) ;
        c++ ;
    }
    mean = sum/c ;

    source.close() ;
    
    source.open("score.txt");
    while (getline(source , tt) )
    {
        sumA += pow( (atof(tt.c_str())-mean) , 2 )  ;
    }
    A = sqrt(sumA/c) ;
    
    cout << "Number of data = " << c << '\n' ;
    cout << setprecision(3);
    cout << "Mean = " << mean << '\n' ;
    cout << "Standard deviation = " << A ;

}




