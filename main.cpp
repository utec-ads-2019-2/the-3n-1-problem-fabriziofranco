#include <iostream>
using namespace std;

int cycle_contador(int number){
    int contador=1;
    while(number!=1){
        contador++;
        if(number%2!=0){
            number=3*number+1;}
        else{
            number=number/2;}
    }
    return contador;
    }

int max_cycle(int i,int j){
    int max=0;
    for(int temp=i;temp<=j;temp++){
        if(cycle_contador(temp)>=max){
            max=cycle_contador(temp);
        }
    }
    return max;
}


int main() {
    int i=0,j=0,max=0;
    while(cin>>i>>j){
        cout << i << " " << j<<" ";
        if(i<j)
            max=max_cycle(i,j);
        else
            max=max_cycle(j,i);
        cout<<max<<"\n";
        }
    return 0;}
