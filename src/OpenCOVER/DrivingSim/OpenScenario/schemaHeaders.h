#include "schema/oscNone.h"
#include "schema/oscPolyline.h"
#include "schema/oscDelete.h"
#include "schema/oscParameterDeclaration.h"
#include "schema/oscParameter.h"
#include "schema/oscFile.h"
#include "schema/oscDirectory.h"
#include "schema/oscCatalogs.h"
#include "schema/oscVehicleCatalog.h"
#include "schema/oscDriverCatalog.h"
#include "schema/oscPedestrianCatalog.h"
#include "schema/oscPedestrianControllerCatalog.h"
#include "schema/oscMiscObjectCatalog.h"
#include "schema/oscEnvironmentCatalog.h"
#include "schema/oscManeuverCatalog.h"
#include "schema/oscTrajectoryCatalog.h"
#include "schema/oscRouteCatalog.h"
#include "schema/oscConditionGroup.h"
#include "schema/oscCatalogReference.h"
#include "schema/oscParameterAssignment.h"
#include "schema/oscSetParameter.h"
#include "schema/oscUserDataList.h"
#include "schema/oscUserData.h"
#include "schema/oscFileHeader.h"
#include "schema/oscPedestrian.h"
#include "schema/oscVehicle.h"
#include "schema/oscPerformance.h"
#include "schema/oscAxles.h"
#include "schema/oscAxle.h"
#include "schema/oscMiscObject.h"
#include "schema/oscCondition.h"
#include "schema/oscByEntity.h"
#include "schema/oscTriggeringEntities.h"
#include "schema/oscEntity.h"
#include "schema/oscEntityCondition.h"
#include "schema/oscEndOfRoad.h"
#include "schema/oscCollision.h"
#include "schema/oscCollisionByEntity.h"
#include "schema/oscByType.h"
#include "schema/oscOffroad.h"
#include "schema/oscTimeHeadway.h"
#include "schema/oscTimeToCollision.h"
#include "schema/oscCollisionTarget.h"
#include "schema/oscAcceleration.h"
#include "schema/oscStandStill.h"
#include "schema/oscConditionSpeed.h"
#include "schema/oscRelativeSpeed.h"
#include "schema/oscTraveledDistance.h"
#include "schema/oscReachPosition.h"
#include "schema/oscConditionDistance.h"
#include "schema/oscRelativeDistance.h"
#include "schema/oscByState.h"
#include "schema/oscAtStart.h"
#include "schema/oscAfterTermination.h"
#include "schema/oscCommand.h"
#include "schema/oscSignalState.h"
#include "schema/oscController.h"
#include "schema/oscByValue.h"
#include "schema/oscConditionParameter.h"
#include "schema/oscTimeOfDay.h"
#include "schema/oscTime.h"
#include "schema/oscDate.h"
#include "schema/oscSimulationTime.h"
#include "schema/oscPrivateAction.h"
#include "schema/oscLongitudinal.h"
#include "schema/oscSpeed.h"
#include "schema/oscSpeedDynamics.h"
#include "schema/oscTarget.h"
#include "schema/oscRelativeTarget.h"
#include "schema/oscAbsolute.h"
#include "schema/oscDistanceAction.h"
#include "schema/oscDynamics.h"
#include "schema/oscLimited.h"
#include "schema/oscLateral.h"
#include "schema/oscLaneChange.h"
#include "schema/oscLaneChangeDynamics.h"
#include "schema/oscLaneChangeTarget.h"
#include "schema/oscRelative.h"
#include "schema/oscLaneOffset.h"
#include "schema/oscLaneOffsetDynamics.h"
#include "schema/oscLaneOffsetTarget.h"
#include "schema/oscDistance.h"
#include "schema/oscVisibility.h"
#include "schema/oscMeeting.h"
#include "schema/oscAutonomous.h"
#include "schema/oscActionController.h"
#include "schema/oscAssign.h"
#include "schema/oscOverride.h"
#include "schema/oscThrottle.h"
#include "schema/oscBrake.h"
#include "schema/oscClutch.h"
#include "schema/oscParkingBrake.h"
#include "schema/oscSteeringWheel.h"
#include "schema/oscGear.h"
#include "schema/oscRouting.h"
#include "schema/oscFollowRoute.h"
#include "schema/oscFollowTrajectory.h"
#include "schema/oscLongitudinalParams.h"
#include "schema/oscTiming.h"
#include "schema/oscLateralParams.h"
#include "schema/oscAcquirePosition.h"
#include "schema/oscUserDefinedAction.h"
#include "schema/oscScript.h"
#include "schema/oscGlobalAction.h"
#include "schema/oscSetEnvironment.h"
#include "schema/oscActionEntity.h"
#include "schema/oscAdd.h"
#include "schema/oscActionParameter.h"
#include "schema/oscSet.h"
#include "schema/oscModify.h"
#include "schema/oscRule.h"
#include "schema/oscAddRule.h"
#include "schema/oscMultiply.h"
#include "schema/oscInfrastructure.h"
#include "schema/oscInfrastructureSignal.h"
#include "schema/oscSetController.h"
#include "schema/oscSetState.h"
#include "schema/oscTraffic.h"
#include "schema/oscSource.h"
#include "schema/oscSink.h"
#include "schema/oscSwarm.h"
#include "schema/oscCentralObject.h"
#include "schema/oscJam.h"
#include "schema/oscManeuver.h"
#include "schema/oscEvent.h"
#include "schema/oscAction.h"
#include "schema/oscConditions.h"
#include "schema/oscStart.h"
#include "schema/oscStartConditionGroup.h"
#include "schema/oscTrafficDefinition.h"
#include "schema/oscVehicleDistribution.h"
#include "schema/oscDriverDistribution.h"
#include "schema/oscEnvironment.h"
#include "schema/oscEnvironmentTimeOfDay.h"
#include "schema/oscWeather.h"
#include "schema/oscSun.h"
#include "schema/oscFog.h"
#include "schema/oscPrecipitation.h"
#include "schema/oscRoadCondition.h"
#include "schema/oscEffect.h"
#include "schema/oscPedestrianController.h"
#include "schema/oscDriver.h"
#include "schema/oscPersonDescription.h"
#include "schema/oscRoute.h"
#include "schema/oscWaypoint.h"
#include "schema/oscTrajectory.h"
#include "schema/oscVertex.h"
#include "schema/oscShape.h"
#include "schema/oscClothoid.h"
#include "schema/oscSpline.h"
#include "schema/oscControlPoint1.h"
#include "schema/oscControlPoint2.h"
#include "schema/oscPosition.h"
#include "schema/oscWorld.h"
#include "schema/oscRelativeWorld.h"
#include "schema/oscRelativeObject.h"
#include "schema/oscRoad.h"
#include "schema/oscRelativeRoad.h"
#include "schema/oscLane.h"
#include "schema/oscRelativeLane.h"
#include "schema/oscPositionRoute.h"
#include "schema/oscRouteRef.h"
#include "schema/oscRoutePosition.h"
#include "schema/oscCurrent.h"
#include "schema/oscRoadCoord.h"
#include "schema/oscLaneCoord.h"
#include "schema/oscBoundingBox.h"
#include "schema/oscCenter.h"
#include "schema/oscDimension.h"
#include "schema/oscProperties.h"
#include "schema/oscProperty.h"
#include "schema/oscOrientation.h"
#include "schema/oscOpenSCENARIO.h"
#include "schema/oscRoadNetwork.h"
#include "schema/oscSignals.h"
#include "schema/oscSignalsController.h"
#include "schema/oscPhase.h"
#include "schema/oscSignal.h"
#include "schema/oscEntities.h"
#include "schema/oscObject.h"
#include "schema/oscObjectController.h"
#include "schema/oscSelection.h"
#include "schema/oscMembers.h"
#include "schema/oscMembersByEntity.h"
#include "schema/oscStoryboard.h"
#include "schema/oscInit.h"
#include "schema/oscActions.h"
#include "schema/oscPrivate.h"
#include "schema/oscStory.h"
#include "schema/oscAct.h"
#include "schema/oscSequence.h"
#include "schema/oscActors.h"
#include "schema/oscByCondition.h"
#include "schema/oscActConditions.h"
#include "schema/oscEnd.h"
#include "schema/oscCancel.h"
#include "schema/oscCatalogOpenSCENARIO.h"
#include "schema/oscCatalogObject.h"
