#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_Surface.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <math_Matrix.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_ExtElC.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_CCLocFOfLocECC.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_Surface.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Extrema_CCLocFOfLocECC2d.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <GeomAdaptor_HSurfaceOfLinearExtrusion.hxx>
#include <StdFail_NotDone.hxx>
#include <GeomAdaptor_HSurfaceOfRevolution.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <gp_Lin.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Circ.hxx>
#include <gp_Hypr.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <gp_Pln.hxx>
#include <gp_Sphere.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Torus.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Pln.hxx>
#include <gp_Cone.hxx>
#include <gp_Torus.hxx>
#include <gp_Sphere.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Extrema_ExtElC2d.hxx>
#include <Extrema_ECC2d.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_POnCurv.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_ExtPExtS.hxx>
#include <Extrema_ExtPRevS.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Adaptor3d_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_Surface.hxx>

// module includes
#include <Extrema_POnSurfParams.hxx>
#include <Extrema_ExtElC2d.hxx>
#include <Extrema_ExtElC.hxx>
#include <Extrema_ELPCOfLocateExtPC.hxx>
#include <Extrema_ExtCS.hxx>
#include <Extrema_HArray1OfPOnSurf.hxx>
#include <Extrema_FuncExtSS.hxx>
#include <Extrema_FuncPSDist.hxx>
#include <Extrema_Curve2dTool.hxx>
#include <Extrema_Array2OfPOnSurf.hxx>
#include <Extrema_POnCurv.hxx>
#include <Extrema_ExtPElC2d.hxx>
#include <Extrema_CCLocFOfLocECC.hxx>
#include <Extrema_LocEPCOfLocateExtPC2d.hxx>
#include <Extrema_ExtCC.hxx>
#include <Extrema_LocECC.hxx>
#include <Extrema_SequenceOfPOnCurv.hxx>
#include <Extrema_EPCOfELPCOfLocateExtPC2d.hxx>
#include <Extrema_CurveTool.hxx>
#include <Extrema_GenExtSS.hxx>
#include <Extrema_GenExtPS.hxx>
#include <Extrema_POnSurf.hxx>
#include <Extrema_PCLocFOfLocEPCOfLocateExtPC.hxx>
#include <Extrema_ExtPC2d.hxx>
#include <Extrema_GenExtCS.hxx>
#include <Extrema_Array2OfPOnSurfParams.hxx>
#include <Extrema_ExtAlgo.hxx>
#include <Extrema_FuncPSNorm.hxx>
#include <Extrema_ExtFlag.hxx>
#include <Extrema_HArray2OfPOnSurf.hxx>
#include <Extrema_GlobOptFuncCS.hxx>
#include <Extrema_ELPCOfLocateExtPC2d.hxx>
#include <Extrema_FuncExtCS.hxx>
#include <Extrema_Array2OfPOnCurv.hxx>
#include <Extrema_GenLocateExtCS.hxx>
#include <Extrema_LocECC2d.hxx>
#include <Extrema_LocateExtPC2d.hxx>
#include <Extrema_LocateExtCC.hxx>
#include <Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.hxx>
#include <Extrema_SequenceOfPOnCurv2d.hxx>
#include <Extrema_PCLocFOfLocEPCOfLocateExtPC2d.hxx>
#include <Extrema_HArray1OfPOnCurv2d.hxx>
#include <Extrema_GlobOptFuncCC.hxx>
#include <Extrema_LocateExtPC.hxx>
#include <Extrema_GenLocateExtPS.hxx>
#include <Extrema_LocEPCOfLocateExtPC.hxx>
#include <Extrema_ExtPElC.hxx>
#include <Extrema_ExtPC.hxx>
#include <Extrema_HArray1OfPOnCurv.hxx>
#include <Extrema_CCLocFOfLocECC2d.hxx>
#include <Extrema_LocateExtCC2d.hxx>
#include <Extrema_EPCOfExtPC2d.hxx>
#include <Extrema_ElementType.hxx>
#include <Extrema_ExtPExtS.hxx>
#include <Extrema_HArray2OfPOnSurfParams.hxx>
#include <Extrema_ExtPRevS.hxx>
#include <Extrema_ECC2d.hxx>
#include <Extrema_Array2OfPOnCurv2d.hxx>
#include <Extrema_HArray2OfPOnCurv.hxx>
#include <Extrema_EPCOfExtPC.hxx>
#include <Extrema_ExtSS.hxx>
#include <Extrema_Array1OfPOnCurv.hxx>
#include <Extrema_ExtElCS.hxx>
#include <Extrema_PCFOfEPCOfExtPC2d.hxx>
#include <Extrema_HUBTreeOfSphere.hxx>
#include <Extrema_Array1OfPOnSurf.hxx>
#include <Extrema_Array1OfPOnCurv2d.hxx>
#include <Extrema_PCFOfEPCOfExtPC.hxx>
#include <Extrema_SequenceOfPOnSurf.hxx>
#include <Extrema_EPCOfELPCOfLocateExtPC.hxx>
#include <Extrema_ExtElSS.hxx>
#include <Extrema_ExtPElS.hxx>
#include <Extrema_ExtCC2d.hxx>
#include <Extrema_ECC.hxx>
#include <Extrema_PCFOfEPCOfELPCOfLocateExtPC.hxx>
#include <Extrema_POnCurv2d.hxx>
#include <Extrema_ExtPS.hxx>
#include <Extrema_GenLocateExtSS.hxx>
#include <Extrema_HArray2OfPOnCurv2d.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Extrema_POnSurfParams.hxx
// ./opencascade/Extrema_ExtElC2d.hxx
// ./opencascade/Extrema_ExtElC.hxx
// ./opencascade/Extrema_ELPCOfLocateExtPC.hxx
// ./opencascade/Extrema_ExtCS.hxx
// ./opencascade/Extrema_HArray1OfPOnSurf.hxx
// ./opencascade/Extrema_FuncExtSS.hxx
// ./opencascade/Extrema_FuncPSDist.hxx
// ./opencascade/Extrema_Curve2dTool.hxx
// ./opencascade/Extrema_Array2OfPOnSurf.hxx
// ./opencascade/Extrema_POnCurv.hxx
// ./opencascade/Extrema_ExtPElC2d.hxx
// ./opencascade/Extrema_CCLocFOfLocECC.hxx
// ./opencascade/Extrema_LocEPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_ExtCC.hxx
// ./opencascade/Extrema_LocECC.hxx
// ./opencascade/Extrema_SequenceOfPOnCurv.hxx
// ./opencascade/Extrema_EPCOfELPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_CurveTool.hxx
// ./opencascade/Extrema_GenExtSS.hxx
// ./opencascade/Extrema_GenExtPS.hxx
// ./opencascade/Extrema_POnSurf.hxx
// ./opencascade/Extrema_PCLocFOfLocEPCOfLocateExtPC.hxx
// ./opencascade/Extrema_ExtPC2d.hxx
// ./opencascade/Extrema_GenExtCS.hxx
// ./opencascade/Extrema_Array2OfPOnSurfParams.hxx
// ./opencascade/Extrema_ExtAlgo.hxx
// ./opencascade/Extrema_FuncPSNorm.hxx
// ./opencascade/Extrema_ExtFlag.hxx
// ./opencascade/Extrema_HArray2OfPOnSurf.hxx
// ./opencascade/Extrema_GlobOptFuncCS.hxx
// ./opencascade/Extrema_ELPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_FuncExtCS.hxx
// ./opencascade/Extrema_Array2OfPOnCurv.hxx
// ./opencascade/Extrema_GenLocateExtCS.hxx
// ./opencascade/Extrema_LocECC2d.hxx
// ./opencascade/Extrema_LocateExtPC2d.hxx
// ./opencascade/Extrema_LocateExtCC.hxx
// ./opencascade/Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_SequenceOfPOnCurv2d.hxx
// ./opencascade/Extrema_PCLocFOfLocEPCOfLocateExtPC2d.hxx
// ./opencascade/Extrema_HArray1OfPOnCurv2d.hxx
// ./opencascade/Extrema_GlobOptFuncCC.hxx
// ./opencascade/Extrema_LocateExtPC.hxx
// ./opencascade/Extrema_GenLocateExtPS.hxx
// ./opencascade/Extrema_LocEPCOfLocateExtPC.hxx
// ./opencascade/Extrema_ExtPElC.hxx
// ./opencascade/Extrema_ExtPC.hxx
// ./opencascade/Extrema_HArray1OfPOnCurv.hxx
// ./opencascade/Extrema_CCLocFOfLocECC2d.hxx
// ./opencascade/Extrema_LocateExtCC2d.hxx
// ./opencascade/Extrema_EPCOfExtPC2d.hxx
// ./opencascade/Extrema_ElementType.hxx
// ./opencascade/Extrema_ExtPExtS.hxx
// ./opencascade/Extrema_HArray2OfPOnSurfParams.hxx
// ./opencascade/Extrema_ExtPRevS.hxx
// ./opencascade/Extrema_ECC2d.hxx
// ./opencascade/Extrema_Array2OfPOnCurv2d.hxx
// ./opencascade/Extrema_HArray2OfPOnCurv.hxx
// ./opencascade/Extrema_EPCOfExtPC.hxx
// ./opencascade/Extrema_ExtSS.hxx
// ./opencascade/Extrema_Array1OfPOnCurv.hxx
// ./opencascade/Extrema_ExtElCS.hxx
// ./opencascade/Extrema_PCFOfEPCOfExtPC2d.hxx
// ./opencascade/Extrema_HUBTreeOfSphere.hxx
// ./opencascade/Extrema_Array1OfPOnSurf.hxx
// ./opencascade/Extrema_Array1OfPOnCurv2d.hxx
// ./opencascade/Extrema_PCFOfEPCOfExtPC.hxx
// ./opencascade/Extrema_SequenceOfPOnSurf.hxx
// ./opencascade/Extrema_EPCOfELPCOfLocateExtPC.hxx
// ./opencascade/Extrema_ExtElSS.hxx
// ./opencascade/Extrema_ExtPElS.hxx
// ./opencascade/Extrema_ExtCC2d.hxx
// ./opencascade/Extrema_ECC.hxx
// ./opencascade/Extrema_PCFOfEPCOfELPCOfLocateExtPC.hxx
// ./opencascade/Extrema_POnCurv2d.hxx
// ./opencascade/Extrema_ExtPS.hxx
// ./opencascade/Extrema_GenLocateExtSS.hxx
// ./opencascade/Extrema_HArray2OfPOnCurv2d.hxx

// user-defined post