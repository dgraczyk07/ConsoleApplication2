 #include <iostream>
 #include <cstdlib>
 using namespace std;

 int main()
 {   /*zad. 1.1
     for (int i = 0; i < 10; i++)
     {
         cout << i << endl;
     }

     cout << "Koniec programu" << endl;

     //zad. 1.2
     for (int i = 0; i <= 10; i++)
     {
         cout << i << endl;
     }

     cout << "Koniec programu" << endl;

     //zad. 1.3
     for (int i = 5; i <= 7; i++)
     {
         cout << i << endl;
     }

     cout << "Koniec programu" << endl;

     for (int i = 5; i < 7; i++)
     {
         cout << i << endl;
     }

     //zad. 1.4
     cout << "Koniec programu" << endl;

     for (int i = 0; i <= 10; i += 2)
     {
         cout << i << endl;
     }

     cout << "Koniec programu" << endl;

     //zad. 1.5
     for (int i = 10; i >= 0; i--)
     {
         cout << i << endl;
     }

     cout << "Koniec programu" << endl;

     //zad. 2
     //int fahr, celsius; //zmienne typu int 
     //int start, limit, krok; //zmienne typu int 

     //start = 0; //przypisz 0 do start 
     //limit = 200; //przypisz 200 do limit 
     //krok = 20; //przypisz 20 do krok 

     //fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
     //while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
         //celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
         //cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
         //fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
     

     //zad. 3
   
 //{
     //int fahr, celsius; //zmienne typu int 
     //int start, limit, krok; //zmienne typu int 

     //start = 0; //przypisz 0 do start 
     //limit = 200; //przypisz 200 do limit 
     //krok = 20; //przypisz 20 do krok 
     //for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14
     //{
         //float celsius = (5.0 / 9.0) * (fahr - 32.0);
         //printf("%3.0f \t %6.1f \n", fahr, celsius);
     //}
 //}
        //zapis jest dok³adniejszy


 //zad. 5.
 /*int fahr, celsius; //zmienne typu int 
 int start, limit, krok; //zmienne typu int 
 start = 0; //przypisz 0 do start 
 limit = 200; //przypisz 200 do limit 
 krok = 20; //przypisz 20 do krok 

 for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) //kod 02_16
 {
     float celsius = (5 / 9) * (fahr - 32.0);
     cout << fahr << "\t" << celsius << endl;
 }
    //w zapisie pojawiaj¹ siê zera

    */

 /*zad. 6.
 
     int fahr, celsius; //zmienne typu int 
     int start, limit, krok; //zmienne typu int 
     start = 0; //przypisz 0 do start 


     cout << "Podaj wartosc zmiennej limitu:\n";
     cin >> limit;

     cout << "Podaj wartosc zmiennej kroku:\n";
     cin >> krok;


     for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) //kod 02_16
     {
         float celsius = (5.0 / 9.0) * (fahr - 32.0);
         cout << celsius;
     }
     */

/* zad.7.
    
float liczba;
for (int i = 0; i < 10; i++) {
    cout << "Podaj liczbe rzeczywista: ";
    cin >> liczba;


    if (liczba > 0) {
        cout << "Liczba " << liczba << " jest dodatnia" << endl;
    }
    
}
*/

/* zad.8.

    int i;
     for (i = 0; i <= 100 ; i++) {
         if (i % 2 == 0) {
             cout << i << endl;
         }

     }
     */

/*zad.9.

    int n, i;
    cout << "Podaj liczbe przez ktora maja byc podzielne liczby od 0 do 100: " << endl;
    cin >> n;
    if (n == 0) {
        cout << "nie mozna dzielic przez 0!" << endl;
        return 1;
    }

    for (int i = 0; i <= 100; i++){
        if (i % n == 0) {
            cout << i << endl;
        }
    }*/

/*zad.10.

int n, i;
int ilosc = 0;
cout << "Podaj przez ile maja byc podzielne liczby: " << endl;
cin >> n;
if (n == 0) {
    cout << "nie mozna dzielic przez 0!" << endl;
    return 1;
}
for (i = 0; i <= 100; i++) {
    if (i % n == 0) {
        ilosc++;
    }
}
cout << "Liczba liczb podzielnych przez " << n << " wynosi: " << ilosc << endl;
*/

/*zad.11.

    int i, a, b;
    cout << "Podaj wartosc calkowita a: " << endl;
    cin >> a;
    cout << "Podaj wartosc calkowita b: " << endl;
    cin >> b;

    if (a > b) {
        for (i=b; i<=a; i++) {
            if (i % 3 == 0) {
                cout << i << endl;
            }
        }
    } 
    else if (b > a) {
        for (i = a; i <= b; i++) {
            if (i % 3 == 0) {
                cout << i << endl;
            }
        }
    }
    else if (a == b) {
        cout << "Podane liczby sa sobie rowne" << endl;
    }
    */

/*zad.12.

int n;
cout << "Podaj dla ilu liczb rzeczywistych ma byc policzona srednia arytmetyczna: " << endl;
cin >> n;

if (n == 0) {
    cout << "liczba musi byc wieksza od 0!!!" << endl;
    return 1;
}

float i, liczba;
float suma = 0;
for (i = 1; i <= n; i++) {
    cout << "Podaj " << i << " liczbe" << endl;
    cin >> liczba;
    suma += liczba;
}

double srednia = suma/n;
cout << "Srednia arytmetyczna wynosi: " << srednia << endl;

return 0;
*/

/*zad.13.

int i;
for (i = 100; i >=0 ; i--) {
        cout << i << endl;

    }
    */

/*zad.14.
    
int a, b, c;
cout << "podaj 3 liczby: " << endl;
cin >> a >> b >> c;


if (a <= b && a <= c) {
    cout << "Liczba " << a << " jest najmniejsza";
}
else if (b <= a && b <= c) {
    cout << "Liczba " << b << " jest najmniejsza";

}
else if (c <= a && c <= b) {
    cout << "Liczba " << c << " jest najmniejsza";
}
*/

/*zad.15.

    int i, n, m;
    cout << "Ile liczb wylosowac?" << endl;
    cin >> n;
    cout << "Podaj gorna granice przedzialu: " << endl;
    cin >> m;

    for (i = 0; i <n; i++) {
        cout << rand() % (m+1) << endl;
        
    }
    */

/*zad.16.
    int n;
    cout << "Podaj szczesliwy numerek z zakresu od 1 do 10: " << endl;
    cin >> n;

    if (n > 0 && n <= 10){
        int licznik = 0;
        cout << "Wylosowane liczby: " << endl;

        for (int i = 0; i < 10; i++) {
            int wylosowana = rand() % 10 + 1;
            cout << wylosowana << " ";

            if (wylosowana == n) {
                licznik++;
            }
        }
        cout << endl << "Szczesliwy numerek pojawil sie: " << licznik << " razy" << endl;
        
    }
 
 else {
     cout << "Podany numer nie jest z wymaganego przedzialu!!!" << endl;


        }
        */
 }

 