/* rand example: guess the number */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
using namespace std;
//int randomNumber();
//int f1,f2,f3;
int main ()
{



	srand ( time(NULL) );
	for (int t=0;t<10;t++)
	{
	    int random_x[9];
	    random_x[t] = rand() % 10 + 1;
	    cout<< "\nRandom X = "<<random_x[t];
	}

/*
f1 = randomNumber();
cout << f1 << endl;
f2 = randomNumber();
cout << f2 << endl;


f3 = randomNumber();
cout << f3 << endl;*/

  return 0;
}


int randomNumber(){
	  int iSecret;


	  /* initialize random seed: */
	  srand (time(0));

	  /* generate secret number between 1 and 10: */
	  iSecret = rand() % 10 + 1;
	  return iSecret;
}
