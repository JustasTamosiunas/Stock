#include "class.h"
#include "MyForm.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <iomanip>
#include <cmath>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <random>


//
// TODO: PERRAÐYTI VISA ÐITÀ FAILA, IÐSKIRSTYTI DAUG KÀ Á ATSKIRUS HEADERIUS
//
part::part()
{
	std::ifstream f1("data.txt");
	f1 >> pinigai;
	f1 >> people;
	f1 >> n;
	f1.ignore(256, '\n');
	for (int i=0;i<n;i++)
	{
		getline (f1, kompanijuSarasas[i].name,'*');
		f1 >> kompanijuSarasas[i].totalshares;
		f1 >> kompanijuSarasas[i].shares;
		f1 >> kompanijuSarasas[i].revenue;
		f1 >> kompanijuSarasas[i].value;
		f1 >> kompanijuSarasas[i].sharePrice;
		f1 >> kompanijuSarasas[i].money;
		f1 >> kompanijuSarasas[i].dividend;
		f1.ignore(256, '\n');
	}
	f1 >>types;
	f1.ignore(256, '\n');
	for(int i=0;i<types;i++)
	{
		getline (f1,zaliavuSarasas[i].name,'*'); 
		f1 >> zaliavuSarasas[i].price;
		f1 >> zaliavuSarasas[i].amount;
		f1.ignore(256, '\n');
	}
	f1 >>amountBank;
	f1.ignore(256, '\n');
	for(int i=0;i<amountBank;i++)
	{
		getline (f1,bankuSarasas[i].name,'*');
		f1 >> bankuSarasas[i].interest;
		f1 >> bankuSarasas[i].money;
		f1 >> bankuSarasas[i].threshold;
		f1.ignore(256, '\n');
	}
	f1 >> amountHumans;
	f1.ignore(256, '\n');
	for(int i=0;i<amountHumans;i++)
	{
		getline (f1,zmoniuSarasas[i].name,'*');
		f1 >> zmoniuSarasas[i].money;
		f1.ignore(256, '\n');
	}
	f1.close();
}
void part::write()
{
	std::ofstream f1("rez.txt", std::ios::app);
	f1<<"//-------------------------------------------------//";
	f1 << pinigai<<"\n";
	f1 << people<<"\n";
	f1 << n << "\n";
	for (int i=0;i<n;i++)
	{
		f1<<kompanijuSarasas[i].name<<"*";
		f1<< kompanijuSarasas[i].totalshares<<" ";
		f1<< kompanijuSarasas[i].shares<<" ";
		f1<< kompanijuSarasas[i].revenue<<" ";
		f1<< kompanijuSarasas[i].value<<" ";
		f1<< kompanijuSarasas[i].sharePrice<<" ";
		f1<< kompanijuSarasas[i].money<<" ";
		f1<< kompanijuSarasas[i].dividend<<"\n";
	}
	f1<<types<<"\n";
	for(int i=0;i<types;i++)
	{
		f1<<zaliavuSarasas[i].name<<"*";
		f1<<zaliavuSarasas[i].price<<" ";
		f1<<zaliavuSarasas[i].amount<<"\n";
	}
	f1<<amountHumans<<"\n";
	for(int i=0;i<amountHumans;i++)
	{
		f1<<zmoniuSarasas[i].name<<" ";
		f1<<zmoniuSarasas[i].lastname<<" ";
		f1<<human[i].money<<"\n";
	}
	f1<<amountShares<<"\n";
	for(int i=0;i<amountShares;i++)
	{
		f1<<share[i].company<<" ";
		f1<<share[i].lastname<<" ";
		f1<<std::setprecision(2)<<share[i].amount<<"\n";
	}
	f1<<amountInterest<<"\n";
	for(int i=0;i<amountInterest;i++)
	{
		f1<<D[i].company<<" ";
		f1<<D[i].interest<<" ";
		f1<<D[i].money<<" ";
		f1<<D[i].bank<<" ";
		f1<<D[i].time<<" ";
		f1<<D[i].progress<<"\n";
	}
	f1.close();
}
void part::nextturn()
{
	double number=0;
	int buss=0,typeproduction=0,typeusage=0;
	////More humans/////
	people=people*1.01;
	//////Random////////
	std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 2);
    number = dis(gen);
	std::random_device kay;
    std::mt19937 fine(kay());
	std::uniform_int_distribution<> lol(0, types);
    buss = lol(fine);
	if (number==1)
	{
		if(B[buss].price>0.2)B[buss].price=B[buss].price-0.20;
	}
	else if (number==2)
	{
		B[buss].price=B[buss].price+0.20;
	}
	/////////For company///////////////
	for(int i=0;i<n;i++)
	{
		int sharesum=0,realproduction=0,productusage=0;
		double loan=0;
		////////////////Production type loading//////////////
		if((A[i].typeproduction!="0")&&(A[i].typeusage!="0"))
		{
			for(int d=0;d<types;d++)
			{ 
				if(B[d].name==A[i].typeproduction) typeproduction=d; 
				if(B[d].name==A[i].typeusage) typeusage=d;
			}
		}
		
		/*else if((A[i].typeproduction=="0")&&(A[i].typeusage!="0"))
		{
			for(int d=0;d<types;d++)
			{ 
				if(B[d].name==A[i].typeusage) typeusage=d;
			}
		}*/

		////////////////If no resources left/////////////////////
		/*if (B[typeproduction].amount<=0)
		{
			double maxas=0;
			int temptype=typeproduction;
			std::string maxasname;
			for(int d=0;d<types;d++)
			{
				if((maxas<B[d].price)&&(B[d].amount>0))
				{
					maxas=B[d].price;
					maxasname=B[d].name;
					typeproduction=d;
				}
			}
			A[i].typeproduction=maxasname;
			A[i].money=A[i].money+(A[i].production*B[temptype].cost/0.8);
			A[i].production=0;
			for(int d=0;A[i].money>=B[typeproduction].cost;d++)
			{
				A[i].money=A[i].money-B[typeproduction].cost;
				A[i].production++;
				A[i].value=B[typeproduction].cost*A[i].production;
			}
		}
		*/
		///////////////////////Paying loans////////////////////
		for(int d=0;d<amountinterest;d++)if(D[d].company==A[i].name)
		{
			if(D[d].time==D[d].progress)
			{
				D[d]=D[amountinterest+5];
				for(int f=d;f<amountinterest;f++) D[f]=D[f-1];
				amountinterest--;
			}
			else if(D[d].time>D[d].progress)
			{
				loan=loan+D[d].interest*(D[d].time/D[d].money);
				D[d].progress++;
			}
		}
		///////////Calculations/////////////
		for(int d=0;(d<n)||(d<amountconsumption);d++)
		{
			if(A[d].typeusage==B[typeproduction].name) productusage=productusage+(A[d].production*A[d].usageperproduction);
			if(consump[d].name==B[typeproduction].name) productusage=productusage+(people*consump[d].amountperhuman);
		}
		for(int d=0;d<n;d++)productusage;
		if(productusage>=A[i].production) realproduction=A[i].production;
		else if(productusage<A[i].production) realproduction=productusage;

		A[i].revenue=(realproduction*B[typeproduction].price)-(realproduction*A[i].usageperproduction*B[typeusage].price)-loan;
		B[typeproduction].amount=B[typeproduction].amount+realproduction;
		B[typeusage].amount=B[typeusage].amount-(A[i].usageperproduction*realproduction);
		A[i].shareprice=(A[i].value/A[i].totalshares)+(A[i].revenue/200)-(loan/A[i].value);
		A[i].value=A[i].production*10;
		////////////////////////////////For dividend mechanics/////////////////////////////////////////	
			for(int d=0;d<amountshares;d++)
			{
				if((share[d].company==A[i].name)&&(share[d].lastname!="player"))
				{
					for(int z=0;z<amounthumans;z++)if(share[d].lastname==human[z].lastname)
					{
						if(A[i].revenue>0) human[z].money=human[z].money+A[i].dividend*A[i].revenue*(share[d].amount/A[i].totalshares);
						sharesum=sharesum+share[d].amount;
					}
				}
				else if(share[d].lastname=="player")
				{
					if(A[i].revenue>0) pinigai=pinigai+A[i].dividend*A[i].revenue*(share[d].amount/A[i].totalshares);
					sharesum=sharesum+share[d].amount;
				}
			}
		/////////////////////////////For money makin//////////////////////////////////////////
		if (sharesum>0)A[i].money=A[i].money+((A[i].revenue)*(1-A[i].dividend)*(A[i].totalshares/sharesum));
		else A[i].money=A[i].money+(A[i].revenue);
		/////////////For realeasing new shares/////////////
		if((A[i].money<-100)&&(A[i].shareprice>0.2))
		{
			A[i].totalshares=A[i].totalshares+50;
			A[i].shares=A[i].shares+50;
		}
		///////////taking laons///////////
		else if(A[i].money<-200)
		{
			double minas=2;
			std::string minasname;
			double thershold;
			for(int d=0;d<amountbank;d++)
			{
				thershold=abs(A[i].value/A[i].money*10);
				if((minas<C[d].interest)&&(C[d].threshold>thershold))
				{
					minas=C[d].interest;
					minasname=C[d].name;
				}
			}
			D[amountinterest].company=A[i].name;
			D[amountinterest].bank=minasname;
			D[amountinterest].money=abs(A[i].money)+200;
			D[amountinterest].interest=minas;
			D[amountinterest].time=(abs(A[i].money)+200)/10;
			A[i].money=A[i].money+abs(A[i].money)+200;
			amountinterest++;
		}
		/////////////Investing in production//////////
		for(int d=0;A[i].money>B[typeproduction].cost*10;d++)
		{
			if(A[i].money>B[typeproduction].cost*10)
			{
				A[i].money=A[i].money-B[typeproduction].cost;
				A[i].value=A[i].value+B[typeproduction].cost;
				A[i].production++;
			}
		}
	}
	////////////////////////////Humans///////////////////////////////////////
	for(int i=0;i<amounthumans;i++)
	{
		int maxviet=-1,shareviet=-1,sumshare=0,shares=0;
		/////////////////////Best company by coe/////////////////// 
		for(int d=0;d<n;d++)
		{
			double maxpoints=0,points;
			points=(A[d].revenue*human[i].coe)+(A[d].money*(100-human[i].coe));
			if (points>maxpoints)
			{
				maxpoints=points;
				maxviet=d;
			}
		}
		//////////////If company does have shares/////////////////
		if(A[maxviet].shares>0)
		{
			shares=ceil(human[i].money/A[maxviet].shareprice);
			for(int d=0;d<amountshares;d++)
			{
				if(A[maxviet].name==share[d].company) sumshare=sumshare+share[d].amount;
			}
			if(sumshare==A[maxviet].totalshares)
			{
				A[maxviet].shareprice=A[maxviet].shareprice+shares/A[maxviet].value/20;
			}
			if((sumshare+shares)>A[maxviet].totalshares)
			{
				shares=A[maxviet].totalshares-sumshare;
			}
			human[i].money=human[i].money-(shares*A[maxviet].shareprice);
			A[maxviet].money=A[maxviet].money+(shares*A[maxviet].shareprice);
			A[maxviet].shares=A[maxviet].shares-shares;
		}
		/////////////////If company does not have shares/////////////
		if(A[maxviet].shares==0)
		{
			int minviet=-1,personviet=0,personshare=0;
			double minas=999999;
			for(int d=0;d<amountsell;d++)
			{
				if(sell[d].company==A[maxviet].name)
				{
					if(minas>sell[d].price){minviet=d;minas=sell[d].price;}
				}
			}
			if(minviet<0) break;
			shares=ceil(human[i].money/sell[minviet].price);
			if(shares>sell[minviet].amount)shares=sell[minviet].amount;
			for(int d=0;d<amounthumans;d++)if(human[d].lastname==sell[minviet].name){personviet=d;break;}
			human[personviet].money=human[personviet].money+(shares*sell[minviet].price);
			human[i].money=human[i].money-(shares*sell[minviet].price);
			sell[minviet].amount=sell[minviet].amount-shares;
			///for finding object in human///
			for(int d=0;d<amountshares;d++)
			{
				if((share[d].lastname==human[personviet].lastname)&&(share[d].company==A[maxviet].name)){personshare=d; break;}
			}
			share[personshare].amount=share[personshare].amount-shares;
		}
		/////////////////////For subject share registry///////////////////////////
		for(int d=0;d<amountshares;d++)
		{
			if((share[d].lastname==human[i].lastname)&&(share[d].company==A[maxviet].name)){shareviet=d; break;}
		}
		if(shareviet<0)
		{
			share[amountshares].lastname=human[i].lastname;
			share[amountshares].company=A[maxviet].name;
			share[amountshares].amount=shares;
			amountshares++;
		}
		else
		{
			share[shareviet].amount=share[shareviet].amount+shares;
		}
		///////For share selling/////
		for(int d=0;d<n;d++)
		{
			int sellplace,shareplace;
			for(int z=0;z<amountshares;z++)if((share[z].company==A[d].name)&&(share[z].lastname==human[i].lastname)){shareplace=z;break;}
			if((human[i].risk>(A[d].revenue/A[d].shareprice*10))&&(share[shareplace].amount>0))
			{
				for(int z=0;z<amountshares;z++)if(share[z].company==A[d].name){sellplace=z;break;}
				sell[amountsell].company=A[d].name;
				sell[amountsell].amount=share[sellplace].amount;
				sell[amountsell].name=human[i].lastname;
				amountsell++;
			}
		}
	}
	////////////For price mechanics///////////
	for(int i=0;i<types;i++)
	{
		double usage=0,production=0,change=0;
		for(int d=0;d<n;d++)
		{
			if(A[d].typeproduction==B[i].name) production=production+A[d].production;
			if(A[d].typeusage==B[i].name) usage=usage+(A[d].production*A[d].usageperproduction);
		}
		change=production-usage;
		B[i].price=B[i].price-(B[i].flex*change*0.1);
		if(change==0) B[i].price=B[i].price*0.99;
	}  
}
std::string part::convert(System::String ^ text)
{
	msclr::interop::marshal_context context;
	std::string standard = context.marshal_as<std::string>(text);
	return standard;
}
