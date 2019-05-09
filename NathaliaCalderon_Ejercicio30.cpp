#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    
  double L=1.0;
  double dx = 0.01;
  double dt = 0.01;
  int n_side = L/(dx);
  double uold[n_side];
  double unew[n_side];
  double b=0.8;
  int tm=6;
  int t=tm/dt;
  double pi = 3.1415;
  double c=1;
  double x;
  ofstream outfile;
  int i,k;

  for(i=0;i<n_side;i++){
    uold[i] = sin(4*i*pi*dx)/2;
   
  }

  outfile.open("sol.dat");
 
  for(k=0;k<t;k++){
     
      for(i=1;i<n_side-1;i++){
        
          unew[i] = uold[i] - b/4*(pow(uold[i+1],2.0)-pow(uold[i-1],2.0))+ b*b/8*((uold[i+1]+uold[i])*(pow(uold[i+1],2.0)-pow(uold[i],2.0))-((uold[i]+uold[i-1])*(pow(uold[i],2.0)-pow(uold[i-1],2.0))));
            
  }
      
 
    for(i=0;i<n_side-1;i++){
     outfile << uold[i] << " ";
    } 
     outfile << "\n";
        
    for(i=1;i<n_side-1;i++){
      uold[i]=unew[i];
    }                                                                                      
                                                                                                                                     }       
  outfile.close();
  return 0;
                                                                                  
}