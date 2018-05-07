#pragma once
#include "Goods.h"


class Inventory
{
private:
	Goods** goods;
	int nrOfStoredItems;
	int capaciy;
	static const int maxCapacity = 10;
	void expand();

public:
	Inventory();
	~Inventory();


	bool checkQuantity(int ID, int Qty);
	void reduceQty(int ID, int Qty);
	void addNewGoods();
	bool EditProduct(int ID);

};