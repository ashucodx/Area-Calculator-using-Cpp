#include <iostream>
using namespace std;

float rect(float x,float y);
float tgle(float x,float y);
float sqr(float x);
int main()
{
    float area,side,l,b,h;
    char operation;
    cout<<"________________________________________________________"<<endl;
    cout<<"-------------- WELCOME TO AREA CALCULATOR --------------"<<endl;
    cout<<"________________________________________________________"<<endl;
    cout<<"Enter the Operation \n\t(r = RECTANGLE, t = TRIANGLE, s = SQUARE)"<<endl;
    cin>>operation;
    switch (operation)
    {
    case 'r' :
        cout<<"enter the lenght and bredth of rectangle : ";
        cin>>l>>b;
        area=rect(l, b);
        cout<<"area of rectangle is :"<<area<<endl;
        break;
    case 's':
        cout<<"enter the side of Square : ";
        cin>>side;
        area=sqr(side);
        cout<<"area of square is :"<<area<<endl;
        break;
    case 't':
        cout<<"enter the base and height of triangle : ";
        cin>>b>>h;
        area=tgle(b,h);
        cout<<"area of triangle is :"<<area<<endl;
        break;

    default: 
        cout<<"incorrect declaration"<<endl;
        break;
    }
    return 0;
}
float tgle(float x,float y){
    return(0.5*x*y);
}

float rect(float x,float y){
    return(x*y);
}
float sqr(float x){
    return(x*x);
}