#include <stdio.h>

typedef struct ProductInfo_struct {
   char itemName[50];
   int itemQty;
} ProductInfo;

ProductInfo IncreaseItemQty(ProductInfo productToStock, int increaseValue) {
   productToStock.itemQty = productToStock.itemQty + increaseValue;

   return productToStock;
}

int main(void) {
   ProductInfo computerInfo;
   int addStock;

   scanf("%s", computerInfo.itemName);
   scanf("%d", &computerInfo.itemQty);
   scanf("%d", &addStock);

   computerInfo = IncreaseItemQty(computerInfo, addStock);
   

   printf("Name: %s, stock: %d\n", computerInfo.itemName, computerInfo.itemQty);

   return 0;
}