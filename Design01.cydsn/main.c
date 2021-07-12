/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <arm_math.h>
//#define float32_t int
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    

    
    for(;;)
    {
        float32_t x[3] = {1.0,2.0,3.0};
        float32_t y[3] = {4.0,5.0,6.0};
        float32_t z[3];
        
        
        TimeMes_Write(0);
         
        arm_add_f32(x, y, z, 3);

        TimeMes_Write(1);

        /* Place your application code here. */
    }
}

/* [] END OF FILE */
