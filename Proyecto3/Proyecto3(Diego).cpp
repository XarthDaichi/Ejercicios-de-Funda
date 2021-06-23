// Soluciones Dieog Quiros Artinano

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;

string toUpper(string porCambiar) {
    for (int i = 0; i < porCambiar.length(); i++){
        porCambiar.at(i) = toupper(porCambiar.at(i));
    }
    return porCambiar;
}

// Para hacer numeros al azar
void ini_aleatorio()
{
	srand(time(0)) ;
}

int digitoAleatorio() {
	return int(10*double(rand())/(RAND_MAX+1.0)); // el 10 es para que el digito sea de 0 a 9
}

class Libro {
private:
    int codigoDewey[3];
    int isbn[13];
    int annoImpresion;
    string titulo;
    string autor;
    string editorial;
public:
    // Metodos de construccion
    Libro(){
        for (int i = 0; i < 3; i++) {
            codigoDewey[i] = 0;
        }
        for (int i = 0; i < 13; i++) {
            isbn[i] = 0;
        }
        annoImpresion = 0;
        titulo = "";
        autor = "";
        editorial = "";
    }
    Libro(int elPrimerDewey, int elISBN, int elAnnoImpresion, string elTitulo, string elAutor, string laEditrorial) {
        codigoDewey[0] = elPrimerDewey;
        for (int i = 1;  i < 3; i++) {
            codigoDewey[i] = digitoAleatorio();
        }
        for (int i = 12; i >= 0; i--) {
            isbn[i] = elISBN % 10;
            elISBN /= 10;
        }
        annoImpresion = elAnnoImpresion;
        titulo = toUpper(elTitulo);
        autor = toUpper(elAutor);
        editorial = toUpper(laEditrorial);
    }

    // Metodos set y get
    void setCodigDewey(int elPrimerDewey) {
        codigoDewey[0] = elPrimerDewey;
        for (int i = 1; i < 3; i++) {
            codigoDewey[i] = digitoAleatorio();
        }
    }
    int getCodigoDewey() {
        int codigo = 0;
        int potencia = 1;
        for (int i = 2; i >= 0; i--) {
            codigo += codigoDewey[i] * potencia;
            potencia *= 10;
        }
        return codigo;
    }
    string getCategoriaDewey() {
        switch(codigoDewey[0]) {
        case 0:
            return "Generalidades";
            break;
        case 1:
            return "Filosofia y psicologia";
            break;
        case 2:
            return "Religion";
            break;
        case 3:
            return "Ciencias sociales";
            break;
        case 4:
            return "Lenguas";
            break;
        case 5:
            return "Matematicas y ciencias naturales";
            break;
        case 6:
            return "Tecnologia y ciencias aplicadas";
            break;
        case 7:
            return "Artes";
            break;
        case 8:
            return "Literatura";
            break;
        case 9:
            return "Historia y geografia";
            break;
        }
    }

    void setISBN(int elISBN) {
        for (int i = 12; i >= 0; i--) {
            isbn[i] = elISBN % 10;
            elISBN /= 10;
        }
    }
    string getISBN() {
        stringstream isbntemp;
        for (int i = 0; i < 13; i++) {
            if (i == 3 || i == 5 || i == 10 || i == 12) {
                isbntemp << "-";
            }
            isbntemp << isbn[i];
        }
        return isbntemp.str();
    }

    int getCodigoPais() {
        int codigo = 0;
        int potencia = 1;
        for (int i = 4; i >= 3; i--) {
            codigo += isbn[i] * potencia;
            potencia *= 10;
        }
        return codigo;
    }
    string getPais() {// Ayuda con el toString() del libro
        switch(getCodigoPais()) {
        case 75:
            return "Salvador";
            break;
        case 76:
            return "Guatemala";
            break;
        case 78:
            return "Nicaragua";
            break;
        case 79:
            return "Honduras";
            break;
        case 80:
            return "Costa Rica";
            break;
        default:
            return "En otra parte del Mundo";
            break;
        }
    }
    
    bool esCentroAmerica() { // Para ver si es de centroamerica
        switch(getCodigoPais()) {
        case 75:
            return true;
            break;
        case 76:
            return true;
            break;
        case 78:
            return true;
            break;
        case 79:
            return true;
            break;
        case 80:
            return true;
            break;
        default:
            return false;
            break;
        }
    }

    void setAnnoImpresion(int elAnnoImpresion) {
        annoImpresion = elAnnoImpresion;
    }
    int getAnnoImpresion() {
        return annoImpresion;
    }

    void setTitulo (string elTitulo) {
        titulo = toUpper(elTitulo);
    }
    string getTitulo() {
        return titulo;
    }

    void setAutor(string elAutor) {
        autor = toUpper(elAutor);
    }
    string getAutor() {
        return autor;
    }

    void setEditrorial(string laEditorial) {
        editorial = toUpper(laEditorial);
    }
    string getEditorial() {
        return editorial;
    }

    // Metodo destructor
    ~Libro() {
    }

    // Metodo toString()
    string toString() {
        stringstream s;
        s << titulo << endl;
        s << "Por: " << autor << endl;
        s << "Editorial: " << editorial << endl;
        s << "Publicado en: " << annoImpresion << endl;
        s << "ISBN: ";
        for (int i = 0; i < 13; i++) {
            if (i == 3 || i == 5 || i == 10 || i == 12) {
                s << "-";
            }
            s << isbn[i];
        }
        s << endl;
        s << getPais() << endl;
        s << "Clasificacion decimal Dewwy: ";
        for (int i = 0; i < 3; i++) {
            s << codigoDewey[i];
        }
        s << endl;

        return s.str();
    }
};

class ColeccionLibro {
private:
    Libro coleccion[250];
    int tamano;
    int cantidad;
    Libro tesoro[250];
    int cantidadTesoro;
public:
    // Metodos constructores
    ColeccionLibro() {
        cantidad = 0;
        tamano = 250;
        for (int i = 0; i < tamano; i++) {
            coleccion[i] = Libro();
        }
        for (int i = 0; i < tamano; i++) {
            tesoro[i] = Libro();
        }
    }
    ColeccionLibro(int n) {
        cantidad = 0;
        tamano = n;
        for (int i = 0; i < tamano; i++) {
            coleccion[i] = Libro();
        }
    }

    // Metodos get y set
    void agregarLibro(Libro parameter) {
        if(cantidad < tamano) {
            coleccion[cantidad] = parameter;
            cantidad++;
        }
    }

    void setTamanoColeccion(int elTamano) {
        tamano = elTamano;
    }
    int getTamanoColeccion() {
        return tamano;
    }

    void setCantidadColeccion(int laCantidad) {
        cantidad = laCantidad;
    }
    int getCantidadColeccion() {
        return cantidad;
    }
    
    // Metodos extra
    int posicionDelMenorDewey(int start){
        int posicionMenor = start;
        for (int i = start + 1; i < cantidad; i++) {
            if(coleccion[i].getCodigoDewey() < coleccion[posicionMenor].getCodigoDewey()) {
                posicionMenor = i;
            }
        }
        return posicionMenor;
    }
    void intercambio(int pos1, int pos2) {
        if(pos1 != pos2) {
            Libro temp = coleccion[pos1];
            coleccion[pos1] = coleccion[pos2];
            coleccion[pos1] = temp;
        }
    }
    void ordenarDewey() {
        for (int i = 0; i < cantidad-1; i++) {
            intercambio(i, posicionDelMenorDewey(i));
        }
    }
    // Metodo toString()
    string toString() {
        ordenarDewey();
        stringstream libros;
        libros << "La Coleccion de Libros es: ";
        for (int i = 0; i < cantidad; i++) {
            libros << coleccion[i].toString();
            libros << endl;
        }
        return libros.str();
    }

    int buscarCharAutor(char buscando) {
        if(buscando >= coleccion[0].getAutor().at(0) && buscando <= coleccion[cantidad-1].getAutor().at(0)) {
            for (int i = 0; i < cantidad && coleccion[i].getAutor().at(0) <= buscando; i++) {
                if (coleccion[i].getAutor().at(0) == buscando) {
                    return i;
                }
            }
        }
        return cantidad;
    }

    int posicionDelCharAutorMenor(int start){
        int posicionMenor = start;
        for (int i = start + 1; i < cantidad; i++) {
            if(coleccion[i].getAutor().at(0) < coleccion[posicionMenor].getAutor().at(0)) {
                posicionMenor = i;
            }
        }
        return posicionMenor;
    }

    void ordenarAutor() {
        for (int i = 0; i < cantidad-1; i++) {
            intercambio(i, posicionDelCharAutorMenor(i));
        }
    }

    string buscarMismoAutores(string elAutorBuscando) {
        ordenarAutor();
        stringstream mismoAutor;
        int counter = 0;
        int start = buscarCharAutor(elAutorBuscando.at(0));
        int end = buscarCharAutor(elAutorBuscando.at(0) + 1);
        for (int i = start; i < end && i < cantidad && i; i++) {
            if(toUpper(elAutorBuscando) == coleccion[i].getAutor()) {
                mismoAutor << coleccion[i].toString() << endl;
                counter++;
            }    
        }
        mismoAutor << "Hay " << counter << " libros con el mismo autor." << endl;
        return mismoAutor.str();
    }

    int buscarCharEditorial(char buscando) {
        if(buscando >= coleccion[0].getEditorial().at(0) && buscando <= coleccion[cantidad-1].getEditorial().at(0)) {
            for (int i = 0; i < cantidad && coleccion[i].getEditorial().at(0) <= buscando; i++) {
                if (coleccion[i].getEditorial().at(0) == buscando) {
                    return i; 
                }
            }
        }
        return cantidad;
    }

    int posicionDelCharEditorialMenor(int start){
        int posicionMenor = start;
        for (int i = start + 1; i < cantidad; i++) {
            if(coleccion[i].getEditorial().at(0) < coleccion[posicionMenor].getEditorial().at(0)) {
                posicionMenor = i;
            }
        }
        return posicionMenor;
    }
    void ordenarEditorial() {
        for (int i = 0; i < cantidad-1; i++) {
            intercambio(i, posicionDelCharEditorialMenor(i));
        }
    }

    string buscarMismaEditorial(string laEditorialBuscando) {
        ordenarEditorial();
        stringstream mismaEditorial;
        int counter = 0;
        int start = buscarCharEditorial(laEditorialBuscando.at(0));
        int end = buscarCharAutor(laEditorialBuscando.at(0) + 1);
        for (int i = start; i < end && i < cantidad && i; i++) {
            if(toUpper(laEditorialBuscando) == coleccion[i].getEditorial()) {
                mismaEditorial << coleccion[i].toString() << endl;
                counter++;
            }    
        }
        mismaEditorial << "Hay " << counter << " libros con la misma editorial" << endl;
        return mismaEditorial.str();
    }

    int buscarCharTitulo(char buscando) {
        if(buscando >= coleccion[0].getTitulo().at(0) && buscando <= coleccion[cantidad-1].getTitulo().at(0)) {
            for (int i = 0; i < cantidad && coleccion[i].getTitulo().at(0) <= buscando; i++) {
                if (coleccion[i].getTitulo().at(0) == buscando) {
                    return i;
                }
            }
        }
        return cantidad;
    }

    int posicionDelCharTituloMenor(int start){
        int posicionMenor = start;
        for (int i = start + 1; i < cantidad; i++) {
            if(coleccion[i].getTitulo().at(0) < coleccion[posicionMenor].getTitulo().at(0)) {
                posicionMenor = i;
            }
        }
        return posicionMenor;
    }
    void ordenarTitulo() {
        for (int i = 0; i < cantidad-1; i++) {
            intercambio(i, posicionDelCharTituloMenor(i));
        }
    }

    string buscarMismoTitulo(string elTituloBuscando) {
        ordenarTitulo();
        stringstream mismoTitulo;

        int annos[40];
        bool noMismoAnno = false;

        int counter = 0;
        int start = buscarCharEditorial(elTituloBuscando.at(0));
        int end = buscarCharAutor(elTituloBuscando.at(0) + 1);

        for (int i = start; i < end && i < cantidad; i++) {
            if(toUpper(elTituloBuscando) == coleccion[i].getTitulo()) {
                annos[counter] = coleccion[i].getAnnoImpresion();
                for (int j = 0; j < counter && noMismoAnno; j++){
                    if(annos[j] != coleccion[i].getAnnoImpresion()) {
                        noMismoAnno = true;
                    } else {
                        noMismoAnno = false;
                    }
                }
                if(noMismoAnno) {
                    mismoTitulo << coleccion[i].toString() << endl;
                    counter++;
                }
            }  
        }
        mismoTitulo << "Hay " << counter << " libros con el mismo titulo y anno de publicacion diferente" << endl;
        return mismoTitulo.str();
    }

    int posicionDelMenorPais(int start){
        int posicionMenor = start;
        for (int i = start + 1; i < cantidad; i++) {
            if(coleccion[i].getCodigoPais() < coleccion[posicionMenor].getCodigoPais()) {
                posicionMenor = i;
            }
        }
        return posicionMenor;
    }
    void ordenarPais() {
        for (int i = 0; i < cantidad-1; i++) {
            intercambio(i, posicionDelMenorPais(i));
        }
    }
    int buscarPais(int buscando) {
        if(buscando >= coleccion[0].getCodigoPais() && buscando <= coleccion[cantidad-1].getCodigoPais()) {
            for (int i = 0; i < cantidad && coleccion[i].getCodigoPais() <= buscando; i++) {
                if (coleccion[i].getCodigoPais() == buscando) {
                    return i;
                }
            }
        }
        return cantidad;
    }
    string cantidadLibrosCentroAmerica() {
        ordenarPais();

        stringstream librosCentroAmerica;
        int counter;
        int o = 75;
        int start = buscarPais(o);
        while(start == cantidad && o <= 81) {
            o++;
            start = buscarPais(o);
        }
        int end = buscarPais(81);
        for(int i = start; i < end; i++) {
            if(coleccion[i].esCentroAmerica()) {
                librosCentroAmerica << coleccion[i].toString() << endl;
                counter++;
            }
        }
        librosCentroAmerica << "Hay " << counter << " libros de centroamerica." << endl;
        return librosCentroAmerica.str();
    }

    void eliminarLibro(int pos) {
        for (int i = pos, j = i + 1; j < cantidad; i++, j++) {
            intercambio(i, j);
        }
        cantidad--;
    }
    void agregarLibroTesoro(int annoActual) {
        for (int i = 0; i < cantidad; i++) {
            if(annoActual - coleccion[i].getAnnoImpresion() > 30) {
                eliminarLibro(i);
                tesoro[cantidadTesoro] = coleccion[cantidad + 1];
                cantidadTesoro++;
            }
        }
    }
};

string menu() {
    stringstream s;
    s << "Lista de acciones: " << endl;
    s << "1. Ingresar un libro" << endl;
    s << "2. Mostrar los libros de la biblioteca" << endl;
    s << "3. Buscar por autor" << endl;
    s << "4. Buscar por editorial" << endl;
    s << "5. Buscar por titulo" << endl;
    s << "6. Buscar libros de CentroAmerica" << endl;
    s << "Ingrese el numero de accion que quiere hacer: ";
    return s.str();
}

string categoriasDewey() {
    stringstream s;
    s << "Cual es la categoria Dewey?" << endl;
    s << "0. Generalidades" << endl;
    s << "1. Filosofia y psicologia" << endl;
    s << "2. Religion" << endl;
    s << "3. Ciencias sociales" << endl;
    s << "4. Lenguas" << endl;
    s << "5. Matematicas y ciencias naturales" << endl;
    s << "6. Tecnologia y ciencias aplicadas" << endl;
    s << "7. Artes" << endl;
    s << "8. Literatura" << endl;
    s << "9. Historia y geografia" << endl;
    s << "Ingrese la categoria de libro que esta ingresando: ";
    return s.str();
}

int main(int argc, char *argv[]) {
    
    ini_aleatorio();

    int operacion;
    int cantLibrosInput;

    // variables para atributos de los libros
    string temptitulo;
    string tempautor;
    string tempeditorial;
    int catdewey;
    int tempisbn;
    int tempanno;

    // objeto para la coleccion
    ColeccionLibro library;

    // variables de busqueda
    string buscarAutor;
    string buscarEditorial;
    string buscarTitulo;

    // variable de repeticion
    bool continuar;
    int deseo;

    do{
        system("CLS");
        cout << menu();
        cin >> operacion;
        switch(operacion){
        case 1:
            system("CLS");
            cout << "Cuantos libros quiere ingresar: ";
            cin >> cantLibrosInput;
            for (int i = 0; i < cantLibrosInput; i++) {
                cin.ignore();
                cout << "Cual es el titulo del libro: ";
                getline(cin, temptitulo);
                
                cin.ignore();
                cout << "Cual es el autor del libro: ";
                getline(cin, tempautor);

                cin.ignore();
                cout << "Cual es la editorial del libro: ";
                getline(cin, tempeditorial);
				
				cin.ignore();
                cout << categoriasDewey();
                cin >> catdewey;
				
				cin.ignore();
                cout << "Cual es el codigo ISBN (sin espacios o -): ";
                cin >> tempisbn;
				
				cin.ignore();
                cout << "Cual es el anno de publicacion: ";
                cin >> tempanno;

                Libro tempBook (catdewey, tempisbn, tempanno, temptitulo, tempautor, tempeditorial);
                library.agregarLibro(tempBook);
            }
            break;
        case 2:
            system("CLS");
            cout << library.toString();
            break;
        case 3:
            system("CLS");
            cin.ignore();
            cout << "Que autor le gustaria buscar? ";
            getline(cin, buscarAutor);
            cout << library.buscarMismoAutores(buscarAutor);
            break;
        case 4:
            system("CLS");
            cin.ignore();
            cout << "Que editorial le gustaria buscar? ";
            getline(cin, buscarEditorial);
            cout << library.buscarMismaEditorial(buscarEditorial);
            break;
        case 5:
            system("CLS");
            cin.ignore();
            cout << "Que titulo le gustaria buscar? ";
            getline(cin, buscarTitulo);
            cout << library.buscarMismoTitulo(buscarTitulo);
            break;
        case 6:
            system("CLS");
            cout << library.cantidadLibrosCentroAmerica();
            break;
        default:
            cout << "\nError: Digito ingresado incorrecto" << endl;
            if(!cin>>operacion){
				cin.ignore();
				cin.clear();
				cin.get();
			}
            break;
        }
		
		cin.ignore();
        cout << "Desea hacer algo mas? \nNo = 0 | Si = 1: ";
        cin >> deseo;
        continuar = deseo == 1;
    }while(continuar);
    system("CLS");
    cout << "Hasta Luego!!!";

    return 0;
}
