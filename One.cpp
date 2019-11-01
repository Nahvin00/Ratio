#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double e1,e2,e3,n1,n2,n3,r1,r2,r3,d12,d23,d31;
    cout<<"Enter value in cm.\n\n";
    cout<<"Enter eye distance and nose to chin distance for image 1: \n";
    cin>>e1>>n1;
    cout<<"Enter eye distance and nose to chin distance for image 2: \n";
    cin>>e2>>n2;
    cout<<"Enter eye distance and nose to chin distance for image 3: \n";
    cin>>e3>>n3;
    r1=e1/n1;
    r2=e2/n2;
    r3=e3/n3;
    d12=r1-r2;
    d23=r2-r3;
    d31=r3-r1;
    if(fabs(d12)<=fabs(d23) && fabs(d12)<=fabs(d31)){
        cout<<"\n\nBest matches is between image 1 and image 2";
    }
    else if (fabs(d23)<=fabs(d12) && fabs(d23)<=fabs(d31)){
        cout<<"\n\nBest matches is between image 2 and image 3";
    }   
    else if (fabs(d31)<=fabs(d12) && fabs(d31)<=fabs(d23)){
    cout<<"\n\nBest matches is between image 1 and image 3";
    }
    return 0;
}
