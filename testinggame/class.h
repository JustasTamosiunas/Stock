#pragma once
#include <string>
#include <vector>

struct kompanija
{
	std::string name; 
	int totalshares, shares;
	double dividend, revenue, value, sharePrice;
	double money;
};

struct zaliava
{
	std::string name;
	double price, amount;
};

struct zmogus
{
	std::string name;
	double money;
};

struct akcija
{
	std::string company;
	double amount;
};

struct bank
{
	//TO REMAKE
	std::string name;
	double interest,money,threshold;
};

struct loans
{
	std::string company,bank;
	double money,interest,time,progress;
};


class part
{
public:
	int n;
	int types, amountInterest, amountBank, amountHumans, amountShares, amountSell, people;
	std::vector<kompanija> kompanijuSarasas;
	std::vector<zaliava> zaliavuSarasas;
	std::vector<bank> bankuSarasas;
	std::vector<loans> loanSarasas;
	std::vector<zmogus> zmoniuSarasas;
	std::vector<akcija> shareSarasas;
 	double pinigai;
	
public:
	part();
	void part::nextturn();
	void part::write();
	std::string convert(System::String ^ text);
};