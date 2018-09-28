#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double yarilama(){

int sayac=1;

    double tolerans=0.001;
    double a=0, b=3;
    double p,fp,fa;
    printf("---Yarilama Yontemi---\n\n n      a              b              p             f(p)\n\n");

    do{
        p=(a+b)/2;
        fa=(a*a)-(2*a)-2;
        fp=(p*p)-(2*p)-2;

        if(fp==0 || ((b-a)/2)<tolerans){
            printf("p=%f\n",p);
            break;
        }
        printf(" %d   |   %f   |   %f   |   %f   |   %f\n",sayac,a,b,p,fp);
        sayac=sayac+1;

        if((fa*fp)>0)
            a=p;
        else
            b=p;

    } while(sayac<=50);



    return 0;



}


double sabitNokta(){

    double tolerans=0.001;
    double p;
    int sayac=1;
    double p0=1.5;

    printf("\n\n\n ---Sabit Nokta Yontemi---\n p=1.5  g(x)=3x-x^2+2\nn    p\n\n");

    do{
        p=pow(2*p0+2,0.5);

        if(fabs(p-p0)<tolerans){
            printf("p=%f",p);
            break;
        }
        printf("%d   |   %f\n",sayac,p);
        sayac=sayac+1;
        p0=p;

    }while(sayac<=50);

    return 0;
}

int main()
{
    yarilama();
    printf("\n------------------------------\n");
    sabitNokta();
}
