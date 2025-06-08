// this section was generated automatically by gerEFI tool config_definition_base-all.jar based on (unknown script) controllers/algo/wall_fuel_state.txt Tue Mar 05 17:17:35 UTC 2024
// by class com.gerefi.output.CHeaderConsumer
// begin
#pragma once
#include "gerefi_types.h"
// start of wall_fuel_state_s
struct wall_fuel_state_s {
	/**
	 * fuel wallwetting injection time
	 *  correction to account for wall wetting effect for current cycle
	 * offset 0
	 */
	float wallFuelCorrection = (float)0;
	/**
	 * Fuel on the wall
	 * in ms of injector open time for each injector.
	 * offset 4
	 */
	floatms_t wallFuel = (floatms_t)0;
};
static_assert(sizeof(wall_fuel_state_s) == 8);

// end
// this section was generated automatically by gerEFI tool config_definition_base-all.jar based on (unknown script) controllers/algo/wall_fuel_state.txt Tue Mar 05 17:17:35 UTC 2024
