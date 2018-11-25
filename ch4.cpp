#include "std_lib_facilities.h"

/*

Resolutions
https://github.com/bewuethr/stroustrup-ppp/tree/master/chapter04

*/


// str 104
void f1()
{
    constexpr double cm_per_inch = 2.54;
    double length = 1;
    char unit = 0;
    
    cout << "podaj dlugosc zakonczoną jednostką (c, i, k, y: ";
    cin>>length>>unit;
    if (unit == 'i')
        cout << length << " cali to " << length*cm_per_inch << " cm." << endl;
    else if (unit == 'c')
        cout << length << " cm to " << length/cm_per_inch << " cali." << endl;
    else
        cout << "nie znana jednostka\n";

}

// str 105
void f2()
{
    constexpr double yen_rate = 113.77;
    constexpr double kroner_rate = 6.57843;
    constexpr double pound_rate = 0.77052;
    
    double value = 1;
    char unit = 0;
    
    cout << "podaj wartość zakonczoną jednostką waluty (y, k, p: ";
    cin >> value >> unit;
    if (unit == 'y')
        cout << value << " yenów to " << value / yen_rate << " dolców." << endl;
    else if (unit == 'k')
        cout << value << " krone to " << value / kroner_rate << " dolców." << endl;
    else if (unit == 'p')
        cout << value << " pounds to " << value / pound_rate << " dolców." << endl;
    else
        cout << "nie znana waluta\n";

    
}

// str 109
void f3()
{
    constexpr double yen_rate = 113.77;
    constexpr double kroner_rate = 6.57843;
    constexpr double pound_rate = 0.77052;
    
    double value = 1;
    char unit = 0;
    
    cout << "podaj wartość zakonczoną jednostką waluty (y, k, p: ";
    cin >> value >> unit;
    switch (unit)
    {
        
    case 'y' :
        cout << value << " yenów to " << value / yen_rate << " dolców." << endl;
        break;
    case 'k' :
        cout << value << " krone to " << value / kroner_rate << " dolców." << endl;
        break;
    case 'p' :
        cout << value << " pounds to " << value / pound_rate << " dolców." << endl;
        break;
    default:
        cout << "nie znana waluta\n";
        break;
    }

}

// str 109
void f4()
{
    int i = 0;
    while (i<100)
    {
        cout << i << "\t" << i*i << endl;
        ++i;
    }
}

// str 111
void f5()
{
    int i = 0;
    while (i<30)
    {
        cout << char('a' + i) << "\t" << i+97 << endl;
        ++i;
    }
}

// str 113
void f6()
{
        
    for (int i = 32; i < 126; ++i)
        cout << char(i) << "\t" << i << endl;        
}

void f7()
{
    vector<string> vi(30);
    for (auto i:vi)
        cout << i << endl;
}


// str 122
void f8()
{
    vector<double> temps;
    double temp_sum = 0;
    for (double temp; cin >> temp;)
    {
        temps.push_back(temp);
        temp_sum += temp;
    }
        
    // srednia
    cout << "srednia: " << temp_sum/temps.size() << endl;
    
    // mediana
    sort(temps);
    cout << "mediana: " << temps[temps.size()/2] << endl;
}

// str 125
void f9()
{
    vector<string> disliked{"brokół", "dupa", "kwoka"};
    string s;
    while(cin>>s)
    {
        for (auto v:disliked)
            if (s == v) s="BLEEP";
        cout << s << endl;
    }
}

//str 126
void f10()
{
    int a=0,b=0;
    while(cin>>a>>b)
    {
        //ten warunek nie jest nigdy wykonywany
        //petla sie konczy gdy na cin pojaiw się coś innego niż int
        if(a=='|' || b=='|')
            break;
        else
            cout <<"a: "<<a<<", b: "<<b<<endl;
    }
}

//str 126
void f11()
{
    int a=0,b=0;
    while(cin>>a>>b)
    {   
        //ten warunek nie jest nigdy wykonywany
        //petla sie konczy gdy na cin pojaiw się coś innego niż int
        if(a==char('|') || b==char('|'))
        {
            cout << "bye..."<<endl;
            break;
        }
        if(a<b)
            cout <<"the smaller value is: "<<a<<", the larger is: "<<b<<endl;
        else if (a>b)
            cout <<"the smaller value is: "<<b<<", the larger is: "<<a<<endl;
        else
            cout <<"the numbers are equeal"<<endl;
    }
}

void f12()
{
    double a=0.0,b=0.0;
    while(cin>>a>>b)
    {   
        if(a<b)
            cout <<"the smaller value is: "<<a<<", the larger is: "<<b<<endl;
        else if (a>b)
            cout <<"the smaller value is: "<<b<<", the larger is: "<<a<<endl;
        else
            cout <<"the numbers are equeal"<<endl;
    }
}

//dril 5
void f13()
{
    double a=0.0,b=0.0,dif=0.0;
    while(cin>>a>>b)
    {   
        cout << 1.0/100<<endl;
        if(a<b)
        {
            dif=b-a;
            cout <<"the smaller value is: "<<a<<", the larger is: "<<b<<
            " the dif: "<< dif << endl;
        }
        else if (a>b)
        {
            dif=a-b;
            cout <<"the smaller value is: "<<b<<", the larger is: "<<a<<
            " the dif: "<< dif << endl;
        }
        else
            cout <<"the numbers are equeal"<<endl;
        
        if(dif < 1.0/100 && dif>0.0)
                cout <<"the numbers are almost equeal"<<endl;
        
    }
}

//dril 6
void f14()
{
    double a=0.0,smallest=0.0,largest=0.0;
    
    //obsluga pierwszej wklepanej wartosci
    //nie ma jeszcze pojecia najmniejszej i najwiekszej wartosci
    cin >> a;
    cout << "Podałes pierwsza wartość: "<< a << endl;
    
    while(cin>>a)
    {   
        cout << "Podałeś: "<<a;
        
        if(a<smallest)
        {
            cout <<", the smallest so far"<< endl;
            smallest=a;
        }
        else if (a>largest)
        {
            cout <<", the largest so far"<< endl;
            largest=a;
        }
        else
            cout << endl;
    }
}

//dril 8
void f15()
{
    double length=0.0;
    string unit;
    vector<string> allowed_units{"cm","m","in","ft"};
    
    
    while(cin>>length>>unit)
    {   
        //zakladamy ze unit jest lipny
        int bad_unit=1;
        for(auto s:allowed_units)
            if(unit==s) bad_unit=0;
        if(bad_unit)
            cout<< "Nie obsługuje takich jednostek"<<endl;
        else
            cout << "Podałeś: " << length << unit << endl;
        
    }
}

//dril 9
void f16()
{
    double value=0.0,smallest=0.0,largest=0.0,sum=0.0;
    int count=0;
    double normalized_value=0.0;
    string unit;
    int bad_unit=0;
    int first_run=1;
    
    while(cin>>value>>unit)
    {   
        bad_unit=0; //assume good unit
        
        //unit validation and to meters conversion
        if (unit=="cm")      normalized_value=value/100; 
        else if (unit=="m")  normalized_value=value;
        else if (unit=="in") normalized_value=value/100*2.54;
        else if (unit=="ft") normalized_value=value/100*2.54*12;
        else
        {
            //ugly but no other idea how to ignore values of bad units
            cout<<"Bad unit, ignoring"<<endl;
            bad_unit=1;
            --count; //don't count bad values
        }

        //special case of first loop
        if(first_run && !bad_unit)
        {
            sum=normalized_value;
            smallest=normalized_value;
            largest=normalized_value;
            first_run=0;
        }
        else if(!bad_unit)
        {
            sum+=normalized_value;
            if(normalized_value<smallest) smallest=normalized_value;
            else 
            if (normalized_value>largest) largest=normalized_value;
        }
        ++count;
    }
    cout << "Smallest m: "<< smallest<<endl;
    cout << "Largest m: "<< largest<<endl;
    cout << "Sum m: "<< sum<<endl;
    cout << "Counter: "<< count <<endl;
}


//dril 10, 11
void f17()
{
    double value=0.0,smallest=0.0,largest=0.0,sum=0.0;
    int count=0;
    double normalized_value=0.0;
    string unit;
    int bad_unit=0;
    int first_run=1;
    vector<double> values;
    
    while(cin>>value>>unit)
    {   
        bad_unit=0; //assume good unit
        
        //unit validation and to meters conversion
        if (unit=="cm")      normalized_value=value/100; 
        else if (unit=="m")  normalized_value=value;
        else if (unit=="in") normalized_value=value/100*2.54;
        else if (unit=="ft") normalized_value=value/100*2.54*12;
        else
        {
            //ugly but no other idea how to ignore values of bad units
            cout<<"Bad unit, ignoring"<<endl;
            bad_unit=1;
            --count; //don't count bad values
        }

        //special case of first loop
        if(first_run && !bad_unit)
        {
            sum=normalized_value;
            smallest=normalized_value;
            largest=normalized_value;
            first_run=0;
        }
        else if(!bad_unit)
        {
            sum+=normalized_value;
            if(normalized_value<smallest) smallest=normalized_value;
            else 
            if (normalized_value>largest) largest=normalized_value;
        }
        
        values.push_back(normalized_value);
        ++count;
        
    }
    
    sort(values);
    cout << "Values entered (sorted and metered): "; 
    for(auto v: values)
        cout << v << ", ";
    cout << endl;
    
    cout << "Smallest m: "<< smallest<<endl;
    cout << "Largest m: "<< largest<<endl;
    cout << "Sum m: "<< sum<<endl;
    cout << "Counter: "<< count <<endl;
    
}

//
// Exercises, page 128
//

//ex.2
void ex2()
{
    vector<double> temps;
    for (double temp; cin >> temp;)
        temps.push_back(temp);
    
    // median
    sort(temps);
    double median=0;
    int size=temps.size();

    if(size%2 != 0)
        median=temps[(size-1)/2];
    else
        median=(temps[size/2-1] + temps[size/2])/2;
    
    cout << "median: " << median << endl;
}

//ex. 3
void ex3()
{
    vector<double> dists;
    double dist=0;
    double sum=0;
    double smallest=0;
    double largest=0;
    
    while(cin>>dist)
    {
        dists.push_back(dist);
        sum+=dist;
    }
    if (dists.size() == 0) error("no distances, exiting...");
    
    //original BS resolution has bug, min value is always 0
    // this is the fix
    smallest=dists[0];
    largest=dists[0];
        
    for(auto i=0; i<dists.size(); ++i)
    {
        if ( dists[i] < smallest )
            smallest=dists[i];
        else if ( dists[i] > largest )
            largest=dists[i];
    }

    cout << "sum of the distances: " << sum << endl;
    cout << "the smallest distance: " << smallest<< endl;
    cout << "the largest distance: " << largest<< endl;
    cout << "mean: " << sum/dists.size() <<endl;
}

/* przykladowe wartosci
42
---

50 <y lm=lm hm=mid mid=(mid-lm)/2+lm(25) 
50/2=25 <n lm=mid mid=(hm-lm)/2+lm hm=hm
mid=37 <n lm=mid(37) mid=(50-37)/2+37(43) hm=50
mid=43 <y lm=(37) mid=(mid-lm)/2+lm(40) hm(43) 
mid=40 <n lm=40 mid=41 hm=43
mid=41 <n lm=41 mid=42 hm=43

if hm-lm<=2 stop wynik=mid

    
    23
    ---
    mid=50 <y hm=50 mid=25
    mid=25 <y hm=25 mid=12
    mid=12 <n lm=12 mid=18 
    mid=18 <n lm=18 mid=21 18 21 25
    mid=21 <n lm=21 mid=23 hm=25
*/

//ex. 4
void ex4()
{
    char answer=' ';
    int lower_margin=0;
    int higher_margin=100;
    bool run=true;
    int mid_number=50;
    
    cout << "Think of a number 1-100. Answer only y/n."<<endl;
    while(run)
    {
        cout << "Is the number s(maller), b(igger) or c(orrect): " 
             << mid_number << "? ";
        cin >> answer;
        
        if(answer=='s')
        {
            higher_margin = mid_number;
            mid_number = (mid_number-lower_margin)/2 + lower_margin;
        }
        else if(answer=='b')
        {
            lower_margin = mid_number;
            mid_number = (higher_margin-lower_margin)/2 + lower_margin;
        }
        else if(answer=='c')
            run=false;
        else
            cout<<"Wrong answer! s(maller), b(igger) or c(orrect)" << endl;
        
        //safe guess there is only one number in between
        if(higher_margin-lower_margin<=2)
            run=false;
    }
    cout << "Your number is: "<<mid_number<<endl;
}

//ex.5
void ex5()
{
    double val1=0;
    double val2=0;
    char oper=' ';
    bool run=true;
    
    while(run)
    {
        cout << "Enter 2 values and operator (val1 val2 oper): ";
        if (cin>>val1>>val2>>oper)
            switch (oper)
            {
                case '+' :
                    cout << "The sum of " << val1 << " and " << val2 
                        << " is " << val1 + val2 << endl;
                    break; 
                case '-':
                    cout << "The subtraction of " << val1 << " and " << val2 
                        << " is " << val1 - val2 << endl;
                    break;
                case '*':
                    cout << "The multiplication of " << val1 << " and " << val2 
                        << " is " << val1 * val2 << endl;
                    break;
                case '/':
                    if (val2!=0) cout << "The division of " << val1 << " and " << val2 
                        << " is " << val1 / val2 << endl;
                    else
                        cout << "Div by 0 prohibitetd!"<<endl;
                    break;
                default:
                    cout << "Unknown operation!" << endl;
                    run=false;
                    break;
            }
        else
            run=false;
        
    }

}

//ex.6
void ex6()
{
    vector<string> s_values{"zero","one","two","three","four","five",
                            "six","seven","eight","nine"};
    int val=0;
    string s_number;
    bool bad_input=true; //it is reset in a loop traversing the vector     
    int conv_value=0;
    bool run=true;
    
    while(run)
    {
        cout << "Enter value (0-9): ";
        cin>> val;
        if(val>=0 && val<=9)
            cout << val << " means: "<< s_values[val] << endl;
        else
            cout << "out of range" << endl;
        
        cout << "Enter spelled-out number (like: one, two, three), q=quit: ";
        cin >> s_number;
        for(int i=0; i<s_values.size(); ++i)
        {
            if(s_number == s_values[i])
            {
                bad_input=false;
                conv_value=i;
                
            }
            if(s_number=="q")
                run=false;
        }
        
        if(bad_input==false) 
            cout << s_number << " is " << conv_value << endl;
        else
            cout << "Wrong number" << endl;
        
        bad_input=true;
    }
    
}


int main()
try
{
    ex6();
}
catch (runtime_error e)
{
    cout << e.what() << endl;
}

