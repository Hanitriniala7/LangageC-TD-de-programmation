# include <stdio.h>
# include <math.h>
int main ()
{
   float  a,b,c,del,d;
   int x1,x2;

   printf (" entrer la valeur de a=") ;

   scanf("%f",&a);

   printf (" entrer la valeur de b=");

   scanf ("%f",&b);

   printf ( " entrer la valeur de c=") ;

   scanf("%f",&c);

if( a== 0)
{

  printf (" pas de solution ") ;
}

  del=b*b -(4*a*c) ;

if( del < 0) 
{
  d=-del ;
  x1=(-b) / (2*a) ;
  x2=( sqrt (d) ) / (2*a) ;
  printf (" les solutions sont x1=%f-%fi et x2=%f+%fi",x1,x2,x1,x2) ;
}

else if (del==0)
{
  x1=x2=-b/(2*a) ;
  printf ( " la solution est x1=x2=%f ",x1) ;
}

else if (del > 0)
{
  x1=(-b-sqrt(del) )/(2*a) ;
  x2= ( -b + sqrt (del))/(2*a) ;
  printf (" les solutions sont x1=%f et x2=%f ", x1,x2) ;
}

return(0) ;

}
