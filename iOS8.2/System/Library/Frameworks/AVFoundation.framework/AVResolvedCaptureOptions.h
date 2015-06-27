/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSMutableDictionary, AVCaptureDeviceFormat_FigRecorder;

@interface AVResolvedCaptureOptions : NSObject {

	NSString* sessionPreset;
	char captureSessionPresetChanging;
	NSMutableDictionary* baseCaptureOptions;
	NSMutableDictionary* optionsOverrides;
	CFDictionaryRef outputSettingsOverrides;
	char usePreviewSizedCaptureBuffers;
	char useStabilizationIfAvailable;
	char hasStillImageOutput;
	NSString* faceDetectionMode;
	char faceDetectionNotificationsEnabled;
	SCD_Struct_CM4 videoConnectionMinFrameDuration;
	SCD_Struct_CM4 videoConnectionMaxFrameDuration;
	AVCaptureDeviceFormat_FigRecorder* resolvedVideoDeviceFormat;
	SCD_Struct_CM4 resolvedVideoMinFrameDuration;
	SCD_Struct_CM4 resolvedVideoMaxFrameDuration;
	NSMutableDictionary* resolvedVideoCompressionProperties;
	NSMutableDictionary* resolvedCaptureOptions;
	char resolvesFrameRatesUsingDefaultValues;
	char resetsVideoZoomFactorToDefaultValue;

}

@property (assign,nonatomic) char hasStillImageOutput; 
@property (assign) char resolvesFrameRatesUsingDefaultValues; 
@property (assign) char resetsVideoZoomFactorToDefaultValue; 
@property (readonly) NSString * sessionPreset; 
+(id)resolvedCaptureOptionsWithSessionPreset:(id)arg1 captureOptionsDictionary:(id)arg2 ;
+(void)initialize;
-(void)addMinFrameDuration:(SCD_Struct_CM4)arg1 forConnection:(id)arg2 ;
-(void)addMaxFrameDuration:(SCD_Struct_CM4)arg1 forConnection:(id)arg2 ;
-(NSString *)sessionPreset;
-(id)resolvedVideoSettingsForAssetWriter;
-(void)addOutputSettings:(id)arg1 forConnection:(id)arg2 ;
-(id)baseCaptureOptions;
-(void)usePreviewSizedCaptureBuffersForConnection:(id)arg1 ;
-(void)useStabilizationIfAvailableForConnection:(id)arg1 ;
-(void)setHasStillImageOutput:(char)arg1 ;
-(void)addFaceDetectionMode:(id)arg1 forConnection:(id)arg2 ;
-(void)enableFaceDetectionNotificationsForConnection:(id)arg1 ;
-(id)resolvedVideoDeviceFormat;
-(char)resetsVideoZoomFactorToDefaultValue;
-(SCD_Struct_CM4)resolvedVideoMinFrameDuration;
-(SCD_Struct_CM4)resolvedVideoMaxFrameDuration;
-(char)resolvesFrameRatesUsingDefaultValues;
-(id)initWithSessionPreset:(id)arg1 captureOptionsDictionary:(id)arg2 ;
-(int)rankForFaceDetectionMode:(id)arg1 ;
-(id)cameraForCaptureOptions:(id)arg1 ;
-(id)deviceFormatForCamera:(id)arg1 captureOptions:(id)arg2 ;
-(void)applyInputPriorityOverridesToCaptureOptions:(id)arg1 forCamera:(id)arg2 ;
-(void)resolveFrameRatesToCaptureOptions:(id)arg1 withCamera:(id)arg2 activeFormat:(id)arg3 ;
-(void)resolveOutputSettingsToCaptureOptions:(id)arg1 resolvedScalingMode:(id*)arg2 ;
-(char)hasOverridesAffectingCaptureFormatInResolvedOptions:(id)arg1 withScalingMode:(id)arg2 ;
-(void)setBestCaptureResolutionForAVScalingMode:(id)arg1 captureOptions:(id)arg2 ;
-(char)hasOverridesAffectingPreviewFormatInResolvedOptions:(id)arg1 withScalingMode:(id)arg2 ;
-(void)setBestPreviewResolutionForCaptureOptions:(id)arg1 ;
-(id)resolvedCaptureOptionsDictionary;
-(id)resolvedVideoSettingsWithScalingAllowed:(char)arg1 ;
-(id)resolvedVideoSettingsForMovieFileOutput;
-(char)hasWidthOverrideInResolvedOptions:(id)arg1 ;
-(char)hasHeightOverrideInResolvedOptions:(id)arg1 ;
-(char)hasStillImageOutput;
-(id)resolvedVideoCompressionProperties;
-(void)setResolvesFrameRatesUsingDefaultValues:(char)arg1 ;
-(void)setResetsVideoZoomFactorToDefaultValue:(char)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
@end
