// NovelitaGrafica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Eric Isaac Rosas Vázquez 
// Zap404 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int clase;
    string servant;
    int loop = 10;
    string nombre;
    int stage1;
    bool sensancion; 
    bool stage1a, stage1b;
    int kripy;
    int victoriaS1;
    string deseo, comida;

    while (loop == 10)
    {
        //vamos a darle una introduccion al usuario de que es lo que está haciendo y donde está acá, le damos contexto vaya//
        cout << " \(^-^)/ \(^-^)/ \(^-^)/ \(^-^)/ \(^-^)/ \(^-^)/ \(^-^)/ \(^-^)/ \(^-^)/" << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;

        cout << "Hola usuario, este es un simulador de otras realidades" << endl;
        cout << "En esta ocasion vamos a visitar el mundo de Fate, la franquicia" << endl;
        cout << "En este mundo se desarrolla una guerra por el santo grial" << endl;
        cout << "Vamos a elegir tu roll en esta guerra y a tu sirviente" << endl;
        cout << "Para empezar vamos a elegir tu  roll" << endl;
        cout << "Los roles a elegir son Saber, Archer, Rider, Lancer, Assassin y Berserker" << endl;
        cout << "Escribe el numero segun el roll que quieras" << endl;
        cout << "1 ---------> Saber" << endl;
        cout << "2 ---------> Archer" << endl;
        cout << "3 ---------> Rider" << endl;
        cout << "4 ---------> Lancer" << endl;
        cout << "5 ---------> Assassin" << endl;
        cout << "6 ---------> Berserker" << endl;
        cin >> clase;
        //Aseguramos que el usuario no la riegue y nos ponga un numero que no sea del 1 al 6 xd
        if (clase > 6)
        {
            cout << "Respuesta aquivocada, teclea del 1 al 6 segun corresponda" << endl;
        }
        else
        {
            //le daremos al usuario la opcion de poder elegir a su heroe acompañante//
            //Todo esto con casos y su respectivo switch//
            switch (clase)
            {
            case 1:
                if (clase == 1)
                {
                    cout << "Nice, escogiste Saber, ahora hay que escoger a tu heroe Saber" << endl;
                    cout << "Tus opciones a Saber son Artoria_Pendragon, Siegfried y Mordred" << endl;
                    cout << "Por favor teclea su nombre exactamente como aparece" << endl;
                    cin >> servant;
                }

            case 2:
                if (clase == 2)
                {
                    cout << "Nice, escogiste Archer, ahora hay que escoger a tu heroe Archer" << endl;
                    cout << "Tus opciones de Archer son Emiya, Robin_Hood, Atalanta y Kiron" << endl;
                    cout << "Por favor teclea su nombre exactamente como aparece" << endl;
                    cin >> servant;
                }

            case 3:
                if (clase == 3)
                {
                    cout << "Nice, escogiste Rider, ahora hay que escoger a tu heroe Rider" << endl;
                    cout << "Tus opciones de Rider son Medusa, Ushiwakamaru, Astolfo, Ozymandias, Quetzalcoatl y Aquiles" << endl;
                    cout << "Por favor teclea su nombre exactamente como aparece" << endl;
                    cin >> servant;
                }
            case 4:
                if (clase == 4)
                {
                    cout << "Nice, escogiste Lancer, ahora hay que escoger a tu heroe Lancer" << endl;
                    cout << "Tus opciones de Lancer son Cu_Chulainn, Leonidas, Karna y Enkidu" << endl;
                    cout << "Por favor teclea su nombre exactamente como aparece" << endl;
                    cin >> servant;
                }
            case 5:
                if (clase == 5)
                {
                    cout << "Nice, escogiste Assassin, ahora hay que escoger a tu heroe Assassin" << endl;
                    cout << "Tus opciones de Assassin son Sasaki_Kojiro, Jack el Destripador, Semiramis y Cleopatra" << endl;
                    cout << "Por favor teclea su nombre exactamente como aparece" << endl;
                    cin >> servant;
                }
            case 6:
                if (clase == 6)
                {
                    cout << "Nice, escogiste Berserker, ahora hay que escoger a tu heroe Berserker" << endl;
                    cout << "Tus opciones de Berserker son Hercules, Frankenstein, Lu_Bu y Eric_Bloodaxe" << endl;
                    cout << "Por favor teclea su nombre exactamente como aparece" << endl;
                    cin >> servant;
                }
                break;
            }
            //Hay que seguir la historia pero no sin antes preguntarle su nombre con un getline por si nos pone espacios//
            cout << "Genial tu acompañante en esta aventura sera " << servant << " espero disfruten su compania ya que van a estar buen rato juntos" << endl;
            cout << "Oye por cierto, no te he preguntado tu nombre ¿Como te llamas?" << endl;
            getline(cin, nombre);
            cout << "Vaya entonces te llamas " << nombre << " bonito nombre, me caes bien" << endl;
            cout << "-------------------------------" << endl;
            cout << "Los candidatos a ganadores del santo grial se atraen entre ellos, por lo que hay que tener cuidado porque puede que nos enfrentemos a uno o varios" << endl;
            cout << "Cuando veas directamente a los ojos a un candidato vas a poder ver su nombre " << endl;
            cout << "El santo grial aparecera cuando derrotemos a todos los demas candidatos o cuando se rindan" << endl; 
            cout << "De momento hay que seguir nuestras vidas con normalidad, no vamos a levantar sospechas" << endl;
            cout << "Que vamos a hacer hoy? A donde vamos a ir? " << endl;
            cout << "Al restaurante o a la pista de hielo? " << endl;
            cout << " Escribe 1 si quieres ir a la PISTA DE HIELO o 0 si quieres ir al RESTAURANTE" << endl;
                cout << "PISTA DE HIELO     1" << endl;
                cout << "RESTAURANTE        0" << endl;
            cin >> stage1;
            if (stage1 == 1)
            {
                cout << "Bien entonces nos vamos a la pista de hielo" << endl;
                cout << "* ME DA UN PAR DE PATINES POR 2 HORAS*" << endl;
                cout << "Oye sientes eso? " << endl;
                cout << "Escribe 1 para SI y 0 para NO" << endl;
                cin >> sensancion;
                        cout << "Creo que hay algun Servant por aquí hay que tener cuidado y estar listos para atacar o dialogar" << endl; 
                        cout << "...................................." << endl;
                        cout << "...................................." << endl;
                        cout << "...................................." << endl;
                        cout << "...................................." << endl;
                        cout << "Lo veo!!!" << endl; 
                        cout << "Es la master Saber, Rin Tohsaka y viene con Gawain" << endl;
                        cout << "Que hacemos Atacamos o Dialogamos para que sea aliada?" << endl;
                        cout << "Escribe 1 para ATACAR y 0 para DIALOGAR" << endl;
                        cin >> stage1b;
                        //randomizamos para ver que va a pasar porque ta muy complicado hacer un combate aquí
                        kripy = rand() % 1 + 10;
                        victoriaS1 = rand() % 1 + 10;
                        //vamos a anidar las posibilidades 
                        if (stage1b == 1)
                        {
                            if (kripy > 5)
                            {
                                cout << "Ella tambien decidio atacar" << endl; 
                                if (victoriaS1 > 5)
                                {
                                    cout << "Hemos ganado, de pura suerte tu Servant uso un ataque más fuerte y mataste a Rin" << endl; 
                                }
                                else
                                {
                                    cout << "Fuiste demasiado lento y moriste en tu primer combate" << endl;
                                }
                            }
                            else 
                            {
                                cout << "Ella decidio no atacar pero como no la escuchaste la atacaste haciendo que muriera de un solo golpe" << endl;
                            }
                        }
                        else
                        {
                            if (kripy > 5)
                            {
                                cout << "Decidiste no pelear pero ella si, le dio igual tu pacifismo" << endl;
                                cout << "Te funaron, te cancelaron, te eliminaron, etc. moriste y ahora estas fuera de la lucha por el santo grial" << endl;
                            }
                            else
                            {
                                cout << "Los 2 decidieron dialogar e hicieron una alianza, ahora si es que consiguen el santo grial van a compartir su deseo" << endl;
                                cout << "Felicidades, Rin Tohsaka y su servant son tus aliados" << endl;
                                cout << "Y como juntos son imparables ustedes se quedan el santo grial" << endl;
                                cout << "Cual va a ser tu deseo" << endl; 
                                getline(cin, deseo);

                                cout << "ENTONCES " << nombre << " DESEAS " << deseo << endl;
                                cout << "DESEO CONSEDIDO, PUEDES IR EN PAZ HERMANO" << endl;
                            }
                        }                                       
            }
            else
            {
                cout << "Bien entonces nos vamos al restaurante" << endl; 
                cout << "Que se antoja para comer?" << endl;
                getline(cin, comida);
                cout << "Ten cuidado siento a un SERVANT cerca de nosotros" << endl;
                cout << "Lo veo, es Garou con Gilgamesh!!!" << endl;
                cout << "Que hacemos Atacamos o Dialogamos para que sea aliada?" << endl;
                cout << "Escribe 1 para ATACAR y 0 para DIALOGAR" << endl;
                cin >> stage1b;
                //randomizamos para ver que va a pasar porque ta muy complicado hacer un combate aquí
                kripy = rand() % 1 + 10;
                victoriaS1 = rand() % 1 + 10;
                //vamos a anidar las posibilidades 
                if (stage1b == 1)
                {
                    if (kripy > 5)
                    {
                        cout << "El tambien ha decidio atacar" << endl;
                        if (victoriaS1 > 5)
                        {
                            cout << "Hemos ganado, de pura suerte tu Servant uso un ataque más fuerte y mataste a Garou" << endl;
                        }
                        else
                        {
                            cout << "Fuiste demasiado lento y moriste en tu primer combate" << endl;
                        }
                    }
                    else
                    {
                        cout << "Ella decidio no atacar pero como no la escuchaste la atacaste haciendo que muriera de un solo golpe" << endl;
                    }
                }
                else
                {
                    if (kripy > 5)
                    {
                        cout << "Decidiste no pelear pero el si, le dio igual tu pacifismo" << endl;
                        cout << "Te funaron, te cancelaron, te eliminaron, etc. moriste y ahora estas fuera de la lucha por el santo grial" << endl;
                    }
                    else
                    {
                        cout << "Los 2 decidieron dialogar e hicieron una alianza, ahora si es que consiguen el santo grial van a compartir su deseo" << endl;
                        cout << "Felicidades, Garou y su servant son tus aliados" << endl;
                        cout << "Y como juntos son imparables ustedes se quedan el santo grial" << endl;
                        cout << "Cual va a ser tu deseo" << endl;
                        getline(cin, deseo);

                        cout << "ENTONCES " << nombre << " Y GAROU DESEAN " << deseo << endl;
                        cout << "DESEO CONSEDIDO, PUEDES IR EN PAZ HERMANO" << endl;
                    }
                }
            }

            //////////////////////////////////////////////////////////////////////////////////////////
            ///Instrucciones para ver si el ususario desea volver a iniciar el programa o retirarse///
            //////////////////////////////////////////////////////////////////////////////////////////
            cout << "Quieres volver a iniciar esta aventura?" << endl;
            cout << "Escribe 10 para SI y 20 para NO" << endl;
            cin >> loop;
        }
    }
}

