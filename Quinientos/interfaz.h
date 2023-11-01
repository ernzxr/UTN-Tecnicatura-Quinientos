#ifndef INTERFAZ_H_INCLUDED
#define INTERFAZ_H_INCLUDED

/// INTERFAZ UN JUGADOR

/// INTERFAZ DOS JUGADORES

void mostrarDados(int *v, int jugador){
    switch(jugador){
        case 0:
            dibujarDado(v[0],40,7);
            dibujarDado(v[1],50,7);
            dibujarDado(v[2],60,7);
            dibujarDado(v[3],70,7);
            dibujarDado(v[4],80,7);
            dibujarDado(v[5],90,7);
            return;
        case 1:
            dibujarDado(v[0],40,18);
            dibujarDado(v[1],50,18);
            dibujarDado(v[2],60,18);
            dibujarDado(v[3],70,18);
            dibujarDado(v[4],80,18);
            dibujarDado(v[5],90,18);
            return;
    }
}

void mostrarSalioEscalera(){
    cout<<endl;
    cout<<"ESCALERA!"<<endl;
    cout<<endl;
}


/// ESTE MOSTRAR PUNTAJE VA A DESAPARECER EN EL MOMENTO QUE PONGAMOS TODO EN EL datosPartidaJugador()


void mostrarPuntaje(int puntaje){
    cout<<endl;
    cout<<"PUNTAJE: "<<puntaje<<endl;
    cout<<endl;
}

void datosPartidaJugador(char mJugadores[][8], int mPuntajeJugadores[][20], int tirada, int ronda, int jugador, int maximoPuntajeTirada, int mPuntajesTiradas[][3]){
    switch(jugador){
        case 0:
            rlutil::locate(2,1);
            cout<<"TIRADA DE: "<<mJugadores[jugador]<<endl;
            rlutil::locate(31,1);
            cout<<"RONDA NUMERO "<<(char)167<<ronda<<endl;
            rlutil::locate(61,1);
            cout<<"PUNTAJE TOTAL ACTUAL "<<mPuntajeJugadores[jugador][ronda-1]<<endl;
            rlutil::locate(2,3);
            cout<<"LANZAMIENTO N"<<(char)167<<tirada+1<<endl;
            //if(tirada>0)cout<<"PUNTAJE PROVISORIO "<<maximoPuntajeTirada<<endl;
            return;
        case 1:
            rlutil::locate(2,26);
            cout<<"TIRADA DE: "<<mJugadores[jugador]<<endl;
            rlutil::locate(31,26);
            cout<<"RONDA NUMERO "<<(char)167<<ronda<<endl;
            rlutil::locate(62,26);
            cout<<"PUNTAJE TOTAL ACTUAL "<<mPuntajeJugadores[jugador][ronda-1]<<endl;
            rlutil::locate(2,24);
            cout<<"LANZAMIENTO N"<<(char)167<<tirada+1<<endl;
            //if(tirada>0)cout<<"PUNTAJE PROVISORIO "<<maximoPuntajeTirada<<endl;
            return;
    }
}

void mostrarTiradasYRondas(int tiradasTotales, int ronda){
    cout<<"TIRADAS: "<<tiradasTotales<<endl;
    cout<<"RONDAS JUGADAS: "<<ronda<<endl;
}

void solicitarNombreJugador(){

    cout<<"INGRESE SU NOMBRE [AAA-AAA]: ";
}

void terminarPartidaPorQuinientos(int tiradasTotales, int ronda, int puntaje){
    cout<<endl;
    cout<<"QUINIENTOS - GANASTE! "<<endl;
    mostrarTiradasYRondas(tiradasTotales, ronda);
    cout<<"PUNTAJE OBTENIDO: "<<puntaje<<endl;
    cout<<endl;
}

void terminarPartidaPorEscalera(int tiradasTotales, int ronda){
    cout<<endl;
    cout<<"ESCALERA - GANASTE! "<<endl;
    mostrarTiradasYRondas(tiradasTotales, ronda);
    cout<<endl;
}

void terminarPartidaPorRondasMaximas(int tiradasTotales, int ronda, int puntaje){
    cout<<endl;
    mostrarTiradasYRondas(tiradasTotales, ronda);
    cout<<"PUNTAJE TOTAL: "<<puntaje<<endl;
    cout<<endl;
}

void mostrarPuntaje(int puntaje,int jugador){
    if(jugador==0){
        rlutil::locate(101,8);
        cout<<"PUNTAJE: "<<puntaje<<endl;
    }
    else{
        rlutil::locate(101,19);
        cout<<"PUNTAJE: "<<puntaje<<endl;

    }

}

void mostrarPuntajeRonda(int puntajeRonda, int jugador){
    if(jugador==0){

    rlutil::locate(2,6);
    cout<<"MAXIMO PUNTAJE DE LA RONDA: "<<puntajeRonda<<endl;
    }
    else {
        rlutil::locate(2,16);
    }
}

void mostrarPuntajeAcumulado(int tiradasTotales, int ronda, int puntaje){
    mostrarTiradasYRondas(tiradasTotales, ronda);
    cout<<"PUNTAJE ACTUAL: "<<puntaje<<endl;
    cout<<endl;
}

#endif // INTERFAZ_H_INCLUDED
