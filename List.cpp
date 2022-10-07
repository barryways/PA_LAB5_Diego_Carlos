#include "List.h"

//Nomenclatura de llamada -> tipo de metodo + "List"::[nombre en List.h]
void List::Add(int item) {//CARLOS
	Node* elemento = new Node();//incializa nodo
	elemento->data = item;//el valor del nodo se da al item
	if (header == nullptr) {//si la cabeza es nula el elemento sera la cabeza
		header = elemento;
	}
	else {
		Node* elementoTemporal = header;
		while (elementoTemporal->next != nullptr)//se recorre hasta llegar al ultimo que estaria en el null
		{
			elementoTemporal = elementoTemporal->next;
		}
		elementoTemporal->next = elemento;//se asigna el valor
	}
}
void List::Clear() {//DIEGO
	while (header != nullptr)
	{
		RemoveAt(0);//va eliminando los datos como la arena del minecraft
	}

}
int List::Count() {//DIEGO
	int elementosLista = 0;
	for (Node* i = header; i != nullptr; i = i->next) {//cuenta cabezas y las mete en un contador
		elementosLista++;
	}
	return elementosLista;
}

bool List::Contains(int item) {//DIEGO
	Node* elementoTemporal = header;
	while (elementoTemporal != nullptr && elementoTemporal->data != item)
	{
		elementoTemporal = elementoTemporal->next;//recorre los nodos asignando valores al temporal
	}
	if (elementoTemporal != nullptr)
	{
		if (elementoTemporal->data == item)// valida si lo encontro, si no vuelve al bucle
		{
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;//cuando ya reocrrio todo y no lo encontro lo devuelve
	}
}
int List::IndexOf(int item) {//CARLOS
	Node* elementoTemporal = header;
	int posicionLista = 0; //contador
	while (elementoTemporal != nullptr && elementoTemporal->data != item)
	{
		elementoTemporal = elementoTemporal->next;//buscando con un nodo temporal
		posicionLista++;//le suma al contador
	}
	if (elementoTemporal == nullptr) {
		posicionLista = -1;//no lo encontro y retorna falso
	}
	return posicionLista;
}
void List::Insert(int index, int item) {//CARLOS
	Node* elementoNuevo = new Node();//incializamos un nodo
	elementoNuevo->data = item;//asignamos el valor que se nos envia
	if (index == 0 || Count() == 0)
	{
		elementoNuevo->next = header;
		header = elementoNuevo;//lo metemos a la cabeza si no hay datos anteriores
	}
	else if (index >= Count())
	{
		Add(item);//lo mandamos al metodo add para no rehacer codigo
	}
	else {
		Node* anterior = header;
		Node* elementoTemporal = header->next;//incialzamos nodo temporal para comparacion con anterior
		int posicion = 1;
		while (posicion < index)
		{
			anterior = elementoTemporal;//recorremos hasta llegar al index
			elementoTemporal = elementoTemporal->next;
			posicion++;
		}
		elementoNuevo->next = elementoTemporal;//agregamos ya el nodo que nos sirvio en el while
		anterior->next = elementoNuevo;
	}
}
int List::GetItem(int index) {//DIEGO
	if (index >= 0 && index < Count()) {
		Node* elementoTemporal = header;
		int posicion = 0;//contador

		while (posicion < index)
		{
			elementoTemporal = elementoTemporal->next;//va buscando nodo por nodo
			posicion++;
		}
		return elementoTemporal->data;//retorna el dato que se encuentra en ese nodo temportal
	}
}
void List::SetItem(int index, int item) {//DIEGO
	if (index > 0 && index < Count()) {
		Node* elementoTemporal = header;
		int posicion = 0;
		while (posicion < index)//el mismo ciclo que el anterior pero ahora validando viceversa
		{
			elementoTemporal = elementoTemporal->next;
			posicion++;
		}
		elementoTemporal->data = item;
	}
}
int List::LastIndexOf(int item) {//CARLOS
	Node* elementoTemporal = header;
	int posicion = 0, indice = 0;
	while (elementoTemporal != nullptr)
	{
		if (elementoTemporal->data == item) {
			indice = posicion;//va recorriendo hasta llegar al item 
		}
		elementoTemporal = elementoTemporal->next;
		posicion++;

	}
	return indice;//retorna la posicion
}
bool List::Remove(int item) {//DIEGO Y CARLOS
	if (Contains(item)) { 
		int posicion = IndexOf(item);
		RemoveAt(posicion);//reutilizamos el metodo at para no hacer mas codigo
		return true;
	}
	else {
		return false;
	}
}
void List::RemoveAt(int index) {//CARLOS Y DIEGO
	Node* elementoTemporal = header;
	if (Count() != 0) { //contamos los elementos para ver si hay
		if (Count() == 1 || index == 0) //si solo hay uno entra
		{
			header = header->next;
		}
		else if (index >= Count()) {//si el indice es mayor al conteo lo entramos
			Node* elementoAnterior = header;
			elementoTemporal = elementoAnterior->next;//nodo temporal a recorrerse
			while (elementoTemporal != nullptr)
			{
				elementoAnterior = elementoTemporal;
				elementoTemporal = elementoTemporal->next;//vamos metiendo un nodo temporal y uno anteior para cambiar valores
			}
			elementoAnterior->next = elementoTemporal->next;//al final cambiamos el nodo anterior al nodo final
		}
		else {
			Node* elementoAnterior = header;
			elementoTemporal = elementoAnterior->next;
			int posicion = 1;
			while (elementoTemporal != nullptr && posicion < index)
			{
				elementoAnterior = elementoTemporal;
				elementoTemporal = elementoTemporal->next;//el mismo reocrrido y cambio que el anteior pero llegando al index
				posicion++;
			}
			elementoAnterior->next = elementoTemporal->next;//forma "más" efectiva que se nos ocurrio :)
		}
	}
}