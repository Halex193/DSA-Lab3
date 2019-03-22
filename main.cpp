#include <iostream>
#include "headers/MultiMapIterator.h"
#include "headers/MultiMap.h"

using namespace std;


int main() {
	MultiMap c;
	// iteration
	MultiMapIterator ic = c.iterator();
	while (ic.valid()) {
		TElem e = ic.getCurrent();
		//element processing
		ic.next();
	}

	cout<<"End";


}
