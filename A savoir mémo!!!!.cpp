int a = 5;
int b = 11;
int c = b%a;
std::cout << "The remainder of " << b << " divided by " << a << " is: " << c << std::endl;

double x = 10.5;
float y = 3.2f;
int product = { x*y};
int quotient = {x/y};
int substract = {x-y};
int sum = {x+y};
int modulo = {x%y};// ici c'est le reste qu'on trouve en divisant x par y, mais comme x et y sont des nombres à virgule flottante, le résultat sera un nombre à virgule flottante également.
//Note : Precedence = wich operation to do first
//Note : Associativity : wich direction or wich order to do the operations in case of same precedence

int value = 10;
    std::cout << "The value is (incrementing): " << value++ << std::endl;// ici on affiche la valeur de value avant de l'incrémenter
    std::cout << " the value is : " << value << std::endl;// ici on affiche la valeur de value après l'incrémentation
    std::cout << std::endl;
    int value2 = 10;
    std::cout << "The value is (decrementing): " << value2-- << std::endl;// ici on affiche la valeur de value avant de la décrémenter
    std::cout << " the value is : " << value2 << std::endl;// ici on affiche la valeur de value après la décrémentation
     int value = 10;
    ++value;
    std::cout << "the value is (incrementing): " << value << std::endl;
    --value;
    std::cout << "the value is (decrementing): " << value << std::endl;


int value = 10;
value +=5;
std::cout << "The value is (adding 5): " << value << std::endl;
int Value = 7;
Value *=16;
std::cout << "The value is" << Value <<"(multiplying by 16): " << Value <<std::endl;
int val = 10;
val -=7;
std::cout << "The value is (subtracting 7): " << val << std::endl;
int g = 6;
g /=2;
std::cout << "The value is (divided by 2) : " << g  << std::endl;
int h = 10;
 h%=7;
 std::cout << "The value is equal to 10. After applying the modulo operator with 7 the value is : " << h << std::endl;
 int number1 {40 };
 int number2 {60};
 std::cout << " number1== number2 :" << (number1==number2) << std::endl;
 int number3 {40 };
 int number4 {60};
 std::cout << " number3<= number4 :" << (number3<=number4) << std::endl;
 int number5 {40 };
 int number6 {60};
 std::cout << " number5>= number6 :" << (number5>=number6) << std::endl;
 int number7 {40 };
 int number8 {60};
 std::cout << " number7<= number8 :" << (number7<=number8) << std::endl;
 int number9 {40 };
 int number10 {60};
 std::cout << " number9!= number10 :" << (number9!=number10) << std::endl;
int number {40 };
int number2 {10};
std::cout<< std::endl;
std::cout << "comparing variables  " << std::endl;
std::cout << std::boolalpha;
std::cout << "number > number2: " << (number > number2) << std::endl;
// != cela veut dire différent de, donc si number est différent de number2, le résultat sera true, sinon false.
 bool a {true};
 bool b {false};
 bool c {true};
  std::cout << std::boolalpha;
  std::cout << std::endl;
  std::cout << " a&&b : " << ( a &&b ) << std::endl;
  std::cout << " a||b : " << ( a || b ) << std::endl; 
  std::cout << "a!c : " << (a!=c) << std::endl;
   int d{45};
 int e{20};
int f{11};
 std::cout << std::endl;
 std::cout << "Relational and logic operations on integers" << std::endl;

 std::cout << std::endl;
 std::cout << "(d>e) && (d>f): " << ((d>e) && (d>f)) << std::endl;
 std::cout << "(d==e)|| (e<=f): " << ((d==e) || (e<=f)) << std::endl;
 std::cout << "(d<e) || (d>f): " << ((d<e) || (d>f)) << std::endl;
 std::cout << "(d>f) && (d>e) && (f<=d): " << ((d>f) && (d>e) && (f<=d)) << std::endl;


  std::cout << "unformatted table : " << std::endl;
    std::cout << " Daniel" << " "<< "Gray"  << " 25" << std::endl;
    std::cout << " John" << " "<< "Smith" << " 30" << std::endl;
    std::cout << " Mary" << " "<< "Johnson" << " 28" << std::endl;
    std::cout << " Joe " << " "<< "Williams" << " 35" << std::endl;
    std::cout << "Josh " << " "<< "Brown" << " 22" << std::endl;
    std :: cout << "Izaiah" << " "<< "Davis" << " 27" << std::endl;
    std::cout << std::endl;
    std::cout << "formatted table : " << std::endl;
    std::cout << std::setw(10) << "Last Name" << std::setw(10) << "First Name" << std::setw(10) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray"  << std::setw(10) << "25" << std::endl;
    std::cout << std::setw(10) << "John" << std::setw(10) << "Smith" << std::setw(10) << "30" << std::endl;
    std::cout << std::setw(18) << "Mary" << std::setw(10) << "Johnson" << std::setw(10) << "28" << std::endl;
    std::cout << std::setw(18) << "Joe " << std::setw(10) << "Williams" << std::setw(10) << "35" << std::endl;
    std::cout << std::setw(18) << "Josh " << std::setw(10) << "Brown" << std::setw(10) << "22" << std::endl;
    std::cout << std::setw(50) << "Izaiah" << std::setw(50) << "Davis" << std::setw(10) << "27" << std::endl;

    bool a {true};
    bool b {false};
    std::cout << std::boolalpha;// This line enables the boolalpha formatting, so that boolean values will be printed as true or false instead of 1 or 0.
    std::cout << "a || b :" << (a ||b) << std::endl;
    std::cout << "a && b :" << (a && b) << std::endl;
    std::cout << "!a :" << !a << std::endl;
    std::cout << "!b :" << !b << std::endl;
    std::cout << std::noboolalpha;// This line disables the boolalpha formatting, so that boolean values will be printed as 0 or 1 instead of true or false.    
    std::cout << std::endl;
    std::cout << "a || b :" << (a ||b) << std::endl;
    std::cout << "a && b :" << (a && b) << std::endl;
   int pos_num {10};
    int neg_num {-10};
    std::cout << std::setw(10) << pos_num << std::endl;
    std::cout << std::setw(10) << neg_num << std::endl;
    std::cout << std::setw(10) << "pos_num : " <<  std::setw(10) <<pos_num << std::endl;
    std::cout << std::setw(10) << "neg_num : " << std::setw(10) << neg_num << std::endl;
    std::cout << std::showpos;// This will show the positive sign for positive numbers
    std::cout << std::setw(10) << "pos_num : " << std::setw(10) << pos_num << std::endl;
    std::cout << std::setw(10) << "neg_num : " << std::setw(10) << neg_num << std::end
    std::cout << std::noshowpos;// This will hide the positive sign for positive numbers
    std::cout << std::setw(10) << "pos_num : " << std::setw(10) << pos_num << std::endl;
    std::cout << std::setw(10) << "neg_num : " << std::setw(10) << neg_num << std::endl;
    std::dec $\rightarrow$ dis au terminal : "Parle-moi en décimal (humain normal)".
    std::oct $\rightarrow$ dis au terminal : "Parle-moi en octal (base 8)".
    std::hex $\rightarrow$ dis au terminal : "Parle-moi en hexadécimal (base 16)".
// Les nombres négatifs sont des nombres que le compilateur ignore complètement donc on ne peut 
pas faire de transformation en octal, hexa ou decimal. Donc si on veut faire une transformation en octal, hexa ou decimal, il faut que le nombre soit non décimal.
//Pour converrtir directement    
int  pos_int = {7171717};

std:: cout << std::showbase;
std::cout << "pos_int(dec): " << std::dec << pos_int << std::endl;
std::cout << "pos_int(hex): " << std::hex << pos_int << std::endl;
std::cout << "pos_int(oct): " << std::oct << pos_int << std::endl;
#include <iostream>

int main() {
    // Déclaration des variables d'après l'affichage de l'écran noir
    double a {3.141592653589793};
    double b {2006.0};
    double c {0.000000000134}; // Équivaut à 1.34e-10

    std::cout << std::endl;
    std::cout << "double values (scientific) : " << std::endl;
    
    // On active la notation scientifique
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (back to defaults) : " << std::endl;
    
    // La ligne magique pour TOUT réinitialiser par défaut
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

 
  double  a = 1.1465415154654132156413203;
std::cout << std::setprecision(14);
std::cout << "a ( precision (14)) : " << a << std::endl;

Bien penser à mettre la précision avant d'écrire le nombre de chiffre qu'on veut!!!
  
  
  std::cout << std::uppercase ça force l'affichage en majuscule par exemple sur un True ou False ça met TRUE ou FALSE
  
  
  
  std::cout.unsetf(std::ios::scientific | std::ios::fixed); ça dit qu'on remet à zéro si c'était en scientifique ou en fixed
  
   std::cout << std::endl;
    std::cout << "1.0 with show point : " << std::showpoint << 1.0 << '\n'
              << "1.0 with no show point : " << std::noshowpoint <<1.0 << '\n';

set::internal permet d'aligner des éléments parmi un std::setw
std::setfill() permet de mettre tous les espaces que je veux avec des tirets, des points, etc
std::flush (Vider la tuyauterie)

Pour comprendre std::flush, il faut savoir comment le C++ affiche du texte à l'écran.

Écrire dans la console demande beaucoup d'efforts à ton processeur. Pour aller plus vite, le C++ ne va pas afficher chaque lettre une par une dès que tu l'écris. Il accumule le texte dans un réservoir secret en mémoire vive appelé le Buffer (la mémoire tampon). Quand le réservoir est plein, il envoie tout d'un coup à l'écran.

std::flush est une commande qui dit à l'ordinateur : "N'attends pas que le réservoir soit plein. Force l'affichage immédiat de tout ce qui est en attente dans la console, là, tout de suite."
Quelle différence avec std::endl ?

Tu utilises std::endl depuis le début. En réalité, std::endl fait deux actions en même temps :

    Il passe à la ligne suivante (\n).

    Il fait un std::flush automatique pour vider le réservoir.

std::flush, lui, vide le réservoir sans passer à la ligne. Tu ne l'utiliseras quasiment jamais au début,
 sauf plus tard si tu codes des systèmes en temps réel ou des barres de chargement qui doivent s'actualiser instantanément sur la même ligne !
  
  


std::numeric_limits<T>::max() C'est le plus grand nombre possible
std::numeric_limits<T>::lowest() fait la même chose que std::numeric_limits<T>::min() positif donc int uniquement
Ensuite, std::numeric_limits<T>::min() en nombre à virgule renvoie le premier pas positif faisable après 0
Là où std::numeric_limits<T>::lowest () est dans le négatif plein
 Voici ta fiche mémo pour la bibliothèque de fonctions mathématiques.Pour utiliser toutes ces fonctions, tu dois obligatoirement ajouter cet include tout en haut de ton code :C++#include <cmath>
📋 FICHE MÉMO : <cmath> (Fonctions Mathématiques)🔢 
Arrondis & Valeur Absoluestd::abs(x) (Absolute Value)
Ce que ça fait : Supprime le signe moins. 
Renvoie la valeur positive d'un nombre.
Exemple : std::abs(-4.5) $\rightarrow$ 4.5std::round(x) 
(Arrondi classique)Ce que ça fait : Arrondit à l'entier le plus proche
 (.5 va au supérieur).Exemple : std::round(3.4) $\rightarrow$ 3.0 | std::round(3.6) $\rightarrow$ 4.0std::floor(x) 
 (Arrondi vers le bas / Plancher)Ce que ça fait : Arrondit à l'entier inférieur, peu importe ce qu'il y a après la virgule.
 Exemple : std::floor(3.99) $\rightarrow$ 3.0std::ceil(x) (Arrondi vers le haut / 
 Plafond)Ce que ça fait : Arrondit à l'entier supérieur dès qu'il y a une virgule.
 Exemple : std::ceil(3.01) $\rightarrow$ 4.0🧮 Puissances, Racines & Logarithmesstd::pow(base, exposant) 
 (Power)Ce que ça fait : Calcule la puissance d'un nombre
  ($base^{exposant}$).Exemple : std::pow(2, 3)
   $\rightarrow$ 8.0 (car $2 \times 2 \times 2 = 8$)std::sqrt(x) (Square Root)Ce que ça fait : Calcule la racine carrée ($\sqrt{x}$).
   Exemple : std::sqrt(9) $\rightarrow$ 3.0std::exp(x) 
   (Exponentielle)Ce que ça fait : Calcule l'exponentielle de x ($e^x$).
   Exemple : std::exp(1) $\rightarrow$ 2.71828std::log(x) 
   (Logarithme népérien)Ce que ça fait : Calcule le logarithme naturel 
   ($\ln(x)$), l'inverse de l'exponentielle.Exemple : std::log(2.71828) $\rightarrow$ 1.0📐 Trigonométrie 
(Attention : les angles sont en Radians !)std::sin(x) : Calcule le sinus de l'angle $x$.std::cos(x) : Calcule le cosinus de l'angle $x$.std::tan(x) : Calcule la tangente de l'angle $x$.


  auto savings = -5000.0;
  auto weight = 7.7;
   std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
   std::cout << "Abs of savings is : " << std::abs(savings) << std::endl;
                
                
                
                
                 pour exponentielle
         auto exponential = std::exp(10.0);
        std::cout << "The exponential of 10 is : "<< exponential << std::endl;
        std::cout << "3^4 is : " << std::pow(3.0, 4.0) << std::endl;
        std::cout << "9^3 is : " << std::pow(9.0, 3.0) << std::endl;







HYPER IMPORTANT















  
    return 0;
}
#include <iostream>
#include <cmath>

int main (){
char statut;
    double heures_travaillees;
    int anciennete;

    // Variables de calcul (à initialiser proprement)
    double taux_horaire = 0.0;
    double salaire_de_base = 0.0;
    double prime = 0.0;
    double salaire_total = 0.0;

    // 1. DEMANDE DES INFOS
    std::cout << "Entrez le statut (J, S, M) : ";
    std::cin >> statut;
    std::cout << "Entrez le nombre d'heures travaillees : ";
    std::cin >> heures_travaillees;
    std::cout << "Entrez le nombre d'annees d'anciennete : ";
    std::cin >> anciennete;

// ==========================================
    // TODO 1 : Détermine le 'taux_horaire' avec un SWITCH
    // ==========================================

    switch (statut){
 case 'J':
 std::cout << "15€ de l'heure"<< std::endl;
 taux_horaire = 15;
break;
case 'S':
 std::cout << "25€ de l'heure"<< std::endl;
 taux_horaire = 25;
 break;
 case 'M':
  std::cout << "40€ de l'heure"<< std::endl;
  taux_horaire = 40;
  break;
  default : 
  std::cout << "10€ de l'heure" << std::endl;
  taux_horaire = 10;
  break;


    }


    // ==========================================
    // TODO 2 : Calcule le 'salaire_de_base' avec un IF / ELSE
    // (Attention au calcul de la majoration si heures > 35 !)
    // ==========================================
    if (heures_travaillees==35){
 std::cout << "Votre paie est de : " << heures_travaillees*taux_horaire << std::endl;

    } else  {
        
std::cout << " Votre paie est de : " <<  35*taux_horaire+ (heures_travaillees-35)*1.5<< std::endl;

    }
// ==========================================
    // TODO 3 : Calcule la 'prime' avec un TERNAIRE (anciennete > 5)
    // ==========================================

prime = (anciennete>5) ? 100 : 0;


















   

// Calcul final
    salaire_total = salaire_de_base + prime;

    // 2. AFFICHAGE DU RÉSULTAT
    std::cout << "\n--- FICHE DE PAIE ---" << std::endl;
    std::cout << "Taux horaire applique : " << taux_horaire << " EUR/h" << std::endl;
    std::cout << "Salaire (heures + sup)  : " << salaire_de_base << " EUR" << std::endl;
    std::cout << "Prime anciennete        : " << prime << " EUR" << std::endl;
    std::cout << "SALAIRE TOTAL NET       : " << salaire_total << " EUR" << std::endl;






   



    return 0; 
}
#include <iostream>
#include <cmath>

int main (){
char statut;
    double heures_travaillees;
    int anciennete;

    // Variables de calcul (à initialiser proprement)
    double taux_horaire = 0.0;
    double salaire_de_base = 0.0;
    double prime = 0.0;
    double salaire_total = 0.0;

    // 1. DEMANDE DES INFOS
    std::cout << "Entrez le statut (J, S, M) : ";
    std::cin >> statut;
    std::cout << "Entrez le nombre d'heures travaillees : ";
    std::cin >> heures_travaillees;
    std::cout << "Entrez le nombre d'annees d'anciennete : ";
    std::cin >> anciennete;

// ==========================================
    // TODO 1 : Détermine le 'taux_horaire' avec un SWITCH
    // ==========================================

    switch (statut){
 case 'J':
 std::cout << "15€ de l'heure"<< std::endl;
 taux_horaire = 15;
break;
case 'S':
 std::cout << "25€ de l'heure"<< std::endl;
 taux_horaire = 25;
 break;
 case 'M':
  std::cout << "40€ de l'heure"<< std::endl;
  taux_horaire = 40;
  break;
  default : 
  std::cout << "10€ de l'heure" << std::endl;
  taux_horaire = 10;
  break;


    }


    // ==========================================
    // TODO 2 : Calcule le 'salaire_de_base' avec un IF / ELSE
    // (Attention au calcul de la majoration si heures > 35 !)
    // ==========================================
    if (heures_travaillees==35){
 std::cout << "Votre paie est de : " << heures_travaillees*taux_horaire << std::endl;

    } else  {
        
std::cout << " Votre paie est de : " <<  35*taux_horaire+ (heures_travaillees-35)*1.5<< std::endl;

    }
// ==========================================
    // TODO 3 : Calcule la 'prime' avec un TERNAIRE (anciennete > 5)
    // ==========================================

prime = (anciennete>5) ? 100 : 0;


















   

// Calcul final
    salaire_total = salaire_de_base + prime;

    // 2. AFFICHAGE DU RÉSULTAT
    std::cout << "\n--- FICHE DE PAIE ---" << std::endl;
    std::cout << "Taux horaire applique : " << taux_horaire << " EUR/h" << std::endl;
    std::cout << "Salaire (heures + sup)  : " << salaire_de_base << " EUR" << std::endl;
    std::cout << "Prime anciennete        : " << prime << " EUR" << std::endl;
    std::cout << "SALAIRE TOTAL NET       : " << salaire_total << " EUR" << std::endl;






   



    return 0; 
}#include <iostream>

int main() {


for (int i = 0; i < 150000; i++) {
    std::cout << "i lov c++ " << std::endl;
}



    return 0;
}
#include <iostream>
#include <iomanip>
int main (){
size_t Max_celsieus {45};
std::cout << "<============Table de conversion ==============> " << std::endl;
std::cout << std::endl;
std::cout << std::endl;
std::cout << std::endl;
std::cout << std::endl;


for (size_t c{1}; c<Max_celsieus ; c++){
std::cout << std::setw(5)<< " Celsius is equal to : " << std::endl;
// Calcule les Fahrenheit par rapport au Celsius actuel
        double fahrenheit = (c * 1.8) + 32;

        // Affiche le résultat
        std::cout << std::setw(5) << c << " C = " << std::setw(5) << fahrenheit << std::setw(5) << " F" << std::endl;

}









    return 0;
}size_t J{1};
for (J; J<10; J++) {



    std::cout <<" you now have : "<< J <<std::endl;
}
int choix;

do {
    std::cout << "=== MENU ===" << std::endl;
    std::cout << "1. Rejouer" << std::endl;
    std::cout << "2. Quitter" << std::endl;
    std::cin >> choix;
} while (choix != 2); // ⚠️ Note le point-virgule obligatoire ici !
break = "J'ai fini / Y a un problème, on ferme la boutique !"

continue = "Pas intéressant, suivant !"