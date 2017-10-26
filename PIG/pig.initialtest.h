/*
** svn $Id$
*******************************************************************************
** Copyright (c) 2002-2016 The ROMS/TOMS Group
**
**   Licensed under a MIT/X style license
**
**   See License_ROMS.txt
**
*******************************************************************************
**
**  Options for PIG Cavity Model
*/


/*Momentum Equations*/

#define UV_ADV
#define UV_COR
#define SPLINES_VVISC
#define UV_C4ADVECTION
#undef UV_VIS2
#define UV_VIS4
#define UV_QDRAG


/*Tracer Equations*/
#undef TS_C4HADVECTION
#define TS_U3HADVECTION
#define TS_C4VADVECTION
#define TS_DIF4
#undef TS_DIF2
#undef T_PASSIVE
#define NONLIN_EOS
#define SALINITY
#define SPLINES_VDIFF


/*Pressure Gradient Algorithm*/
#define DJ_GRADPS


/*Surface Fluxes Formulation*/
#undef BULK_FLUXES
#ifdef BULK_FLUXES
# define LONGWAVE
# define EMINUSP
# define SOLAR_SOURCE
#endif


/*Model Configuration*/
#define SOLVE3D
#undef AVERAGES
#undef CURVGRID
#undef SPHERICAL
#define MASKING
#undef DIAGNOSTICS_UV
#undef DIAGNOSTICS_TS


/*Iceshelf options*/
#define ICESHELF
#undef ICESHELF_MORPH
#undef ICESHELF_2EQ_VBC
#undef ICESHELF_3EQ_VBC
#undef ICESHELF_TEOS10
#undef LIMIT_ICESTRESS


/*FISOC options*/
#undef FISOC
#undef FISOC_DDDT


/*Lagrangian Drifters*/
#undef FLOATS
#undef FLOAT_VWALK


/*Analytical Fields*/
#define ANA_BSFLUX
#define ANA_BTFLUX
#define ANA_SRFLUX

#define ANA_SMFLUX
#define ANA_STFLUX
#define ANA_SSFLUX
#define ANA_WINDS

#undef GRD_TEST
#ifdef GRD_TEST
# define ANA_INITIAL
# define ANA_SMFLUX
# define ANA_STFLUX
# define ANA_SSFLUX
# define ANA_WINDS
#endif


/*Horizontal Mixing*/
#undef MIX_GEO_UV
#define MIX_S_UV
#undef MIX_ISO_TS
#define MIX_GEO_TS


/*Vertical Turbulent Mixing*/
#define LMD_MIXING
#undef LMD_BKPP
#define LMD_CONVEC
#define LMD_DDMIX
#define LMD_NONLOCAL
#define LMD_RIMIX
#define LMD_SKPP
#define RI_SPLINES


/*NetCDF Input/Output*/
#define HDF5
#undef PERFECT_RESTART


/*Sea Ice*/
#undef ICE_MODEL
#ifdef ICE_MODEL
# define ICE_THERMO
# define ICE_MK
# define ICE_ALB_EC92
# define ICE_MOMENTUM
#endif

#undef ANA_SEAICE
#undef SEAICE_CLIMA
#undef SEAICE_WINTER
