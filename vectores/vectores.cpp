#include <iostream>

using namespace std;

class Vector {
private:
	int* elements;
	int size;
public:
	// Constructor
	Vector(int* elems, int size) : size(size) {
		elements = new int[size];
		for (int i = 0; i < size; i++) {
			elements[i] = elems[i];
		}
	}

	// Destructor
	~Vector() {
		delete[] elements;
	}

	// sumar dos vectores
	Vector sumarVectores(Vector& otherVector) {
		int* result = new int[size];
		for (int i = 0; i < size; i++) {
			result[i] = elements[i] + otherVector.elements[i];
		}
		return Vector(result, size);
	}

	// imprimir vector
	void print() {
		for (int i = 0; i < size; i++)
		{
			cout << elements[i] << " ";
		}
		cout << endl;
	}

};

int main() {
	int elements1[] = { 1,2,3 };
	int elements2[] = { 3,4,3 };
	Vector v1(elements1, 3);
	Vector v2(elements2, 3);
	Vector v3 = v1.sumarVectores(v2);
	v3.print();
}