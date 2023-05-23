#include "Milk.h"
#include <iostream>

Milk::Milk():Chocolate<int>(id){

}

bool Milk::validId(int id){
	return id > 0;
}
