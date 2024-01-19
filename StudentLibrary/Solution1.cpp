#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1
//exo1
float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
    //C -> F or K
    switch (_from)
    {
    case TemperatureUnits::CELSIUS:
        switch (_to)
        {
        case TemperatureUnits::FAHRENHEIT:
            //C -> F
            return (_value * 9.0f / 5.0f) + 32.0f;
        case TemperatureUnits::KELVIN:
            //C -> K
            return _value + 273.15f;
        default:
            return _value; 
        }
    //F -> C or K
    case TemperatureUnits::FAHRENHEIT:
        switch (_to)
        {
        case TemperatureUnits::CELSIUS:
            //F -> C
            return (_value - 32.0f) * 5.0f / 9.0f;
        case TemperatureUnits::KELVIN:
            //F -> K
            return (_value - 32.0f) * 5.0f / 9.0f + 273.15f;
        default:
            return _value; 
        }
    //K -> C or F
    case TemperatureUnits::KELVIN:
        switch (_to)
        {       
        case TemperatureUnits::CELSIUS:
            //K -> C
            return _value - 273.15f;        
        case TemperatureUnits::FAHRENHEIT:
            //K -> F
            return (_value - 273.15f) * 9.0f / 5.0f + 32.0f;
        default:
            return _value; 
        }
    default:
        return _value; 
    }
}

#endif
