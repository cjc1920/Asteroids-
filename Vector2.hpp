#include <iostream>
using namespace std;


class Motor
{

private:
   float X, Y;

    //X=Distancia, Y=Tiempo

    Motor(float X, float Y) : m_distancia(X), m_tiempo(Y)

   {
    cout << "La velocidad del motor es: " << m_distancia << " y " << m_tiempo << std::endl;
   }

    

private:
    int m_distancia, m_tiempo;


        //Calcula la velocidad del motor

public:
    int velocidad()
    {
        return m_distancia / m_tiempo;
    }
};