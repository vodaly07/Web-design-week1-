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
