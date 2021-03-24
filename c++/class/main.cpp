#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Student{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void setAge(int input){
            age = input;
        }

        int getAge(){
            return age;
        }

        void setFirstName(string input){
            first_name = input;
        }

        string getFirstName(){
            return first_name;
        }

        void setLastName(string input){
            last_name = input;
        }

        string getLastName(){
            return last_name;
        }

        void setStandard(int input){
            standard = input;
        }

        int getStandard(){
            return standard;
        }

        void toString(){
            stringstream ss;
            char ch = ',';
            ss << age << ch << first_name << ch << last_name << ch << standard;
            string tmp;
            ss >> tmp;
            cout << tmp;
        }
};


int main(){
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.setAge(age);
    st.setFirstName(first_name);
    st.setLastName(last_name);
    st.setStandard(standard);

    cout << st.getAge() << endl << st.getLastName() << ", " << st.getFirstName() << endl << st.getStandard() << endl << endl;
    st.toString();

    return 0;

}