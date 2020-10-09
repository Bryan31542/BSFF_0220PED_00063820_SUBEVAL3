#include <iostream>
#include <queue>

using namespace std;

struct Song {
    
    string titulo;
    string cantante;
    string genero;
    int duracion;
};
struct Song song;

void menu(queue <Song>, queue <Song>, queue <Song>);
void showQueue(queue <Song>);

int main(){

    queue <Song> happy;
    queue <Song> sad;
    queue <Song> snooze;

    menu(happy, sad, snooze);
    return 0;
}

void menu(queue <Song> happy, queue <Song> sad, queue <Song> snooze) {

    int option;
    bool status = true;
    
    while(status){

        cout << "\n***** COLA DE CANCIONES *****" << endl << endl;
        cout << "1. Agregar una cancion a la cola" << endl;
        cout << "2. Eliminar una cancion de la cola" << endl;
        cout << "3. Vaciar cola" << endl;
        cout << "4. Mostrar contenido de la cola" << endl;
        cout << "5. Salir" << endl << endl;

        cout << "Ingrese la opcion: ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            cin.ignore();
            cout << "\nIngrese el nombre de la cancion: ";
            getline(cin, song.titulo);
            cout << "Ingrese el cantante: ";
            getline(cin, song.cantante);
            cout << "Ingrese el genero: ";
            getline(cin, song.genero);
            do {
                cout << "Ingrese la duracion en segundos (debe ser >0): ";
                cin >> song.duracion;
            }while (song.duracion <= 0);
        
            int op;

            cout << "\n||| Usted cuenta con tres colas, proceda a elegir a cual quiere ingresar la cancion |||" << endl << endl;
            cout << "1. Cola feliz :)" << endl;
            cout << "1. Cola triste :(" << endl;
            cout << "3. Cola para mimir zZz" << endl;
            cout << "\nDigite su opcion: ";
            cin >> op;

            switch (op) {
                case 1:
                {       
                    cout << "\nAgregada exitosamente a cola feliz..." << endl;
                    happy.push(song);
                    break;
                }
                case 2:
                {
                    cout << "\nAgregada exitosamente a cola triste..." << endl;
                    sad.push(song);
                    break;
                }
                case 3:
                {
                    cout << "\nAgregada exitosamente a cola para mimir..." << endl;
                    snooze.push(song);
                    break;
                }
                default:
                {
                    cout << "\nEsa opcion no existe" << endl << endl;
                    break;
                }
            }
            break;
        }
        case 2:
        {
            int opcio;

            cout << "\n||| Usted cuenta con tres colas, proceda a elegir a cual quiere eliminar una cancion |||" << endl << endl;
            cout << "1. Cola feliz :)" << endl;
            cout << "2. Cola triste :(" << endl;
            cout << "3. Cola para mimir zZz" << endl;

            cout << "\nDigite su opcion: ";
            cin >> opcio;

            switch (opcio) {
            case 1:
            {       
                if (happy.empty()) {
                cout << "\nLa cola feliz se encuentra vacia, Underflow" << endl;
                }
                else{
                    cout << "\nEliminando una cancion de la cola feliz..." << endl;
                    for (int i = 0; i < 1; i++){
                    happy.pop();
                    }
                }
                break;
            }
            case 2:
            {
                if (sad.empty()) {
                cout << "\nLa cola triste se encuentra vacia, Underflow" << endl;
                }
                else{
                    cout << "\nEliminando una cancion de la cola triste..." << endl;
                    for (int i = 0; i < 1; i++){
                    sad.pop();
                    }
                }
                break;
            }
            case 3:
            {
                if (snooze.empty()) {
                cout << "\nLa cola para mimir se encuentra vacia, Underflow" << endl;
                }
                else{
                    cout << "\nEliminando una cancion de la cola para mimir..." << endl;
                    for (int i = 0; i < 1; i++){
                    snooze.pop();
                    }
                }
                break;
            }
            default:
            {
                cout << "\nEsa opcion no existe" << endl << endl;
                break;
            }
        }
        break;
        } 
        case 3:
        {
            int opcioon;

            cout << "\n||| Usted cuenta con tres colas, proceda a elegir a cual quiere vaciar |||" << endl << endl;
            cout << "1. Cola feliz :)" << endl;
            cout << "2. Cola triste :(" << endl;
            cout << "3. Cola para mimir zZz" << endl;

            cout << "\nDigite su opcion: ";
            cin >> opcioon;

            switch (opcioon) {
            case 1:
            {       
                if (happy.empty()) {
                cout << "\nLa cola feliz se encuentra vacia, Underflow" << endl;
                }
                else{
                    cout << "\nVaciando la cola feliz..." << endl;
                    while (!happy.empty()){
                        happy.pop();
                    }
                    
                }
                break;
            }
            case 2:
            {
                if (sad.empty()) {
                cout << "\nLa cola triste se encuentra vacia, Underflow" << endl;
                }
                else{
                    cout << "\nVaciando la cola triste..." << endl;
                    while (!sad.empty()){
                        sad.pop();
                    }
                }
                break;
            }
            case 3:
            {
                if (snooze.empty()) {
                cout << "\nLa cola para mimir se encuentra vacia, Underflow" << endl;
                }
                else{
                    cout << "\nVaciando la cola para mimir..." << endl;
                    while (!snooze.empty()){
                        snooze.pop();
                    
                    }
                }
                break;
            }
            default:
            {
                cout << "\nEsa opcion no existe" << endl << endl;
                break;
            }
            }
            break;
        }
        case 4:
        {

            int opc;

            cout << "\n||| Usted cuenta con tres colas, proceda a elegir cual quiere mostrar |||" << endl << endl;
            cout << "1. Cola feliz :)" << endl;
            cout << "2. Cola triste :(" << endl;
            cout << "3. Cola para mimir zZz" << endl;

            cout << "\nDigite su opcion: ";
            cin >> opc;

            switch (opc) {
            case 1:
            {       
                if (happy.empty()) {
                cout << "\nNo hay nada que mostrar en la cola feliz, Underflow" << endl;
                }
                else{
                cout << "\nMostrando cola feliz..." << endl;
                showQueue(happy);
                }
                break;
            }
            case 2:
            {
                if (sad.empty()) {
                cout << "\nNo hay nada que mostrar en la cola triste, Underflow" << endl;
                }
                else{
                cout << "\nMostrando cola triste..." << endl;
                showQueue(sad);
                }
                break;
            }
            case 3:
            {
                if (snooze.empty()) {
                cout << "\nNo hay nada que mostrar en la cola para mimir, Underflow" << endl;
                }
                else{
                cout << "\nMostrando cola para mimir..." << endl;
                showQueue(snooze);
                }
                break;
            }      
            default:
            {
                cout << "\nEsa opcion no existe" << endl << endl;
                break;
            }
            }
            break;
        }
        case 5:
        {
            cout << "\nFin del programa..." << endl << endl;
            status = false;
            break;
        }
        default:
        {
            cout << "\nEsa opcion no existe" << endl << endl;
            break;
        }
    }  
} 
}  

void showQueue(queue <Song> sq){

    queue <Song> aux = sq;

    while (!aux.empty()){
        cout << "\nTitulo: " << aux.front().titulo << endl;
        cout << "Cantante: " << aux.front().cantante << endl;
        cout << "Genero: " << aux.front().genero << endl;
        cout << "Duracion: " << aux.front().duracion << endl;
        aux.pop();
    }
}