#include <stdio.h>
#include <math.h>


double matukidairasine(double x){
    return (4/(1+x*x));
}

double hayakusaitennsiro(double a,double b,int n){
    double k,s=0;
    int i;
    k=(b-a)/(2*n);
    for(i=0;i<=2*n;i++){
        if(i==0||i==2*n) s=matukidairasine(a+i*k)+s;
        else if(i%2==1) s=4*matukidairasine(a+i*k)+s;
        else s=2*matukidairasine(a+i*k)+s;
    }
    s=(s*k)/3;
    return (s);
}



int main(){
    int n;
    double a=0.0,b=1.0,h;

    for(n=1;n<=256;n=2*n){
        printf("%.14f\n",hayakusaitennsiro(a,b,n));
    }

    return 0;

}