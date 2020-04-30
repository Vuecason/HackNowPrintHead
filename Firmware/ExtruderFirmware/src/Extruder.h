/**
 * Author: Dival Banerjee
 */


#ifndef EXTRUDER_H_
#define EXTRUDER_H_


//Using Polulu 37D motor 100:1 gear ratio with encoder feedback
#define ROTATIONS_PER_MILIMETER     6.35
#define TICKS_PER_ROTATION          640

//Includes---------------------------------------------------------------------
#include <Arduino.h>
#include "Motor/Bridge/L298N.h"
#include "GearMotor.h"

class Extruder_t{
    public:
        
        /**
         * Stops the exrustion
         */
        void StopExtruding();

        /**
         * @param length the length of rod to be extruded in mm
         * @param rate the rate to extrude the rod 
         */
        void Extrude(double length, double rate);

    private:

    /**
     * H Bridge Object
     * 
     */
    L298N MotorDriver;

    /**
     * 
     * 
     */
    uint8_t ExtruderMotorPin;

    uint8_t EncoderTickCount;

};

#endif