#include <iostream>

using namespace std;

int a,b,c,i,n,q,g,x,j,p,rs,k,total;
//-----------multiplicacion----------
int mult(int a,int b){
    int n=0;
    q=0;
    for(n=1;n<=b;n++){
               q=q+a;
               
               
               
               }
   
   return q;
               } 
//------------potencia---------------               
int potencia(int a, int b){
      int z=a;
      c=a;      
      for(i=1;i<b;i++){
                        
                        c=mult (c,z);
                                       
                        
                        }
      return c;
                        }                    
           
//----------------polinomia----------------

int fibo()
{

	int num;
	int a1=1;
	int a2=1;
	int fibo=1;
	
	cout<<"ingrese hasta que numero quiere la serie  "<<endl;
	cin>>num;
	cout<<endl<<a1<<" ";
	
	for(i=2;i<=num;i++){
		cout<<fibo<<" ";
		fibo=a1+a2;
		a1=a2;
		a2=fibo;
	}
}            

    
//-------------------division-------------------------
int div()
	{ 
		int dividendo,divisor,cociente=0,residuo; 
		cout<<"introduzca el dividendo"<<endl;
		cin>>dividendo;
		cout<<"introduzca el divisor"<<endl; 
		cin>>divisor;
		
		while(dividendo>divisor){ 
			dividendo=dividendo-divisor; 
			cociente=cociente+1; 
								} 
		residuo=dividendo; 
		cout<<"el resultado de la division es "<<cociente<<" y el residuo es "<<residuo; 
	 
}

//-----------------ecuacion-----------------------------
int pol(){
	cout<<"ingrese el grado del polinomio "<<i<<endl;
	cin>>n;
	k=n;
	int v[n];
	
	for (i=0;i<=n;i++){
		cout<<"ingrese el coeficiente "<<i<<endl;
		cin>>a;
		v[i]=a;

		}
	cout<<"ingrese x "<<endl;
	cin>>x;
	j=0;
		
	for (int s=0;s<n;s++){
			
			p=potencia(x,k);
			rs=mult(v[j],p);
			k--;
			j++;
			total=total+rs;
			
			
		
	}
	
	total=total+v[n];
	cout<<"total-->"<<total<<endl;
	
	}
	

//-----------------------------------------------                 
int main()
{
//----------llamada multiplicacion-------

    cout<<mult(5,40)<<endl;;
    
//----------llamada Potencia------------

    //cout<<potencia(2,4)<<endl;;
    
//-----------llamado fibonacci-----------

	//fibo();

//---------llamado division--------------

	//div();
-
//---------llamado polinomio--------------

	//pol();
    
    system ("pause");
}
               
 
