
#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"
#include <string.h>
using namespace std;
class ApplicationModel : public MVC::Model { 
	float credito;
	int costo[9];
	string bevande [9];
	

public:
	ApplicationModel();
	int getCredito ();
	void aggiungicredito(float euro);
	int paga(int i);
	int getprezzo(int i);
	string getBevanda(int i);

	
};

#endif

