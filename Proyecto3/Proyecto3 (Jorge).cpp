#include <iostream>
#include <cstdlib>
#include <time.h>
#include <sstream>
using namespace std;

int aleatorio(){			//Genera el numero aleatorio
	srand(time(NULL));
	return rand();
}

class Libro{
private:
	int dewey;				//Codigo Dewey de 3 digitos
	string titulo;			//Titulo del libro
	string autor;			//Nombre del autor
	string editorial;		//Nombre de la editorial
	int categoria;			//Primer digito del codigo Dewey que indica la categoria del libro
	int pais;				//Codigo del pais, 2 digitos
	int impresion;			//Año de impresion
	int ISBN[5];			//Codigo ISBN, 13 digitos
public:
	Libro(){
		titulo="Indefinido";
		autor="Indefinido";
		editorial="Indefinido";
		categoria=0;
		pais=0;
		impresion=0;
		dewey=aleatorio()%100+categoria*100;		//Crea el Dewey a base de categoria y un numero aleatorio de 2 digitos
		ISBN[0]=dewey;
		ISBN[1]=pais;
		ISBN[2]=aleatorio()%100000;
		ISBN[3]=aleatorio()%100;
		ISBN[4]=aleatorio()%10;
	}
	Libro(string pTitulo,string pAutor,string pEditorial,int pCategoria,int pPais,int pImpresion){
		titulo=pTitulo;
		autor=pAutor;
		editorial=pEditorial;
		categoria=pCategoria;
		pais=pPais;
		impresion=pImpresion;
		dewey=aleatorio()%100+categoria*100;
		ISBN[0]=dewey;
		ISBN[1]=pais;
		ISBN[2]=aleatorio()%100000;
		ISBN[3]=aleatorio()%100;
		ISBN[4]=aleatorio()%10;
	}
	~Libro(){
	}
	void setTitulo(string pTitulo){
		titulo=pTitulo;
	}
	void setAutor(string pAutor){
		autor=pAutor;
	}
	void setEditorial(string pEditorial){
		editorial=pEditorial;
	}
	void setCategoria(int pCategoria){
		categoria=pCategoria;
	}
	void setPais(int pPais){
		pais=pPais;
	}
	void setImpresion(int pImpresion){
		impresion=pImpresion;
	}
	int getDewey(){
		return dewey;
	}
	string getTitulo(){
		return titulo;
	}
	string getAutor(){
		return autor;
	}
	string getEditorial(){
		return editorial;
	}
	string getCategoria(){			//Retorna, en texto, la categoria
		string texto;
		switch(categoria){
		case 0:
			texto="Generalidades";
			break;
		case 1:
			texto="Filosofia y psicologia";
			break;
		case 2:
			texto="Religion";
			break;
		case 3:
			texto="Ciencias sociales";
			break;
		case 4:
			texto="Lenguas";
			break;
		case 5:
			texto="Matematicas y ciencias naturales";
			break;
		case 6:
			texto="Tecnologia y ciencias aplicadas";
			break;
		case 7:
			texto="Artes";
			break;
		case 8:
			texto="Literatura";
			break;
		case 9:
			texto="Historia y geografia";
		}
		return texto;
	}
	int getCodigoPais(){				//Retorna el codigo de 2 digitos del pais
		return pais;
	}
	string getPais(){					//Retorna, en texto, el pais
		string texto;
		switch (pais){
		case 75:
			texto="Salvador";
			break;
		case 76:
			texto="Guatemala";
			break;
		case 78:
			texto="Nicaragua";
			break;
		case 79:
			texto="Honduras";
			break;
		case 80:
			texto="Costa Rica";
			break;
		default:
			texto="En otra parte del mundo";
		}
		return texto;
	}
	int getImpresion(){
		return impresion;
	}
	string getISBN(){				//Arma el ISBN
		stringstream s;
		s.fill('0');
		s.width(3);
		s<<ISBN[0]<<"-";
		s.fill('0');
		s.width(2);
		s<<ISBN[1]<<"-";
		s.fill('0');
		s.width(5);
		s<<ISBN[2]<<"-";
		s.fill('0');
		s.width(2);
		s<<ISBN[3]<<"-";
		s.fill('0');
		s.width(1);
		s<<ISBN[4];
		return s.str();
	}
	string toString(){
		stringstream s;
		s<<"Titulo: "<<titulo<<endl;
		s<<"Autor: "<<autor<<endl;
		s<<"Editorial: "<<editorial<<endl;
		s<<"Categoria: "<<getCategoria()<<endl;
		s<<"Pais: "<<getPais();
		s<<endl<<"Año de impresion: "<<impresion<<endl;
		s<<"ISBN: "<<getISBN()<<endl;
		return s.str();
	}
};

class ColeccionLibros{
private:
	Libro libros[10];			//Coleccion de 10 libros
	int tamano;					//Tamaño de la coleccion
	int cantidad;				//Cantidad de libros almacenados
public:
	ColeccionLibros(){
		tamano=10;
		cantidad=0;
		for(int i=0;i<tamano;i++){
			libros[i]=Libro();
		}
	}
	ColeccionLibros(int n){
		tamano=n;
		cantidad=0;
		for(int i=0;i<tamano;i++){
			libros[i]=Libro();
		}
	}
	~ColeccionLibros(){
	}
	void agregar(Libro generico){
		if(cantidad<tamano){
			libros[cantidad]=generico;
			cantidad++;
		}
	}
	void setLibro(Libro generico, int pos){
		libros[pos]=generico;
	}
	Libro getLibro(int pos){
		return libros[pos];
	}
	string toString(){
		stringstream s;
		for(int i=0;i<cantidad;i++){
			s<<"Libro "<<i+1<<":\n\n"<<libros[i].toString()<<endl;
		}
		return s.str();
	}
	int deweyMenor(int n){
		int menor=n;
		for(int i=n;i<cantidad;i++){
			if(libros[i].getCategoria()<libros[menor].getCategoria()){
				menor=i;
			}
		}
		return menor;
	}
	void intercambiaPosiciones(int i, int j){
		if(libros[i].getDewey()!=libros[j].getDewey()){
			Libro temporal=libros[i];
			libros[i]=libros[j];
			libros[j]=temporal;
		}
	}
	void ordenDewey(){
		for(int i=0;i<9;i++){
			intercambiaPosiciones(i,deweyMenor(i));
		}
	}
	ColeccionLibros mismoAutor(string autor){
		ColeccionLibros generica;
		for(int i=0,j=0;i<cantidad;i++){
			if(autor==libros[i].getAutor()){
				generica.agregar(libros[i]);
				j++;
			}
		}
		return generica;
	}
	ColeccionLibros mismaEditorial(string editorial){
		ColeccionLibros generica;
		for(int i=0,j=0;i<10;i++){
			if(editorial==libros[i].getEditorial()){
				generica.agregar(libros[i]);
				j++;
			}
		}
		return generica;
	}
	ColeccionLibros mismoNombre(string nombre){
		ColeccionLibros generica;
		for(int i=0,j=0;i<10;i++){
			if(nombre==libros[i].getTitulo()){
				generica.agregar(libros[i]);
				j++;
			}
		}
		return generica;
	}
	int librosCentroamerica(){
		int numero=0;
		for(int i=0;i<cantidad;i++){
			if(libros[i].getCodigoPais()>=75 && libros[i].getCodigoPais()<=80 && libros[i].getCodigoPais()!=77){
				numero++;
			}
		}
		return numero;
	}
};

int main(int argc, char *argv[]) {
	string titulo;
	string autor;
	string editorial;
	int categoria;
	int pais;
	int impresion;
	int funcion;
	int deseo;
	bool continuar;
	ColeccionLibros nueva;
	for(int i=1;i<=10;i++){
		cout<<"* * * * * * * * Añadiendo libros * * * * * * * *"<<endl<<endl;
		cout<<"Libro #"<<i<<":\n\n";
		cout<<"Titulo: ";
		getline(cin,titulo);
		cout<<"Autor: ";
		getline(cin,autor);
		cout<<"Editorial: ";
		getline(cin,editorial);
		system("CLS");
		cout<<"* * * * * * * * Añadiendo libros * * * * * * * *"<<endl<<endl;
		cout<<"Libro #"<<i<<":\n\n";
		cout<<"* * * * * * * * * * * * * * * * * * * * *"<<endl;
		cout<<"* 0 * Generalidades                     *"<<endl;
		cout<<"* 1 * Filosofia y psicologia            *"<<endl;
		cout<<"* 2 * Religion                          *"<<endl;
		cout<<"* 3 * Ciencias sociales                 *"<<endl;
		cout<<"* 4 * Lenguas                           *"<<endl;
		cout<<"* 5 * Matematicas y ciencias naturales  *"<<endl;
		cout<<"* 6 * Tecnologia y ciencias aplicadas   *"<<endl;
		cout<<"* 7 * Artes                             *"<<endl;
		cout<<"* 8 * Literatura                        *"<<endl;
		cout<<"* 9 * Historia y geografia              *"<<endl;
		cout<<"* * * * * * * * * * * * * * * * * * * * *"<<endl<<endl;
		cout<<"Categoria: ";
		cin>>categoria;
		system("CLS");
		cout<<"* * * * * * * * Añadiendo libros * * * * * * * *"<<endl<<endl;
		cout<<"Libro #"<<i<<":\n\n";
		cout<<"* * * * * * * * * *"<<endl;
		cout<<"* Salvador   * 75 *"<<endl;
		cout<<"* Guatemala  * 76 *"<<endl;
		cout<<"* Nicaragua  * 78 *"<<endl;
		cout<<"* Honduras   * 79 *"<<endl;
		cout<<"* Costa Rica * 80 *"<<endl;
		cout<<"* Otro       * 99 *"<<endl;
		cout<<"* * * * * * * * * *"<<endl<<endl;
		cout<<"Codigo pais: ";
		cin>>pais;
		cout<<"Año de impresion: ";
		cin>>impresion;
		system("CLS");
		Libro nuevo(titulo,autor,editorial,categoria,pais,impresion);
		nueva.agregar(nuevo);
	}
	do{
		cout<<"* * * * * * * * * * * * * * * * * * * * * * *"<<endl;
		cout<<"* 1 * Mostrar libros                        *"<<endl;
		cout<<"* 2 * Ordenar libros por categoria          *"<<endl;
		cout<<"* 3 * Buscar libros del mismo autor         *"<<endl;
		cout<<"* 4 * Buscar libros de las misma editorial  *"<<endl;
		cout<<"* 5 * Buscar libros con el mismo nombre     *"<<endl;
		cout<<"* 6 * Numero de libros centroamericanos     *"<<endl;
		cout<<"* * * * * * * * * * * * * * * * * * * * * * *"<<endl<<endl;
		cout<<"Que funcion desea realizar?: ";
		cin>>funcion;
		switch(funcion){
		case 1:
			cout<<nueva.toString();
			break;
		case 2:
			nueva.ordenDewey();
			cout<<nueva.toString();
			break;
		case 3:
			cout<<"Escriba el autor a buscar: ";
			cin>>autor;
			cout<<nueva.mismoAutor(autor).toString();
		case 4:
			cout<<"Escriba la editorial a buscar: ";
			cin>>editorial;
			cout<<nueva.mismaEditorial(editorial).toString();
		case 5:
			cout<<"Escriba el nombre del libro: ";
			cin>>titulo;
			cout<<nueva.mismoNombre(titulo).toString();
		case 6:
			cout<<"Hay "<<nueva.librosCentroamerica()<<" libros centroamericanos.";
		default:
			cout<<"*Opcion seleccionada incorrecta*";
		}
		cout<<"Desea revisar otra funcion? | Si = 1 | No = 0 | : ";
		cin>>deseo;
		continuar=deseo==1;
	} while(continuar);
	system("CLS");
	cout<<"Hasta luego!";
	return 0;
}

