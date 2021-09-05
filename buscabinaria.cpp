#include<iostream>

using namespace std;
int  main()
{
 int a[20],n,i,inicio,fim,meio,f,s,valor;

 cout<<"Entre o valor de n:";
 cin>>n;
 cout<<"\n Entre com os valores:\n";

 for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
 cout<<"Entre com o valor a ser buscado:";
 cin>>s;
 inicio=0;
 fim=n-1;
 f=0;

 while(inicio<=fim && f==0)
 {
  meio=(inicio+fim)/2;
  if(s>a[meio])
  {
   inicio=meio+1;
   valor=a[meio];
  }
  else if(s<a[meio])
  {
   fim=meio-1;
  valor=a[meio];
  }
  else
   f=1;
 }
 if(f==1)
 cout<<"valor encontrado, posicao no vetor :  "<<meio ;
 else
 cout<<"valor não encontrado ";


}
