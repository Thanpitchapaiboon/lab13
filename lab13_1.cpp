#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}
void stat(const double x[],int n,double y[]){

    
    double sum1=0;
    for(int c=0;c<n;c++){
        sum1 += x[c];  
    }
    y[0] = sum1/n;

   
    double sum2=0;
   for(int c=0;c<n;c++){
        sum2 += pow((x[c]-y[0]),2);   
    }
    y[1]=sqrt(sum2/n);

    
    double sum3 =1;
    for(int c=0;c<n;c++){
    sum3 *=x[c];
    }
    y[2]=pow(sum3,(1.0/n));

    
    double sum4 =0;
    for(int c=0;c<n;c++){
        sum4 += (1/x[c]);
    }
    y[3]=n/sum4;

    
    y[4]=x[0];
    for(int c=0;c<n;c++){
        if(y[4]<x[c]){
            y[4]=x[c];
        }
    }
   
    y[5]=x[0];
    for(int c=0;c<n;c++){
        if(y[5]>x[c]){
            y[5]=x[c];
        }
    }

}