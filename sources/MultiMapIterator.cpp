#include "../headers/MultiMapIterator.h"


MultiMapIterator::MultiMapIterator(const MultiMap& multiMap): multiMap(multiMap) {
	//initialize current and other specific attributes
}

TElem MultiMapIterator::getCurrent() {
	//TBA
	return pair<int, int>{0,0};
}

bool MultiMapIterator::valid() {
	//TBA
	return false;
}

void MultiMapIterator::next() {
	//TBA
}

void MultiMapIterator::first() {
	//TBA
}
