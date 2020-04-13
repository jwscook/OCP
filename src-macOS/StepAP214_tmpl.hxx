#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StepBasic_Approval.hxx>
#include <StepBasic_DocumentRelationship.hxx>
#include <StepRepr_ExternallyDefinedRepresentation.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <StepBasic_GroupRelationship.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepRepr_PropertyDefinitionRepresentation.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_RepresentationRelationshipWithTransformation.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepBasic_ProductDefinitionWithAssociatedDocuments.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_ExternallyDefinedRepresentation.hxx>
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepAP214_Protocol.hxx>
#include <StepAP214_AutoDesignDateAndPersonItem.hxx>
#include <StepAP214_AutoDesignDateAndTimeItem.hxx>
#include <StepAP214_AutoDesignDatedItem.hxx>
#include <StepAP214_AutoDesignGeneralOrgItem.hxx>
#include <StepAP214_AutoDesignOrganizationItem.hxx>
#include <StepAP214_AutoDesignGroupedItem.hxx>
#include <StepAP214_AutoDesignPresentedItemSelect.hxx>
#include <StepAP214_AutoDesignReferencingItem.hxx>
#include <StepAP214_DateAndTimeItem.hxx>
#include <StepAP214_DateItem.hxx>
#include <StepAP214_ApprovalItem.hxx>
#include <StepAP214_OrganizationItem.hxx>
#include <StepAP214_DocumentReferenceItem.hxx>
#include <StepAP214_GroupItem.hxx>
#include <StepAP214_PersonAndOrganizationItem.hxx>
#include <StepAP214_PresentedItemSelect.hxx>
#include <StepAP214_SecurityClassificationItem.hxx>
#include <StepAP214_Protocol.hxx>
#include <StepAP214_AutoDesignApprovalAssignment.hxx>
#include <StepAP214_AutoDesignActualDateAndTimeAssignment.hxx>
#include <StepAP214_AutoDesignNominalDateAndTimeAssignment.hxx>
#include <StepAP214_AutoDesignActualDateAssignment.hxx>
#include <StepAP214_AutoDesignNominalDateAssignment.hxx>
#include <StepAP214_AutoDesignGroupAssignment.hxx>
#include <StepAP214_AutoDesignOrganizationAssignment.hxx>
#include <StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#include <StepAP214_AutoDesignPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AutoDesignPresentedItem.hxx>
#include <StepAP214_AutoDesignSecurityClassificationAssignment.hxx>
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <StepAP214_AppliedApprovalAssignment.hxx>
#include <StepAP214_AppliedDateAndTimeAssignment.hxx>
#include <StepAP214_AppliedDateAssignment.hxx>
#include <StepAP214_AppliedGroupAssignment.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AppliedPresentedItem.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <StepAP214_Class.hxx>
#include <StepAP214_ExternalIdentificationItem.hxx>
#include <StepAP214_ExternallyDefinedClass.hxx>
#include <StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include <StepAP214_RepItemGroup.hxx>
#include <StepRepr_AssemblyComponentUsageSubstitute.hxx>
#include <StepBasic_DocumentFile.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_Effectivity.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_GroupRelationship.hxx>
#include <StepBasic_ProductDefinitionFormationRelationship.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_OrganizationRole.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#include <StepBasic_ProductDefinitionEffectivity.hxx>
#include <StepAP214_AutoDesignOrganizationAssignment.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepRepr_Representation.hxx>
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <StepRepr_ExternallyDefinedRepresentation.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepBasic_ProductDefinitionWithAssociatedDocuments.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_PhysicallyModeledProductDefinition.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Action.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepRepr_ConfigurationDesign.hxx>
#include <StepRepr_ConfigurationEffectivity.hxx>
#include <StepVisual_DraughtingModel.hxx>
#include <StepBasic_GeneralProperty.hxx>
#include <StepRepr_MakeFromUsageOption.hxx>
#include <StepRepr_ProductConcept.hxx>
#include <StepRepr_ProductDefinitionUsage.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepBasic_Approval.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepBasic_ExternallyDefinedItem.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_GroupRelationship.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_Approval.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepBasic_Approval.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepBasic_Approval.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepShape_AdvancedBrepShapeRepresentation.hxx>
#include <StepShape_CsgShapeRepresentation.hxx>
#include <StepShape_FacetedBrepShapeRepresentation.hxx>
#include <StepShape_GeometricallyBoundedSurfaceShapeRepresentation.hxx>
#include <StepShape_GeometricallyBoundedWireframeShapeRepresentation.hxx>
#include <StepShape_ManifoldSurfaceShapeRepresentation.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepVisual_TemplateInstance.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepBasic_DocumentRelationship.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_OrganizationRole.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#include <StepBasic_ProductDefinitionEffectivity.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_ExternallyDefinedItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_SourceItem.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_ExternallyDefinedItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_SourceItem.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepBasic_DocumentFile.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_ExternallyDefinedClass.hxx>
#include <StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_ApprovalStatus.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_OrganizationalAddress.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepGeom_TrimmedCurve.hxx>
#include <StepBasic_DateAndTimeAssignment.hxx>
#include <StepBasic_DateAssignment.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_Document.hxx>
#include <TCollection_HAsciiString.hxx>

// module includes
#include <StepAP214_AutoDesignPresentedItem.hxx>
#include <StepAP214_Array1OfAutoDesignPresentedItemSelect.hxx>
#include <StepAP214_AutoDesignReferencingItem.hxx>
#include <StepAP214_DateAndTimeItem.hxx>
#include <StepAP214_Array1OfExternalIdentificationItem.hxx>
#include <StepAP214_GroupItem.hxx>
#include <StepAP214_AppliedPresentedItem.hxx>
#include <StepAP214_AutoDesignGeneralOrgItem.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <StepAP214.hxx>
#include <StepAP214_Array1OfAutoDesignDateAndPersonItem.hxx>
#include <StepAP214_Array1OfSecurityClassificationItem.hxx>
#include <StepAP214_ApprovalItem.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_Array1OfPersonAndOrganizationItem.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepAP214_AutoDesignSecurityClassificationAssignment.hxx>
#include <StepAP214_AutoDesignDateAndTimeItem.hxx>
#include <StepAP214_AutoDesignDateAndPersonItem.hxx>
#include <StepAP214_AppliedDateAssignment.hxx>
#include <StepAP214_Class.hxx>
#include <StepAP214_AutoDesignOrganizationItem.hxx>
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <StepAP214_HArray1OfApprovalItem.hxx>
#include <StepAP214_SecurityClassificationItem.hxx>
#include <StepAP214_DocumentReferenceItem.hxx>
#include <StepAP214_Array1OfPresentedItemSelect.hxx>
#include <StepAP214_HArray1OfAutoDesignGroupedItem.hxx>
#include <StepAP214_HArray1OfDocumentReferenceItem.hxx>
#include <StepAP214_RepItemGroup.hxx>
#include <StepAP214_AppliedApprovalAssignment.hxx>
#include <StepAP214_PersonAndOrganizationItem.hxx>
#include <StepAP214_OrganizationItem.hxx>
#include <StepAP214_AutoDesignGroupedItem.hxx>
#include <StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#include <StepAP214_HArray1OfAutoDesignPresentedItemSelect.hxx>
#include <StepAP214_Array1OfAutoDesignReferencingItem.hxx>
#include <StepAP214_AutoDesignPresentedItemSelect.hxx>
#include <StepAP214_Array1OfAutoDesignGroupedItem.hxx>
#include <StepAP214_AutoDesignActualDateAssignment.hxx>
#include <StepAP214_AutoDesignOrganizationAssignment.hxx>
#include <StepAP214_AutoDesignApprovalAssignment.hxx>
#include <StepAP214_AutoDesignDatedItem.hxx>
#include <StepAP214_AutoDesignNominalDateAndTimeAssignment.hxx>
#include <StepAP214_Array1OfAutoDesignGeneralOrgItem.hxx>
#include <StepAP214_HArray1OfOrganizationItem.hxx>
#include <StepAP214_Array1OfDocumentReferenceItem.hxx>
#include <StepAP214_HArray1OfAutoDesignReferencingItem.hxx>
#include <StepAP214_Array1OfDateItem.hxx>
#include <StepAP214_Array1OfGroupItem.hxx>
#include <StepAP214_AutoDesignActualDateAndTimeAssignment.hxx>
#include <StepAP214_HArray1OfAutoDesignDateAndTimeItem.hxx>
#include <StepAP214_ExternallyDefinedClass.hxx>
#include <StepAP214_HArray1OfAutoDesignGeneralOrgItem.hxx>
#include <StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include <StepAP214_AppliedDateAndTimeAssignment.hxx>
#include <StepAP214_HArray1OfPersonAndOrganizationItem.hxx>
#include <StepAP214_HArray1OfDateItem.hxx>
#include <StepAP214_HArray1OfDateAndTimeItem.hxx>
#include <StepAP214_Array1OfOrganizationItem.hxx>
#include <StepAP214_DateItem.hxx>
#include <StepAP214_AutoDesignNominalDateAssignment.hxx>
#include <StepAP214_Array1OfApprovalItem.hxx>
#include <StepAP214_ExternalIdentificationItem.hxx>
#include <StepAP214_Protocol.hxx>
#include <StepAP214_HArray1OfAutoDesignDatedItem.hxx>
#include <StepAP214_AppliedGroupAssignment.hxx>
#include <StepAP214_HArray1OfSecurityClassificationItem.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_PresentedItemSelect.hxx>
#include <StepAP214_Array1OfAutoDesignDateAndTimeItem.hxx>
#include <StepAP214_HArray1OfAutoDesignDateAndPersonItem.hxx>
#include <StepAP214_HArray1OfPresentedItemSelect.hxx>
#include <StepAP214_HArray1OfGroupItem.hxx>
#include <StepAP214_HArray1OfExternalIdentificationItem.hxx>
#include <StepAP214_Array1OfDateAndTimeItem.hxx>
#include <StepAP214_AutoDesignPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AutoDesignGroupAssignment.hxx>
#include <StepAP214_Array1OfAutoDesignDatedItem.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StepAP214_AutoDesignPresentedItem.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignPresentedItemSelect.hxx
// ./opencascade/StepAP214_AutoDesignReferencingItem.hxx
// ./opencascade/StepAP214_DateAndTimeItem.hxx
// ./opencascade/StepAP214_Array1OfExternalIdentificationItem.hxx
// ./opencascade/StepAP214_GroupItem.hxx
// ./opencascade/StepAP214_AppliedPresentedItem.hxx
// ./opencascade/StepAP214_AutoDesignGeneralOrgItem.hxx
// ./opencascade/StepAP214_AppliedExternalIdentificationAssignment.hxx
// ./opencascade/StepAP214.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignDateAndPersonItem.hxx
// ./opencascade/StepAP214_Array1OfSecurityClassificationItem.hxx
// ./opencascade/StepAP214_ApprovalItem.hxx
// ./opencascade/StepAP214_AppliedOrganizationAssignment.hxx
// ./opencascade/StepAP214_Array1OfPersonAndOrganizationItem.hxx
// ./opencascade/StepAP214_AppliedSecurityClassificationAssignment.hxx
// ./opencascade/StepAP214_AutoDesignSecurityClassificationAssignment.hxx
// ./opencascade/StepAP214_AutoDesignDateAndTimeItem.hxx
// ./opencascade/StepAP214_AutoDesignDateAndPersonItem.hxx
// ./opencascade/StepAP214_AppliedDateAssignment.hxx
// ./opencascade/StepAP214_Class.hxx
// ./opencascade/StepAP214_AutoDesignOrganizationItem.hxx
// ./opencascade/StepAP214_AutoDesignDocumentReference.hxx
// ./opencascade/StepAP214_HArray1OfApprovalItem.hxx
// ./opencascade/StepAP214_SecurityClassificationItem.hxx
// ./opencascade/StepAP214_DocumentReferenceItem.hxx
// ./opencascade/StepAP214_Array1OfPresentedItemSelect.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignGroupedItem.hxx
// ./opencascade/StepAP214_HArray1OfDocumentReferenceItem.hxx
// ./opencascade/StepAP214_RepItemGroup.hxx
// ./opencascade/StepAP214_AppliedApprovalAssignment.hxx
// ./opencascade/StepAP214_PersonAndOrganizationItem.hxx
// ./opencascade/StepAP214_OrganizationItem.hxx
// ./opencascade/StepAP214_AutoDesignGroupedItem.hxx
// ./opencascade/StepAP214_AutoDesignDateAndPersonAssignment.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignPresentedItemSelect.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignReferencingItem.hxx
// ./opencascade/StepAP214_AutoDesignPresentedItemSelect.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignGroupedItem.hxx
// ./opencascade/StepAP214_AutoDesignActualDateAssignment.hxx
// ./opencascade/StepAP214_AutoDesignOrganizationAssignment.hxx
// ./opencascade/StepAP214_AutoDesignApprovalAssignment.hxx
// ./opencascade/StepAP214_AutoDesignDatedItem.hxx
// ./opencascade/StepAP214_AutoDesignNominalDateAndTimeAssignment.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignGeneralOrgItem.hxx
// ./opencascade/StepAP214_HArray1OfOrganizationItem.hxx
// ./opencascade/StepAP214_Array1OfDocumentReferenceItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignReferencingItem.hxx
// ./opencascade/StepAP214_Array1OfDateItem.hxx
// ./opencascade/StepAP214_Array1OfGroupItem.hxx
// ./opencascade/StepAP214_AutoDesignActualDateAndTimeAssignment.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignDateAndTimeItem.hxx
// ./opencascade/StepAP214_ExternallyDefinedClass.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignGeneralOrgItem.hxx
// ./opencascade/StepAP214_ExternallyDefinedGeneralProperty.hxx
// ./opencascade/StepAP214_AppliedDateAndTimeAssignment.hxx
// ./opencascade/StepAP214_HArray1OfPersonAndOrganizationItem.hxx
// ./opencascade/StepAP214_HArray1OfDateItem.hxx
// ./opencascade/StepAP214_HArray1OfDateAndTimeItem.hxx
// ./opencascade/StepAP214_Array1OfOrganizationItem.hxx
// ./opencascade/StepAP214_DateItem.hxx
// ./opencascade/StepAP214_AutoDesignNominalDateAssignment.hxx
// ./opencascade/StepAP214_Array1OfApprovalItem.hxx
// ./opencascade/StepAP214_ExternalIdentificationItem.hxx
// ./opencascade/StepAP214_Protocol.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignDatedItem.hxx
// ./opencascade/StepAP214_AppliedGroupAssignment.hxx
// ./opencascade/StepAP214_HArray1OfSecurityClassificationItem.hxx
// ./opencascade/StepAP214_AppliedPersonAndOrganizationAssignment.hxx
// ./opencascade/StepAP214_PresentedItemSelect.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignDateAndTimeItem.hxx
// ./opencascade/StepAP214_HArray1OfAutoDesignDateAndPersonItem.hxx
// ./opencascade/StepAP214_HArray1OfPresentedItemSelect.hxx
// ./opencascade/StepAP214_HArray1OfGroupItem.hxx
// ./opencascade/StepAP214_HArray1OfExternalIdentificationItem.hxx
// ./opencascade/StepAP214_Array1OfDateAndTimeItem.hxx
// ./opencascade/StepAP214_AutoDesignPersonAndOrganizationAssignment.hxx
// ./opencascade/StepAP214_AutoDesignGroupAssignment.hxx
// ./opencascade/StepAP214_Array1OfAutoDesignDatedItem.hxx
// ./opencascade/StepAP214_AppliedDocumentReference.hxx

// user-defined post