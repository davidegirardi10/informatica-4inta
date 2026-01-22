//#include "StdAfx.h"
#include "ApplicationModel.h"
#include <string.h>
using namespace std;

	ApplicationModel::ApplicationModel():
		
	Model()
	{
		credito=0;
		 
		bevande[0] = "Espresso";
		bevande[1] = "Lungo";
		bevande[2] = "Macchiato";
		bevande[3] = "Cappuccino";
		bevande[4] = "Orzo";
		bevande[5] = "Ginseng";
		bevande[6] = "Cioccolato";
		bevande[7] = "Latte";
		bevande[8] = "The limone";

		costo[0]=0.50;
		costo[1]=0.50;
		costo[2]=0.50;
		costo[3]=0.50;
		costo[4]=0.70;
		costo[5]=0.70;
		costo[6]=0.60;
		costo[7]=0.50;
		costo[8]=0.60;
		

	}

	int ApplicationModel::getCredito (){
		return credito;
	};
	void ApplicationModel::aggiungicredito(float euro){
		credito +=euro;
		notify();
	};
	int ApplicationModel::paga(int i, bool *x){
//		if(credito >= costo[i]){
			credito -= costo[i];
			*x=true;
						cout << "DEBUG CREDITO= "<<credito<<" !!!!!!!"<<costo[i]<<endl;

			notify();
/*		}
		else {
			*x=false;
			notify();
		}
		
*/		

	};
	int ApplicationModel::getprezzo(int i){
		return costo[i];
	};
	string ApplicationModel::getBevanda(int i){
		return bevande[i];
	};
