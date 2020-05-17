#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
typedef struct
{

    char nombre[51];
    char apellido[51];
    int sector;
    float salario;
    int id;
    int estado;

} eEmpleado;





/** \brief busca un lugar ocupado
 *
 * \param cliente[] eEmpleado
 * \param tamanio int
 * \return int
 *
 */
int buscarOcupado(eEmpleado cliente[], int tamanio);
/** \brief inicia el estado del cliente
 *
 * \param cliente[] eEmpleado
 * \param tamanio int
 * \return void
 *
 */
void inicioestado(eEmpleado cliente[],int tamanio);
/** \brief toma los datos del usuario
 *
 * \param cliente[] eEmpleado
 * \param tamanio int
 * \param id int
 * \return int
 *
 */
int altas(eEmpleado cliente[],int tamanio,int id );
/** \brief busca el lugar libre
 *
 * \param cliente[] eEmpleado
 * \param tamanio int
 * \return int
 *
 */
int buscarLibre(eEmpleado cliente[], int tamanio);

/** \brief muestra los datos cargados
 *
 * \param cliente[] eEmpleado
 * \param tamanio int
 * \return void
 *
 */
void mostrar (eEmpleado cliente[],int tamanio);
/** \brief dar de baja el cliente
 *
 * \param cliente[] eEmpleado
 * \param tamanio int
 * \return void
 *
 */
void baja(eEmpleado cliente[],int tamanio);
/** \brief busca empleado
 *
 * \param cliente[] eEmpleado
 * \param tam int
 * \param idmodificar int
 * \return int
 *
 */
int buscarEpleado(eEmpleado cliente[],int tam, int idmodificar);
/** \brief modifica empleado
 *
 * \param cliente[] eEmpleado
 * \param tam int
 * \return void
 *
 */
void modificar(eEmpleado cliente[], int tam );
/** \brief ordena alfabeticamente el empleado por apellido y sector
 *
 * \param cliente[] eEmpleado
 * \param tam int
 * \return void
 *
 */
void ordenar(eEmpleado cliente[], int tam);
/** \brief total de salarios
 *
 * \param cliente[] eEmpleado
 * \param tam int
 * \return float
 *
 */
float totalsalario(eEmpleado cliente[],int tam);
/** \brief saca el promedio
 *
 * \param cliente[] eEmpleado
 * \param tam int
 * \return float
 *
 */
float promedio(eEmpleado cliente[],int tam);
/** \brief saca la cantidad de empleados que superan el promedio
 *
 * \param cliente[] eEmpleado
 * \param tam int
 * \return int
 *
 */
int promediosuper(eEmpleado cliente[],int tam);

