#pragma once
#pragma message("Compiling precompiled header.\n")

#include <windows.h>
#include <cstdio>

#include <algorithm>
#include <list>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <functional>
#include <iostream>
#include <cassert>

#include "game_sa\CEventPedToFlee.h"
#include "game_sa\CEventPedToChase.h"
#include "game_sa\CVehicleScanner.h"
#include "game_sa\CPlayerRelationshipRecorder.h"
#include "game_sa\CLoadMonitor.h"
#include "game_sa\CPedStuckChecker.h"
#include "game_sa\CGroupEventHandler.h"
#include "game_sa\CEventHandlerHistory.h"
#include "game_sa\CPedType.h"
#include "game_sa\CPedScriptedTaskRecord.h"
#include "game_sa\CEventScriptCommand.h"
#include "game_sa\IKChainManager_c.h"
#include "game_sa\CEventGroupEvent.h"
#include "game_sa\CEventGunAimedAt.h"
#include "game_sa\CCrime.h"
#include "game_sa\CEvent.h"
#include "game_sa\CSurfaceTable.h"
#include "game_sa\CReplay.h"
#include "game_sa\CVehicleRecording.h"
#include "game_sa\Collision\CColStore.h"
#include "game_sa\CPedDamageResponseCalculator.h"
#include "game_sa\CPedDamageResponse.h"
#include "game_sa\CEventDamage.h"
#include "game_sa\Enums\AnimationEnums.h"
#include "game_sa\CWaterLevel.h"
#include "game_sa\InlineFunctions.h"
#include "HookSystem.h"
#include "game_sa\CdStreamInfo.h"
#include "game_sa\C2dEffect.h"
#include "game_sa\C3dMarker.h"
#include "game_sa\C3dMarkers.h"
#include "game_sa\CAttractorScanner.h"
#include "game_sa\CAutoPilot.h"
#include "game_sa\CBirds.h"
#include "game_sa\CBouncingPanel.h"
#include "game_sa\CBrightLights.h"
#include "game_sa\CBulletInfo.h"
#include "game_sa\CBulletTrace.h"
#include "game_sa\CBulletTraces.h"
#include "game_sa\CCam.h"
#include "game_sa\CCamera.h"
#include "game_sa\CCamPathSplines.h"
#include "game_sa\CCarAI.h"
#include "game_sa\CCarCtrl.h"
#include "game_sa\CCarEnterExit.h"
#include "game_sa\CCarGenerator.h"
#include "game_sa\CCheat.h"
#include "game_sa\CCheckpoint.h"
#include "game_sa\CCheckpoints.h"
#include "game_sa\CClock.h"
#include "game_sa\CClothes.h"
#include "game_sa\CClothesBuilder.h"
#include "game_sa\CClouds.h"
#include "game_sa\CControllerConfigManager.h"
#include "game_sa\CCoronas.h"
#include "game_sa\CCover.h"
#include "game_sa\CCoverPoint.h"
#include "game_sa\CCredits.h"
#include "game_sa\CCreepingFire.h"
#include "game_sa\CCrimeBeingQd.h"
#include "game_sa\CCustomCarEnvMapPipeline.h"
#include "game_sa\CCustomCarPlateMgr.h"
#include "game_sa\CCutsceneMgr.h"
#include "game_sa\CDamageManager.h"
#include "game_sa\CDarkel.h"
#include "game_sa\CDate.h"
#include "game_sa\CDecision.h"
#include "game_sa\CDecisionMaker.h"
#include "game_sa\CDecisionSimple.h"
#include "game_sa\CDirectory.h"
#include "game_sa\CDoor.h"
#include "game_sa\CDraw.h"
#include "game_sa\CEntityScanner.h"
#include "game_sa\CEntryExit.h"
#include "game_sa\CEntryExitManager.h"
#include "game_sa\CEventGroup.h"
#include "game_sa\CEventHandler.h"
#include "game_sa\CEventScanner.h"
#include "game_sa\CExplosion.h"
#include "game_sa\CFileCarGenerator.h"
#include "game_sa\CFileLoader.h"
#include "game_sa\CFileMgr.h"
#include "game_sa\CFileObjectInstance.h"
#include "game_sa\CFire.h"
#include "game_sa\CFireManager.h"
#include "game_sa\CFont.h"
#include "game_sa\CFormation.h"
#include "game_sa\CGame.h"
#include "game_sa\CGamma.h"
#include "game_sa\CGangInfo.h"
#include "game_sa\CGangs.h"
#include "game_sa\CGangWars.h"
#include "game_sa\CGangWarsSaveStructure.h"
#include "game_sa\CGarages.h"
#include "game_sa\CGeneral.h"
#include "game_sa\CGenericGameStorage.h"
#include "game_sa\cHandlingDataMgr.h"
#include "game_sa\CHud.h"
#include "game_sa\CHudColours.h"
#include "game_sa\CIniFile.h"
#include "game_sa\CIplStore.h"
#include "game_sa\CLoadedCarGroup.h"
#include "game_sa\CLoadingScreen.h"
#include "game_sa\CLocalisation.h"
#include "game_sa\CMenuManager.h"
#include "game_sa\CMenuSystem.h"
#include "game_sa\CMessages.h"
#include "game_sa\CMirrors.h"
#include "game_sa\CMissionCleanup.h"
#include "game_sa\CModelInfoAccelerator.h"
#include "game_sa\CMotionBlurStreaks.h"
#include "game_sa\CNodeAddress.h"
#include "game_sa\CObjectInfo.h"
#include "game_sa\common.h"
#include "game_sa\CompressedVector.h"
#include "game_sa\COnscreenCounterEntry.h"
#include "game_sa\COnscreenTimer.h"
#include "game_sa\COnscreenTimerEntry.h"
#include "game_sa\CPad.h"
#include "game_sa\CPathFind.h"
#include "game_sa\CPedAcquaintance.h"
#include "game_sa\CPedClothesDesc.h"
#include "game_sa\CPedGroup.h"
#include "game_sa\CPedGroupIntelligence.h"
#include "game_sa\CPedGroupMembership.h"
#include "game_sa\CPedGroupPlacer.h"
#include "game_sa\CPedGroups.h"
#include "game_sa\CPedIK.h"
#include "game_sa\CPedIntelligence.h"
#include "game_sa\CPedList.h"
#include "game_sa\CPedPlacement.h"
#include "game_sa\CPedTaskPair.h"
#include "game_sa\CPickup.h"
#include "game_sa\CPickups.h"
#include "game_sa\CPlaneTrail.h"
#include "game_sa\CPlaneTrails.h"
#include "game_sa\CPlayerData.h"
#include "game_sa\CPlayerInfo.h"
#include "game_sa\CPointLights.h"
#include "game_sa\CPointList.h"
#include "game_sa\CPolyBunch.h"
#include "game_sa\CPools.h"
#include "game_sa\CPopCycle.h"
#include "game_sa\CPopulation.h"
#include "game_sa\CProjectileInfo.h"
#include "game_sa\CQueuedMode.h"
#include "game_sa\CRadar.h"
#include "game_sa\CRealTimeShadow.h"
#include "game_sa\CReference.h"
#include "game_sa\CReferences.h"
#include "game_sa\CRegisteredCorona.h"
#include "game_sa\CRegisteredMotionBlurStreak.h"
#include "game_sa\CRenderer.h"
#include "game_sa\CRepeatSector.h"
#include "game_sa\CRestart.h"
#include "game_sa\CRGBA.h"
#include "game_sa\CRideAnimData.h"
#include "game_sa\CRope.h"
#include "game_sa\CRopes.h"
#include "game_sa\CScene.h"
#include "game_sa\CScriptResourceManager.h"
#include "game_sa\CScriptsForBrains.h"
#include "game_sa\CSector.h"
#include "game_sa\CSetPiece.h"
#include "game_sa\CSetPieces.h"
#include "game_sa\CShadowCamera.h"
#include "game_sa\CShadows.h"
#include "game_sa\CShinyTexts.h"
#include "game_sa\CShotInfo.h"
#include "game_sa\CSimpleTransform.h"
#include "game_sa\CSpecialFX.h"
#include "game_sa\CSpecialPlateHandler.h"
#include "game_sa\CSprite.h"
#include "game_sa\CSprite2d.h"
#include "game_sa\CStats.h"
#include "game_sa\CStoredCollPoly.h"
#include "game_sa\CStreamedScripts.h"
#include "game_sa\CStreaming.h"
#include "game_sa\CStreamingInfo.h"
#include "game_sa\CStuckCarCheck.h"
#include "game_sa\CText.h"
#include "game_sa\CTheCarGenerators.h"
#include "game_sa\CTheZones.h"
#include "game_sa\CTimeCycle.h"
#include "game_sa\CTimeCycleBox.h"
#include "game_sa\CTimer.h"
#include "game_sa\CTrainNode.h"
#include "game_sa\cTransmission.h"
#include "game_sa\CTxdStore.h"
#include "game_sa\CUpsideDownCarCheck.h"
#include "game_sa\CUserDisplay.h"
#include "game_sa\CVisibilityPlugins.h"
#include "game_sa\CWanted.h"
#include "game_sa\CWeapon.h"
#include "game_sa\CWeaponEffects.h"
#include "game_sa\CWeaponInfo.h"
#include "game_sa\CWeather.h"
#include "game_sa\CWorld.h"
#include "game_sa\CZone.h"
#include "game_sa\CZoneInfo.h"
#include "game_sa\IplDef.h"
#include "game_sa\RpHAnimBlendInterpFrame.h"
#include "game_sa\RwObjectNameIdAssocation.h"
#include "game_sa\tBikeHandlingData.h"
#include "game_sa\tBinaryIplFile.h"
#include "game_sa\tBoatHandlingData.h"
#include "game_sa\tFlyingHandlingData.h"
#include "game_sa\tHandlingData.h"
#include "game_sa\tPickupMessage.h"
#include "game_sa\tTransmissionGear.h"
#include "game_sa\TxdDef.h"
#include "game_sa\CGameLogic.h"
#include "game_sa\Animation\AnimAssociationData.h"
#include "game_sa\Animation\AnimationId.h"
#include "game_sa\Animation\AnimBlendFrameData.h"
#include "game_sa\Animation\CAnimationStyleDescriptor.h"
#include "game_sa\Animation\CAnimBlendAssocGroup.h"
#include "game_sa\Animation\CAnimBlendAssociation.h"
#include "game_sa\Animation\CAnimBlendClumpData.h"
#include "game_sa\Animation\CAnimBlendHierarchy.h"
#include "game_sa\Animation\CAnimBlendNode.h"
#include "game_sa\Animation\CAnimBlendSequence.h"
#include "game_sa\Animation\CAnimBlendStaticAssociation.h"
#include "game_sa\Animation\CAnimBlock.h"
#include "game_sa\Animation\CAnimManager.h"
#include "game_sa\Audio\CAEAudioEntity.h"
#include "game_sa\Audio\CAEExplosionAudioEntity.h"
#include "game_sa\Audio\CAEFireAudioEntity.h"
#include "game_sa\Audio\CAEPedAudioEntity.h"
#include "game_sa\Audio\CAEPedSpeechAudioEntity.h"
#include "game_sa\Audio\CAEPoliceScannerAudioEntity.h"
#include "game_sa\Audio\CAERadioTrackManager.h"
#include "game_sa\Audio\CAESound.h"
#include "game_sa\Audio\CAETwinLoopSoundEntity.h"
#include "game_sa\Audio\CAEVehicleAudioEntity.h"
#include "game_sa\Audio\CAEWeaponAudioEntity.h"
#include "game_sa\Audio\CAEWeatherAudioEntity.h"
#include "game_sa\Collision\CCollisionEventScanner.h"
#include "game_sa\Collision\CBoundingBox.h"
#include "game_sa\Collision\CBox.h"
#include "game_sa\Collision\CColBox.h"
#include "game_sa\Collision\CColDisk.h"
#include "game_sa\Collision\CColLine.h"
#include "game_sa\Collision\CCollision.h"
#include "game_sa\Collision\CCollisionData.h"
#include "game_sa\Collision\CColModel.h"
#include "game_sa\Collision\CColourSet.h"
#include "game_sa\Collision\CColPoint.h"
#include "game_sa\Collision\CColSphere.h"
#include "game_sa\Collision\CColTriangle.h"
#include "game_sa\Collision\CColTrianglePlane.h"
#include "game_sa\Collision\CSphere.h"
#include "game_sa\Core\CKeyGen.h"
#include "game_sa\Core\CLink.h"
#include "game_sa\Core\CLinkList.h"
#include "game_sa\Core\CMatrix.h"
#include "game_sa\Core\CMatrixLink.h"
#include "game_sa\Core\COctTree.h"
#include "game_sa\Core\COctTreeBase.h"
#include "game_sa\Core\CPool.h"
#include "game_sa\Core\CPtrList.h"
#include "game_sa\Core\CPtrListDoubleLink.h"
#include "game_sa\Core\CPtrListSingleLink.h"
#include "game_sa\Core\CPtrNode.h"
#include "game_sa\Core\CPtrNodeDoubleLink.h"
#include "game_sa\Core\CPtrNodeSingleLink.h"
#include "game_sa\Core\CQuadTreeNode.h"
#include "game_sa\Core\CQuaternion.h"
#include "game_sa\Core\CRect.h"
#include "game_sa\Core\CStore.h"
#include "game_sa\Core\CVector.h"
#include "game_sa\Core\CVector2D.h"
#include "game_sa\Core\ListItem_c.h"
#include "game_sa\Core\List_c.h"
#include "game_sa\Core\SArray.h"
#include "game_sa\Entity\CAnimatedBuilding.h"
#include "game_sa\Entity\CBuilding.h"
#include "game_sa\Entity\CEntity.h"
#include "game_sa\Entity\CPhysical.h"
#include "game_sa\Entity\CPlaceable.h"
#include "game_sa\Entity\Dummy\CDummy.h"
#include "game_sa\Entity\Dummy\CDummyObject.h"
#include "game_sa\Entity\Dummy\CDummyPed.h"
#include "game_sa\Entity\Object\CCutsceneObject.h"
#include "game_sa\Entity\Object\CHandObject.h"
#include "game_sa\Entity\Object\CObject.h"
#include "game_sa\Entity\Object\CProjectile.h"
#include "game_sa\Entity\Ped\CCivilianPed.h"
#include "game_sa\Entity\Ped\CCopPed.h"
#include "game_sa\Entity\Ped\CEmergencyPed.h"
#include "game_sa\Entity\Ped\CPed.h"
#include "game_sa\Entity\Ped\CPlayerPed.h"
#include "game_sa\Entity\Vehicle\CAutomobile.h"
#include "game_sa\Entity\Vehicle\CBike.h"
#include "game_sa\Entity\Vehicle\CBmx.h"
#include "game_sa\Entity\Vehicle\CBoat.h"
#include "game_sa\Entity\Vehicle\CHeli.h"
#include "game_sa\Entity\Vehicle\CMonsterTruck.h"
#include "game_sa\Entity\Vehicle\CPlane.h"
#include "game_sa\Entity\Vehicle\CQuadBike.h"
#include "game_sa\Entity\Vehicle\CTrailer.h"
#include "game_sa\Entity\Vehicle\CTrain.h"
#include "game_sa\Entity\Vehicle\CVehicle.h"
#include "game_sa\Enums\eAnimBlendCallbackType.h"
#include "game_sa\Enums\eAudioEvents.h"
#include "game_sa\Enums\eCamMode.h"
#include "game_sa\Enums\eCarMission.h"
#include "game_sa\Enums\eClothesModelPart.h"
#include "game_sa\Enums\eClothesTexturePart.h"
#include "game_sa\Enums\eCopType.h"
#include "game_sa\Enums\eCrimeType.h"
#include "game_sa\Enums\eDecisionMakerEvents.h"
#include "game_sa\Enums\eEmergencyPedVoices.h"
#include "game_sa\Enums\eEntityStatus.h"
#include "game_sa\Enums\eEntityType.h"
#include "game_sa\Enums\eEventType.h"
#include "game_sa\Enums\eGangID.h"
#include "game_sa\Enums\eModelID.h"
#include "game_sa\Enums\ePadButtons.h"
#include "game_sa\Enums\ePedAnims.h"
#include "game_sa\Enums\ePedBones.h"
#include "game_sa\Enums\ePedModel.h"
#include "game_sa\Enums\ePedPieceTypes.h"
#include "game_sa\Enums\ePedState.h"
#include "game_sa\Enums\ePedType.h"
#include "game_sa\Enums\eRadioID.h"
#include "game_sa\Enums\eScriptCommands.h"
#include "game_sa\Enums\eSoundID.h"
#include "game_sa\Enums\eSprintType.h"
#include "game_sa\Enums\eStatModAbilities.h"
#include "game_sa\Enums\eStats.h"
#include "game_sa\Enums\eStatsReactions.h"
#include "game_sa\Enums\eSurfaceType.h"
#include "game_sa\Enums\eTaskType.h"
#include "game_sa\Enums\eVehicleClass.h"
#include "game_sa\Enums\eVehicleHandlingFlags.h"
#include "game_sa\Enums\eVehicleHandlingModelFlags.h"
#include "game_sa\Enums\eWeaponFire.h"
#include "game_sa\Enums\eWeaponFlags.h"
#include "game_sa\Enums\eWeaponModel.h"
#include "game_sa\Enums\eWeaponType.h"
#include "game_sa\Enums\eWinchType.h"
#include "game_sa\Enums\ePathType.h"
#include "game_sa\Fx\FxBox_c.h"
#include "game_sa\Fx\FxEmitterBP_c.h"
#include "game_sa\Fx\FxFrustumInfo_c.h"
#include "game_sa\Fx\FxInfoManager_c.h"
#include "game_sa\Fx\FxManager_c.h"
#include "game_sa\Fx\FxMemoryPool_c.h"
#include "game_sa\Fx\FxPlane_c.h"
#include "game_sa\Fx\FxPrimBP_c.h"
#include "game_sa\Fx\FxPrtMult_c.h"
#include "game_sa\Fx\FxSphere_c.h"
#include "game_sa\Fx\FxSystemBP_c.h"
#include "game_sa\Fx\FxSystem_c.h"
#include "game_sa\Fx\Fx_c.h"
#include "game_sa\Models\CAtomicModelInfo.h"
#include "game_sa\Models\CBaseModelInfo.h"
#include "game_sa\Models\CClumpModelInfo.h"
#include "game_sa\Models\CModelInfo.h"
#include "game_sa\Models\CPedModelInfo.h"
#include "game_sa\Models\CTimeModelInfo.h"
#include "game_sa\Models\CVehicleModelInfo.h"
#include "game_sa\Models\CWeaponModelInfo.h"
#include "game_sa\Plugins\JPegCompress.h"
#include "game_sa\Plugins\NodeName.h"
#include "game_sa\Plugins\PipelinePlugin.h"
#include "game_sa\RenderWare\D3DIndexDataBuffer.h"
#include "game_sa\RenderWare\D3DResourceSystem.h"
#include "game_sa\RenderWare\D3DTextureBuffer.h"
#include "game_sa\RenderWare\RenderWare.h"
#include "game_sa\RenderWare\rw\rpcriter.h"
#include "game_sa\RenderWare\rw\rperror.h"
#include "game_sa\RenderWare\rw\rphanim.h"
#include "game_sa\RenderWare\rw\rpmatfx.h"
#include "game_sa\RenderWare\rw\rpskin.h"
#include "game_sa\RenderWare\rw\rpuvanim.h"
#include "game_sa\RenderWare\rw\rpworld.h"
#include "game_sa\RenderWare\rw\rtanim.h"
#include "game_sa\RenderWare\rw\rtdict.h"
#include "game_sa\RenderWare\rw\rtquat.h"
#include "game_sa\RenderWare\rw\rwcore.h"
#include "game_sa\RenderWare\rw\rwplcore.h"
#include "game_sa\RenderWare\rw\skeleton.h"
#include "game_sa\Scripts\CRunningScript.h"
#include "game_sa\Scripts\CTheScripts.h"
#include "game_sa\Tasks\CTask.h"
#include "game_sa\Tasks\CTaskComplex.h"
#include "game_sa\Tasks\CTaskManager.h"
#include "game_sa\Tasks\CTaskSimple.h"
#include "game_sa\Tasks\CTaskTimer.h"
#include "game_sa\Tasks\CTaskComplexSequence.h"
#include "game_sa\Tasks\CTaskComplexUseSequence.h"
#include "game_sa\Tasks\CTaskSequences.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexCopInCar.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexDie.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexEnterBoatAsDriver.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexEnterCar.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexEnterCarAsDriver.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexEnterCarAsPassenger.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexFacial.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexKillPedFromBoat.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexKillPedOnFoot.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexLeaveCar.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexPlayHandSignalAnim.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexProstituteSolicit.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexSunbathe.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexUseMobilePhone.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexWander.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexWanderStandard.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleAnim.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleCarSetPedInAsDriver.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleCarSetPedInAsPassenger.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleCarSetPedOut.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleChoking.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleClimb.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleDuck.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleFacial.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleFight.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleGangDriveBy.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleHoldEntity.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimplePutDownEntity.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimplePickUpEntity.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexGoPickUpEntity.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleIKChain.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleIKLookAt.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleIKManager.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleInAir.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleJetpack.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimplePlayerOnFoot.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleRunAnim.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleRunNamedAnim.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleStandStill.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleStealthKill.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleSwim.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleThrowProjectile.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleTriggerLookAt.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleUseGun.h"
#include "game_sa\Tasks\TaskTypes\CTaskUtilityLineUpPedWithCar.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexJump.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexUseGoggles.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleCarDrive.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleCarDriveTimed.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleGoToPoint.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleGoTo.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexBeCop.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexWanderCop.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexPolicePursuit.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexObserveTrafficLightsAndAchieveHeading.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexCrossRoadLookAndAchieveHeading.h"
#include "game_sa\Tasks\TaskTypes\CTaskSimpleScratchHead.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexWanderMedic.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexWanderCriminal.h"
#include "game_sa\Tasks\TaskTypes\CTaskComplexWanderProstitute.h"