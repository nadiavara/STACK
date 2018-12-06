#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
 
struct tumpukan  
{
 char data[15][100], max[15];  
 int i, j;
} stack;
 
void push()  
{
 stack.i++;
 cout << "Pilih (1-4): ";
 cin >> stack.max;
 strcpy (stack.data[stack.i], stack.max);  
}
 
void pop() 
{
 if (stack.i > 0)
 {
  cout << "Data pemain bola" << stack.data[stack.i] << endl;  
  stack.i--; stack.j--;
 }
 else
  cout << "Data pemain bola" << endl;
  cout << "----------------"<< endl;
  }
void view (int n)  
{
 if (stack.j > 0)  
 {
  for (int e = n; e >= 1; e--)
  {
   cout << stack.data[e] << endl;
  }
 }
 else
  cout << "Isi stack " << endl;  
  cout << "---------" << endl;
}
 
void clear()  
{
 stack.j = 0; stack.i = 0;  
}
 
main (void)
{
 int n, pilih,no;
 char nama,posisi;
 ayo:
  cout << "STACK MENGGUNAKAN LINKED LIST\n";
  stack.data[n];
  stack.i = 0;
  stack.j = 0;
  balik: 
   
   cout << "\n1. PUSH\n2. POP\n3. TAMPIL\n4. EXIT\n";
   cout << "\npilih(1-4): ";  cin >> pilih;
   cout << "\n";
   if (pilih == 1)  
   {
    if (stack.j < n)
    {
     stack.j++;  push();
    }
    else
     {
      cout << "Data pemain bola" << endl;
      cout << "----------------"<< endl;
      cout << "\nNo Punggung :";cin>>no;
      cout << "\nNama :";cin>>nama;
      cout << "\nPosisi :";cin>>posisi;
      getch();
     }
     goto ayo;
   }
   else
    if (pilih == 2)
    {
     pop (); 
	getch();  goto ayo;
    }
    else
     if (pilih == 3)
     {
      view (stack.i);  getch();  goto ayo;
     }
     else
      if (pilih == 4)
      {
       clear();  getch();  goto balik;
      }
      else
       if (pilih == 5)
       {
        getch();  goto ayo;
       }
       else
        {
         cout << "Stack Kosong!!";
         getch();  goto ayo;
        }
    }
