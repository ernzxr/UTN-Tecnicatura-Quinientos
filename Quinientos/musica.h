#ifndef MUSICA_H_INCLUDED
#define MUSICA_H_INCLUDED


#endif // MUSICA_H_INCLUDED

void musicaMenuPrincipal() {
    //PlaySound(0, 0, 0);
    PlaySound(TEXT("prueba.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

void playMusicaPartida() {
    PlaySound(TEXT("Cynthia.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

void stopMusica() {
    PlaySound(0, 0, 0);
}



/*
    cout<< "PLAY MUSIC: ";
    cin>> num;
    PlaySound(TEXT("prueba.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

    cout<< "STOP MUSIC: ";
    cin>> num;

    PlaySound(0, 0, 0);
*/
