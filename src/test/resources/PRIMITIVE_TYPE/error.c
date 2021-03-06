#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* Just to include useless headers coming from an arm CodeBlocks template. */
#include "at91sam7a3.h"
#include "sam7a3ek.h"

/* Contains test functions */
#include "functions.h"

/** \brief It is just a random function which is never called and
 *         which generates an error with a fatal division by zero.
 *
 *         Expected issues:
 *         - division by zero (2)
 *         - unused function
 *
 * \param x int32_t A random integer to be passed.
 * \return void Nothing.
 *
 */
void just_a_wild_function_never_called(int32_t x)
{
    int32_t check_param = 0;

    if(0!=x)
    {
        check_param = x/check_param;
    }
    else
    {
        check_param = check_param/x;
    }
}

/** \brief This main function is obviously useless but is a good
 *         to show how to use GitLab, Jenkins and SonarQube.
 *         This comment is a bit long for nothing but it is done
 *         so to artificially improve comment ratio.
 *
 *         Expected issues:
 *         - implicit cast (2)
 *         - magic number (4)
 *         - array overflow
 *         - unused variable
 *         - uninitialized variable
 *
 * \param No parameter for a virtual utility.
 * \return A friendly 0 if all was ok.
 *
 */
int main(void)
{
    uint32_t quoi = 6;
    uint32_t res = 0;
    int feur = 4;
    uint8_t pipo;
    uint8_t * overflow = (uint8_t*)malloc(11*sizeof(uint8_t));

    printf("Hello world!\n");

    res = fact(quoi);
    printf("quoi! = %d\n", res);

    res = fact(feur);
    printf("feur! = %d\n", res);

    res = fact(overflow[11]);
    printf("overflow[11]! = %d\n", res);

    float reel = 3.0;
    printf("reel = %f\n", reel);

    return 0;
}
