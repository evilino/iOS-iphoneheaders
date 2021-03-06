/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:56:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSArray, FigCaptureRecordingSettings, BWNodeInput;

@interface BWFileCoordinatorNode : BWNode {

	NSArray* _stagingQueues;
	FigCaptureRecordingSettings* _settings;
	long long _currSettingsID;
	int _recordingState;
	BWNodeInput* _masterInput;
	SCD_Struct_BW2 _inputOffset;
	SCD_Struct_BW2 _lastMasterPTS;
	SCD_Struct_BW2 _lastMasterDuration;
	SCD_Struct_BW2 _lastMasterEndingPTS;
	SCD_Struct_BW2 _masterStartingPTS;
	SCD_Struct_BW2 _largestStagedSupportingAudioVideoStagedPTS;
	SCD_Struct_BW2 _largestMetadataPTS;
	SCD_Struct_BW2 _masterStoppingPTS;
	char _haveSeenAudioWhenStarting;
	char _lowLatencyCanTransitionEarlyToRecording;
	char _lowLatencyCanTossExtraVideoWhenStopping;
	char _firstAudioHasBeenProcessed;
	OpaqueCMBlockBufferRef _emptyMetadataSampleData;
	const opaqueCMFormatDescription* _formatDescriptionsForInputs;
	OpaqueFigSimpleMutexRef _stateMutex;
	unsigned _numInputs;
	unsigned _numOutputs;
	unsigned _numVideoInputs;
	unsigned _numAudioInputs;
	unsigned _numMetadataInputs;
	unsigned _numActionOnlyOutputs;
	unsigned _masterInputIndex;
	char _lowLatencyModeEnabled;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)recordingTerminated:(unsigned long long)arg1 ;
-(void)resumeRecording:(id*)arg1 ;
-(void)pauseRecording:(id*)arg1 ;
-(void)startRecordingWithSettings:(id)arg1 error:(id*)arg2 ;
-(id)initWithNumberOfVideoInputs:(unsigned)arg1 numberOfAudioInputs:(unsigned)arg2 numberOfMetadataInputs:(unsigned)arg3 numberOfActionOnlyOutputs:(unsigned)arg4 allowLowLatencyWhenPossible:(char)arg5 ;
-(void)_doStartingToRecordWithSBuf:(opaqueCMSampleBufferRef)arg1 inputIndex:(unsigned)arg2 sbufPTS:(SCD_Struct_BW2)arg3 ;
-(void)_emitSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 toOutput:(id)arg3 ;
-(opaqueCMSampleBufferRef)_copyFirstValidLowLatencyAudioBuffer:(opaqueCMSampleBufferRef)arg1 inputIndex:(unsigned)arg2 sbufPTS:(SCD_Struct_BW2)arg3 ;
-(void)_doStoppingOrPausingWithSBuf:(opaqueCMSampleBufferRef)arg1 inputIndex:(unsigned)arg2 sbufPTS:(SCD_Struct_BW2)arg3 ;
-(void)_prepareToStartRecordingWithSettings:(id)arg1 ;
-(void)_finishStoppingOrPausing:(char)arg1 ;
-(void)_emitMarkerBufferForFileWriterAction:(CFStringRef)arg1 withPTS:(SCD_Struct_BW2)arg2 actionOutputsOnly:(char)arg3 ;
-(void)_prepareToPauseOrStopRecording;
-(void)_prepareToResumeRecording;
-(opaqueCMSampleBufferRef)_createEmptyMetadataSBufWithPTS:(SCD_Struct_BW2)arg1 forInputIndex:(unsigned)arg2 ;
-(void)_emitStagedBufferForIndex:(unsigned)arg1 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)_printStagingEvent:(opaqueCMSampleBufferRef)arg1 forNodeInputIndex:(unsigned)arg2 ;
-(void)stopRecording:(id*)arg1 ;
@end

