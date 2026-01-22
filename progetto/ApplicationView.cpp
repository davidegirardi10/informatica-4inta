//#include "StdAfx.h"
#include "ApplicationView.h"
#include <iostream>
#include <cstdlib>

ApplicationView::ApplicationView(ApplicationModel *m):
	View(m)
{}

//overriding della funzione MVC::View::draw()
void ApplicationView::draw()
{
	//system("cls");  
    cout << endl;
 
    

/*	cout << "  ---------------------------------------------------- " << endl;
	cout << "  ID VIEW:"<< this << endl;
	cout << "  ---------------------------------------------------- " << endl;
*/
	cout << "  ---------------------------------------------------- " << endl;
	cout << " |                  Macchina del caffe                |" <<endl;
	cout << "  ---------------------------------------------------- " << endl;
	cout << " | CREDITO: " << ((ApplicationModel*) model)->getCredito() <<"euro"<<"|" <<endl;
	cout << "  ---------------------------------------------------- " << endl;
	cout << " |     [1]Espresso     [2]Lungo    [3]Macchiato       |"<<endl;
	cout << " |     [4]Cappuccino   [5]Orzo     [6]Ginseng         | "<<endl;
	cout << " |     [7]Cioccolato   [8]Latte    [9]The limone      |"<<endl;
	cout << " |                     [10]Inserire soldi             |"<<endl;
	cout << " |                     [0]Esci                        |"<<endl;
	cout << "  ---------------------------------------------------- " << endl;

	cout << " | INSERIRE il comando scelto: ";


}

//void ApplicationView::initialize(){ controller = makeController();}
//MVC::Controller* MVC::View::makeController() { return new MVC::Controller(this); }

