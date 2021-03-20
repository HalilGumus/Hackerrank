#include <iostream>
#include <string>

struct Student{
int age;
std::string vorname;
std::string nachname;
int standard;
};

int main(){
    Student st;
    std::cin >> st.age >> st.vorname >> st.nachname >> st.standard;
    std::cout << st.age << " " << st.vorname << " " << st.nachname << " " << st.standard;
    return 0;
}