#include "std_lib_facilities.h"

// ppp str 84
int main()
{

    cout <<"Podaj imie do kogo chcesz napisac:\n";
    string first_name;
    cin >> first_name;
    cout<<"Drogi "<<first_name<<",\n";
    cout<<"sie masz?"<<endl;
    
    cout<<"jak sie zwie twoj kumpel?"<<endl;
    string friend_name;
    cin>>friend_name;    
    cout << "Widziales może "<<friend_name<<" ostatnio?"<<endl;
    
    char friend_sex=0;
    cout << "czy ten kolo to chłop czy baba (m/k): ";
    cin>>friend_sex;
    if (friend_sex == 'm')
        cout << "Jeśłi zobaczysz " << friend_name 
          << " poproś go aby zadryndał" << endl;
    if (friend_sex == 'k')
        cout << "Jeśłi zobaczysz " << friend_name 
          << " poproś ją aby zadryndała" << endl;

    cout << "Podaj wiek adresata: ";
    int age = 0;
    cin >> age;
    cout << "masz " << age << " lat" << endl;
    if (age <= 0 or age >110)
        simple_error("jaja sobie robisz");
    
    if (age<12)
        cout << "za rok bedziesz miał " << age+1<< endl;
    if (age == 17)
        cout << "za rok bedziesz głosować." << endl;
    if (age>70)
        cout << "stary pryk" <<  endl;
    
    cout << "pozdrawiam, " << endl << endl;
    cout << "stary piernik ja" << endl;
    
    
    
    
}

