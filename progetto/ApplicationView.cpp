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
	system("cls");
	std::cout << std::endl;

/*	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << "  ID VIEW:"<< this << std::endl;
	std::cout << "  ---------------------------------------------------- " << std::endl;
*/
	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << " |                  Macchina del caffe                |" <<std::endl;
	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << " | CREDITO: " << credito <<"euro"<<"                  |" <<std::endl;
	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << " |     [1]Espresso     [2]Lungo    [3]Macchiato       |"<<std::endl;
	std::cout << " |     [4]Cappuccino   [5]Orzo     [6]Ginseng         | "<<std::endl;
	std::cout << " |     [7]Cioccolato   [8]Latte    [9]The limone      |"<<std::endl;
	std::cout << " |                     [10]Inserire soldi             |"<<std::endl;
	std::cout << " |                     [0]Esci                        |"<<std::endl;
	std::cout << "  ---------------------------------------------------- " << std::endl

	std::cout << " | INSERIRE il comando scelto: ";


}

//void ApplicationView::initialize(){ controller = makeController();}
//MVC::Controller* MVC::View::makeController() { return new MVC::Controller(this); }

