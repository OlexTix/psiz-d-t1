#include "pch.h"
#include "list.h"

List* initList(void)
{
  List* pRoot = (List*)malloc(sizeof(*pRoot));
  if (pRoot == NULL) {
      std::cout << "Allocation Error, returning null";
      return NULL;
  }
  pRoot->pPlateNum = (char*)malloc(strlen("Root") + 1u);
  strcpy(pRoot->pPlateNum, "Root");
  time(&(pRoot->entryTime));
  pRoot->pNext = NULL;
	return pRoot;
} 

void deinitList(List* pRoot)
{
    free(pRoot->pPlateNum);

    if (pRoot != NULL) {
        free(pRoot);
    }

}

void addCar(List* pRoot, char* plateNum)
{


    while (pLastElement->pNext != NULL)
    {
        pLastElement = pLastElement->pNext;
    }

    pNewElement = (List*)malloc(sizeof(*pNewElement));
    pNewElement->pPlateNum = (char*)malloc(strlen(plateNum) + 1u); //We use 1u (unsigned int), since the number of chars in plateNum can't be negative
    strcpy(pNewElement->pPlateNum, plateNum);
    time(&(pNewElement->entryTime));
    pNewElement->pNext = NULL;
    pLastElement->pNext = pNewElement;

}

void removeCar(List* pRoot, char* plateNum)
{

}
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
{
	return 0;
}
