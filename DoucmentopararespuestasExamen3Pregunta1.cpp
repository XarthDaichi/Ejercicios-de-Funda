// Soluciones de Diego Quiros Artiñano

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

class CalculoPlantilla{
private:
    string empleado;
    int cedula;
    char categoria; //'e' excelente (5%), 'b' bueno (3%), 'r' regular (1%), 'p' prueba (0)
    int horas;
    const int salario = 6000; // constante 6000
public:
    // Metodos constructores
    CalculoPlantilla() {
        empleado = "";
        cedula = 0;
        categoria = ' ';
        horas = 0;
    }
    CalculoPlantilla(string elEmpleado, int laCedula, char laCategoria, int lasHoras) {
        empleado = elEmpleado;
        cedula = laCedula;
        categoria = laCategoria;
        horas = lasHoras;
    }

    // Metodos get y set
    void setEmpleado(string elEmpleado) {
        empleado = elEmpleado;
    }
    string getEmpleado() {
        return empleado;
    }

    void setCedula(int laCedula) {
        cedula = laCedula;
    }
    int getCedula() {
        return cedula;
    }

    void setCategoria(char laCategoria) {
        categoria = tolower(laCategoria);
    }
    string getCategoria() {
        stringstream cat;
        switch(categoria) {
        case 'e':
            cat << "Excelente!!!" << endl;
            break;
        case 'b':
            cat << "Bueno!" << endl;
            break;
        case 'r':
            cat << "Regular" << endl;
            break;
        case 'p':
        default:
            cat << "Prueba" << endl;
        }
        return cat.str();
    }

    void setHoras(int lasHoras) {
        horas = lasHoras;
    }
    int getHoras() {
        return horas;
    }

    int getSalario() {
        return salario;
    }

    // Metodo destructor
    ~CalculoPlantilla() {
    }

    // Calcula el salario bruto del empleado horas por 6000 o el salario
    int salarioBruto() {
        return horas * salario;
    }

    // Depedne de la categoria, pero calculo cuanto extra se gana el empleado, los incentivos
    float incentivo() {
        switch(categoria) {
        case 'e':
            return salarioBruto() * (5.0/100.0);
            break;
        case 'b':
            return salarioBruto() * (3.0/100.0);
            break;
        case 'r':
            return salarioBruto() * (1.0/100.0);
            break;
        case 'p':
        default:
            return 0;
            break;
        }
    }

    // Metodo para calcular el monto que el empleado le tiene que pagar a la CCSS, 28% del salario bruto
    float deduccionCCSS() {
        return salarioBruto() * (28.0/100.0);
    }

    // Metodo para calcular salarioNeto (salario bruto con incentivos y sin deducciones)
    float salarioNeto() {
        return salarioBruto() + incentivo();
    }
    
    // Metodo toString()
    string toString(){
        stringstream s;
        s << "La plantilla: " << endl;
        s << "Empleado: " << empleado << endl;
        s << "Cedula: " << cedula << endl;
        s << "Calidad de trabajo; ";
		switch(categoria) {
        case 'e':
            s << "Excelente!!!" << endl;
            break;
        case 'b':
            s << "Bueno!" << endl;
            break;
        case 'r':
            s << "Regular" << endl;
            break;
        case 'p':
        default:
            s << "Prueba" << endl;
        }
        s << "Horas Trabajadas: " << horas << endl;
        s << "Salario Bruto (horas*salario): " << salarioBruto() << endl;
        s << "Incentivos: " << incentivo() << endl;
        s << "Deducciones: (28 porciento del salario bruto): " << deduccionCCSS() << endl;
        s << "Salario Neto (Salario bruto + incentivos): " << setprecision(1) << fixed << salarioNeto() << endl;
        return s.str();
    }
};

int main(int argc, char *argv[]) {
    CalculoPlantilla test;
    string tempNombre;
    int tempCedula;
    char tempCategoria;
    int tempHoras;
	
	cout << "Ingrese el nombre del empleado: ";
    getline(cin, tempNombre);
    test.setEmpleado(tempNombre);
	
	cout << "Ingrese la cedula del empleado: ";
    cin >> tempCedula;
    test.setCedula(tempCedula);
	
	cout << "Ingrese la categoria de incentivos del empleado: ";
    cin >> tempCategoria;
    test.setCategoria(tempCategoria);
	
	cout << "Ingrese las horas trabajadadas por el empleado: ";
    cin >> tempHoras;
    test.setHoras(tempHoras);
    
	system("CLS");
    cout << test.toString();

    return 0;
}
