#include "std_lib_facilities.h"


// zad.4
void f1()
{
    cout << "Podaj dwie liczby całkowite" << endl;
    cout << "liczba nr 1: ";
    int num_1, num_2 = 0;
    cin >> num_1;
    cout << "liczba nr 2: ";
    cin >> num_2;

    if (num_1 < num_2)
        cout << "mnijesza jest " << num_1 << endl;
    else
        cout << "wieksza jest " << num_1 << endl;
        
    cout << "Suma obu liczb: " << num_1 + num_2 << endl;
    cout << "roznica wynosi: " << num_1 - num_2 << endl;
    
    
}

// zad.5
void f2()
{
    cout << "Podaj dwie liczby zmiennoprzecinkowe" << endl;
    cout << "liczba nr 1: ";
    double num_1, num_2 = 0.0;
    cin >> num_1;
    cout << "liczba nr 2: ";
    cin >> num_2;

    if (num_1 < num_2)
        cout << "mnijesza jest " << num_1 << endl;
    else
        cout << "wieksza jest " << num_1 << endl;
        
    cout << "Suma obu liczb: " << num_1 + num_2 << endl;
    cout << "roznica wynosi: " << num_1 - num_2 << endl;
    
}

// zad.6
void f3()
{
    cout << "Podaj trzy liczby całkowite: ";
    int a, b, c = 0;
    int first, second, third = 0;
    
    cin >> a >> b >>c;
    
    if (a < b and a < c)
    {
        first = a;
        
        if (b < c)
        {
            second = b;
            third = c;
        }
        else
        {
            second = c;
            third = b;
        }
    }
    
    if (b < a and b < c)
    {
        first = b;
        
        if (a < c)
        {
            second = a;
            third = c;
        }
        else
        {
            second = c;
            third = a;
        }
    }        

    if (c < a and c < b)
    {
        first = c;
        
        if (a < b)
        {
            second = a;
            third = b;
        }
        else
        {
            second = b;
            third = a;
        }
    }        

    cout << first << ", " << second << ", " << third << endl;
           
}

//zad.7
void f4()
{
    cout << "Podaj trzy wyrazy: ";
    string a, b, c;
    string first, second, third;
    
    cin >> a >> b >>c;
    
    if (a < b and a < c)
    {
        first = a;
        
        if (b < c)
        {
            second = b;
            third = c;
        }
        else
        {
            second = c;
            third = b;
        }
    }
    
    if (b < a and b < c)
    {
        first = b;
        
        if (a < c)
        {
            second = a;
            third = c;
        }
        else
        {
            second = c;
            third = a;
        }
    }        

    if (c < a and c < b)
    {
        first = c;
        
        if (a < b)
        {
            second = a;
            third = b;
        }
        else
        {
            second = b;
            third = a;
        }
    }        

    cout << first << ", " << second << ", " << third << endl;
    
}

// zad.8
void f5()
{
    cout << "podaj jedną liczbę: ";
    int num = 0;
    string result = "parzysta";
    cin >> num;
    if (num % 2)
        result = "nieparzysta";
    cout << "Liczba " << num << " jest " << result<< endl;

}

// zad.9
void f6()
{
    cout << "Podaj liczbę słownie (q=quit): ";
    string s;
    
    while (cin >> s)
    {
        if (s == "zero") 
            cout << s << " ma wartość 0\n";
        else if (s == "one") 
            cout << s << " ma wartość 1\n";
        else if (s == "two") 
            cout << s << " ma wartość 2\n";
        else if (s == "three") 
            cout << s << " ma wartość 3\n";
        else if (s == "four")  
            cout << s << " ma wartość 4\n";
        else if (s == "q")
            break;
        else 
            cout << "Co za bzdura" << endl;
        cout << "podaj kolejną liczbę słownie: ";
    }
    cout << "Bye!" << endl;
}


int main()
{

//    f1();
//    cout << "------" << endl << endl;
//    f2();
//    f3();
//    f4();
//    f5();
    f6();
    

}

