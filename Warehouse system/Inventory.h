#pragma once
#include "Goods.h"


class Inventory
{
private:
	Goods** goods;
	int nrOfStoredItems;
	int capaciy;

public:
	Inventory();
	~Inventory();

	void SelectGoods();
	bool checkQuantity(int ID, int Qty);
	void reduceQty(int ID, int Qty);
	void addNewGoods(); 
	bool EditProduct(int ID);

};