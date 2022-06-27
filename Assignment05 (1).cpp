#include <iostream>
#include <iomanip>

using namespace std;

char z = '*', sel, st;
const double XS = 135.00, SS = 175.00, MS = 190.00, LS = 200.00;//cost of each surfboard
int xs, sm, me, la, sq;
void ShowUsage();
void MakePurchase(int& iTotalXSmall, int& iTotalSmall, int& iTotalMedium, int& iTotalLarge);
void DisplayPurchase(const int iTotalXSmall, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);
void DisplayTotal(const int iTotalXSmall, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);
int main() //required functions
{
  cout << setw(61) << setfill('*') << z << endl;
  cout << setw(5) << setfill('*') << z << " Welcome to my Johonny Utah's PointBreak Surf Shop " << setw(5) <<setfill(z) << z << endl;
  cout << setw(61) << setfill(z) << z << endl; 
  cout << endl;
  cout << endl;// intro to program
  int iTotalSmall = 0;
  int iTotalMedium = 0;
  int iTotalLarge = 0;
  int iTotalXSmall = 0;

  ShowUsage();
  while (sel)
  {
    if (sel == 'S'||sel == 's')
      ShowUsage();
    else if (sel == 'P'||sel == 'p')
      MakePurchase(iTotalSmall,iTotalMedium ,iTotalLarge);
    else if (sel == 'C'||sel == 'c')
      DisplayPurchase(iTotalSmall,iTotalMedium ,iTotalLarge);
    else if (sel == 'T'||sel == 't')
      DisplayTotal(iTotalSmall,iTotalMedium ,iTotalLarge);
    else
      cout<<"Thank you"<<endl;
    return 0;
    }//determines which function to use based on user input
  return 0;
  }
void ShowUsage()
{
    cout << "To show program usage 'S'" << endl;
    cout << "To purchase a surfboard press 'P'" << endl;
    cout << "To display current purchases press 'C'" << endl;
    cout << "To display total amount due press 'T'" << endl;
    cout << "To quit the program press 'Q'" << endl;
    cout << endl;
    cout << "Please enter selection: ";
    cin >> sel;
} //asks user to input a character inorder to determine which function to run.
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge)
{
    cout << "Please enter the quantity and type (S = small, M = medium, L = large) of surfboard you would like to purchase: ";
    cin >> sq;
    cin >> st;
    if (st == 's' || st == 'S')
      iTotalSmall = sq + iTotalSmall;
    else if (st == 'm' || st == 'M')
      iTotalMedium = sq + iTotalMedium;
    else if (st == 'l' || st == 'L')
      iTotalLarge = sq + iTotalLarge;
    else if (st == 'x' || st == 'X')
      iTotalLarge = sq + iTotalLarge;
  }//asks user how much of each type of surfboard the user wants to purchase
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{
  const double SS = 175.00, MS = 190.00, LS = 200.00;
if (iTotalSmall >= 1)
  cout << "The total number of small surfboards is " << iTotalSmall << endl;
else if (iTotalMedium >= 1)
  cout << "The total number of medium surfboards is " << iTotalMedium << endl;
else if (iTotalLarge >= 1)
  cout << "The total number of large surfboards is " << iTotalLarge << endl;
else  if (iTotalXSmall >= 1)
  cout << "The total number of small surfboards is " << iTotalXSmall << endl;
else
  cout << "No Purcahses made yet" << endl;
}//the number of surfboards being purchased is calculated when the number is greater than or equal to 1.
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{
  if(iTotalSmall > 0)
    cout<<"The total number of small surfboards is " << iTotalSmall << " at a total of $"<<iTotalSmall*SS<<endl;
  else if(iTotalMedium > 0)
    cout<<"The total number of medium surfboards is " << iTotalMedium << " at a total of $"<< iTotalMedium*MS<<endl;
  else if(iTotalLarge > 0)
    cout<<"The total number of large surfboards is "<<iTotalLarge << " at a total of $"<<iTotalLarge*LS<<endl<<endl;
  else if(iTotalXSmall > 0)
    cout<<"The total number of large surfboards is "<<iTotalXSmall << " at a total of $"<<iTotalXSmall*XS<<endl<<endl;
  else 
    cout << "No Purchases made yet"; 
  
}//The number of surfboards and total pay

  

