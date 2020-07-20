#include <stdio.h>
#include <math.h>


double matukidairahagetane(double x){
    return (4/(1+x*x));
}

double matukidairaseiritekinimuri(double a,double b,int n){
    double k,s=0;
    int i;
    k=(b-a)/(2*n);
    for(i=0;i<=2*n;i++){
        if(i==0||i==2*n) s=matukidairahagetane(a+i*k)+s;
        else if(i%2==1) s=4*matukidairahagetane(a+i*k)+s;
        else s=2*matukidairahagetane(a+i*k)+s;
    }
    s=(s*k)/3;
    return (s);
    
}



int main(){
    int n;
    double a=0.0,b=1.0,h;

    for(n=1;n<=256;n=2*n){
        printf("%.14f\n",matukidairaseiritekinimuri(a,b,n));
    }

    return 0;

}