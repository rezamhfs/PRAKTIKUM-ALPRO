#include <iostream>

using namespace std;
int main()
{
int x;
   int y;
   float hasil;

   cout<<"Masukkan Konstanta(x): ";
   cin >> x;
   cout<<"Masukkan Pangkat (y): ";
   cin >> y;
   hasil =1;
   
   if (x<=0)
   {
      hasil =1/hasil;
      cout << "Hasil Perpangkatan adalah: "<<hasil << endl; 
	    }
   else
   {
      if (y<=0)
      {
         if (y==0)
         {
            cout << "Hasil Perpangakatan adalah: "<<hasil << endl;     
			    }
         else
         {
            while (!(x<=0))
            {
               hasil =hasil*y;
               x =x-1;
            }
            hasil =1/hasil;
            cout << "Hasil Perpangakatan adalah: "<<hasil << endl;     
			    }
      }
      else
      {
         while (!(y<=0))
         {
            hasil =hasil*x;
            y =y-1;
         }
         cout << "Hasil Perpangakatan adalah: "<<hasil << endl;      }
   }

   return 0;
}
