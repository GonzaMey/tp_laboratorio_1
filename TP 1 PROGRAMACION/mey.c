
/** \brief ingreso de un valor con el rango maximo y minimo.
 *
 * \param valor a validar.
 * \param valor minimo del rango.
 * \param valor maximo del rango.
 * \return 1 si el primer parametro esta dentro del rango y 0 si no lo esta.
 *
 */
int rango(int valor,int minimo,int maximo){
    int esValido = 1;
        if(valor < minimo || valor > maximo){
            esValido = 0;
        }
        return esValido;
    }


    /** \brief Sumar dos numeros float
     *
     * \param primer numero a sumar
     * \param segundo numero a sumar
     * \return resultado de la suma de ambos numeros
     *
     */

        float suma(float a, float b)
    {
    float total;
    total=a+b;
    return total;
    }

    /** \brief Restar dos numeros float
    *
    * \param primer numero a restar
    * \param segundo numero a restar
    * \return resultado de la resta de ambos numeros
    *
    */

    float resta(float a, float b)
    {
    float total;
    total=a-b;
    return total;
    }

    /** \brief Multiplicar dos numeros float
     *
     * \param primer numero a multiplicar
     * \param segundo numero a multiplicar
     * \return resultado de la multiplicacion de ambos numeros
     *
     */

    float mult(float a, float b)
    {
    float total;
    total=a*b;
    return total;
    }

    /** \brief Dividir dos numeros float
     *
     * \param primer numero a dividir(dividendo)
     * \param segundo numero de la division (divisor)
     * \return devuelve el resultado de la division de ambos numeros
     *
     */

    float division(float a, float b)
    {
    float total;
    total=a/b;
    return total;
    }

    /** \brief Realizar el factorial de un numero
     *
     * \param el numero a factorizar
     * \return el resultado del numero factorizado
     *
     */

    float factorial(float a){
        int factor = 1;
        for(int i=1;i<=a;i++){
        factor = factor * i;
        }
    return factor;
        }
