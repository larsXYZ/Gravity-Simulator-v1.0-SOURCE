#pragma once

//STATES
enum pType { ROCKY, TERRESTIAL, GASGIANT, SMALLSTAR, STAR, BIGSTAR, BLACKHOLE };
enum lType { NONE, SINGLECELL, MULTICELL_SIMPLE, MULTICELL_COMPLEX, INTELLIGENT_TRIBAL, INTELLIGENT_GLOBAL, INTELLIGENT_INTERPLANETARY, COLONY };

//MATH
double const G = 0.00667;
double const SBconst = 0.00007;
double const tempConstTwo = 0.018;
const double PI = 3.14159265359;

//SIMULATION
const int FRAMERATE = 60;
const int FRAMERATE_CHECK_DELTAFRAME = 10;

//DESTRUCTION
const double CREATEPLANETSPEEDMULT = 0.0005;
const double CREATEDUSTSPEEDMULT = 0.003;

//OBJECT-TYPE LIMITS
const double ROCKYLIMIT = 15;
const double TERRESTIALLIMIT = 50;
const double GASGIANTLIMIT = 400;
const double SMALLSTARLIMIT = 800;
const double STARLIMIT = 1500;
const double BIGSTARLIMIT = 3500;

//STAR HEAT MULTIPLIERS
const double HEAT_SMALL_STAR_MULT = 0.8;
const double HEAT_STAR_MULT = 1.85;
const double HEAT_BIG_STAR_MULT = 6;

//NEW OBJECT MASS SLIDER
const double MASS_SLIDER_MIN_VALUE = 1;
const double MASS_SLIDER_MAX_VALUE = 4000;

//PLANETTHINGS
const int maxAtmoLayer = 15;
const int minAtmoLayer = 10;																									
const int brightnessVariance = 8;																						//THE VARIANCE OF ATMOSPHERE BRIGHNESS IN GASGIANTS
const double greenHouseEffectMult = 0.0008;
const double maxAtmo = 600;																							//MAX ATMOSPHERE
const double atmoThicknessMult = 0.05;																			//HEIGHT OF ATMOSPHERE MULTIPLIER
const double atmoAlphaMult = 0.3;																					//ALPHA OF ATMOSPHERE MULTIPLIER

// SHIP
const double SHIP_GAS_EJECT_SPEED = 0.06;

//DUST
const int DUSTLEVETID = 10000;
const int MAXANTALLDUST = 2000;
const double STOVRAD = 1;
const double RANDOMPERCENTAGESIZE = 0.4;
const int NUMBEROFDUSTPARTICLESPEREXPLODE = 15;
const int NUMBEROFDUSTPARTICLESPERCOLLISION = 10;
const int ANTALLPARTIKLERPERROYK = 0;
const int SMK_ACCURACY = 4;
const int DUST_MIN_PHYSICS_SIZE = 15;

//COLLISIONS
const double COLLISION_SIZE_MULTIPLIER = 0.2;
const int COLLISION_HEAT_MULTIPLIER = 90000;
const int FLASH_SIZE = 1.2;

//UI
const int UI_SEPERATION_DISTANCE = 5;																		//SEPERATION OF UI ELEMENTS

//ETC
const double MAXSIZEPLANETCREATOR = 80;
const double MINSIZEPLANETCREATOR = 1;
const double DELTAMASSE = 1;

//PHYSICS DELTA TIME 
const int TIMESTEP_VALUE_START = 10;
const int TIDSKRITTINC = 5;
const int TIMESTEP_VALUE_RANGE = 50;

//TRAIL
const double TRAILRAD = 1.2;
const int TRAILLIFE = 10000;
const int TRAILFREQ = 10;

//ADV IN ORBIT ADDER
const double ADV_ORBIT_ADDER_SELECTED_MARKER_RAD_MULT = 1.4;
const double ADV_ORBIT_ADDER_SELECTED_MARKER_THICKNESS = 2;
const double ADV_ORBIT_ADDER_CENTER_MARKER_RAD = 3;

//LIFE
const double colony_growth_rate = 0.00001;
const double interstellar_growth_rate = 0.0003;
const int colony_expand_rate = 50000;
const int interstellar_expand_rate = 20000;
const int interstellar_min_size = 1000;
const double civilization_compact_constant = 500;
const int LIFE_PREFERRED_TEMP = 298;																//KELVIN
const int LIFE_PREFERRED_ATMO = 300;																//KILOPASCAL
const double LIFE_PREFERRED_TEMP_MULTIPLIER = 0.005;									//HOW MUCH THE TEMPERATURE DIFFERENCE FROM THE IDEAL IMPACTS LIFE
const double LIFE_PREFERRED_ATMO_MULTIPLIER = 0.0003;							//HOW MUCH THE ATMO DIFFERENCE FROM THE IDEAL IMPACTS LIFE

//GOLDI LOCK ZONE
const double inner_goldi_temp = 323.15;
const double outer_goldi_temp = 223.15;
const int goldi_strength = 25;

//LIGHT
const int LIGHT_NUMBER_OF_VERTECES = 50;

//STARLIGHT
const double LIGHT_STRENGTH_MULTIPLIER = 30;
const int LIGHT_START_STRENGTH = 50;
const int LIGHT_END_STRENGTH = 0;

const double SHORT_LIGHT_STRENGTH_MULTIPLIER = 5;					//HOW MUCH STRONGER THE SHORT RANGE LIGHT IS THAN THE LONG RANGE LIGHT
const double SHORT_LIGHT_RANGE_MULTIPLIER = 1.5;						//THE RELATIONSHIP BETWEEN THE STARS RADIUS AND THE INNER LIGHT RADIUS

//EXPLOSIONLIGHT
const int EXPLOSION_LIGHT_START_STRENGTH = 50;
const double EXPLOSION_FLASH_SIZE = 10;

//RNDM SYSTEM GENERATOR
const double MASS_MULTIPLIER = 130;
const double NUMBER_OF_OBJECT_MULTIPLIER = 0.4;

//BOUND
const int BOUND_MIN_RAD = 200;
const double BOUND_OUTSIDE_INDICATOR_SIZE = 20;
const double BOUND_THICKNESS = 20;
const double START_RADIUS = 5000;
const int BOUND_AUTO_UPDATE_RATE = 10;

//ROCHE LIMIT
const double ROCHE_LIMIT_DIST_MULTIPLIER = 2.3;
const double ROCHE_LIMIT_SIZE_DIFFERENCE = 0.3;
const double MINIMUMBREAKUPSIZE = 3;

//EXPLODE PLANET
const double EXPLODE_PLANET_SPEEDMULT_OTHER = 10;											//APPLIES TO EXPLODE PLANET FEATURE
const double EXPLODE_PLANET_SPEEDMULT = 0.025;													//APPLIES TO ROCHE LIMIT
const double EXPLODE_PLANET_DISTCONST = 2;