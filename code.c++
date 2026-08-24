// #include<iostream>
// using namespace std;
// void swap(int *a, int *b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a;
//     int b;
//     cout << "Enter a:";
//     cin >> a;
//     cout<< "enter b:";
//     cin >> b;
//     cout << "Before a = " << a << ", b = " << b << endl;
//     swap(&a,&b);
//     cout << "After a = " << a << ", b = " << b << endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
    
//     int x;
//     cout<<"input size:";
//     cin>>x;
//     int *a=new int[x];
//     cout << "size = " << x << endl;
//     for ( int i=0; i<x; i++){
//         cin>> *(a+i);
//     }
   
//     for ( int j=0; j<x; j++){
//         cout <<"a=" << a[j] << endl;
//     }
//     delete[ ] a;
//     a=nullptr;
//     return 0;
// }
#include <iostream>
using namespace std;
struct Book{
    string title;
    string author;
    string year;
};

int main(){
    Book a1={"Book1", "a1", "2024"};
    cout<<a1.title<<" "<<a1.author<<" "<<a1.year<<endl;
    Book a2={"Book2", "a2", "2026"};
    cout<<a2.title<<" "<<a2.author<<" "<<a2.year<<endl;
    Book a3={"Book3", "a3", "2026"};
    cout<<a3.title<<" "<<a3.author<<" "<<a3.year<<endl;
    
    return 0;
}
