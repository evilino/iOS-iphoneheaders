/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject_FigRecorder.h>

@class AVMetadataFaceObjectInternal_FigRecorder;

@interface AVMetadataFaceObject_FigRecorder : AVMetadataObject_FigRecorder {

	AVMetadataFaceObjectInternal_FigRecorder* _internal;

}

@property (readonly) int faceID; 
@property (readonly) char hasRollAngle; 
@property (readonly) float rollAngle; 
@property (readonly) char hasYawAngle; 
@property (readonly) float yawAngle; 
+(id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2 ;
-(int)faceID;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(char)arg3 rollAdjustment:(float)arg4 ;
-(id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2 ;
-(char)hasRollAngle;
-(float)rollAngle;
-(char)hasYawAngle;
-(float)yawAngle;
-(void)dealloc;
-(char)isKindOfClass:(Class)arg1 ;
-(id)description;
@end
