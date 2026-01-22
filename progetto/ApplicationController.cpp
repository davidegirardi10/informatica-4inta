//#include "StdAfx.h"
#include "ApplicationController.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>

	using namespace std;
	ApplicationController::ApplicationController(ApplicationView *v):
    	Controller(v)
		{
			//myModel=(ApplicationModel*)model; // per non dover fare ogni volta il cast per usare il model
		}

	void ApplicationController::logic(){
		int scelta = 0;
		float importo = 0.0f;
		int bevanda_scelta = 0;
		int risultato =0;
		bool prova;
		
		cin >> scelta;

		switch(scelta)
		{
			case 0:
				exit(0);
				break;
				
				
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
				
				bevanda_scelta = scelta - 1; // Converti 1-9 in 0-8
				((ApplicationModel*)model)->paga(bevanda_scelta,&prova);
				cout << "prova "<<prova<<endl;
				if(prova == false ) {
					cout << "Credito insufficiente! Premi un tasto per continuare...";
				}
				break;
			case 10: 
				cout << "Inserire importo: ";
				cin >> importo;
				((ApplicationModel*)model)->aggiungicredito(importo);
				break;
				
			default:
				cout << "Scelta non valida! Premi un tasto per continuare...";
				
				break;
		}
	}

void MVC::Controller::handleEvent(MVC::Event * e) {
    // Implementa se necessario
}
