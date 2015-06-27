/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>
#import <AVFoundation/AVAssetWriterFinishWritingHelperDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, AVWeakReference, NSString;

@interface AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate> {

	NSObject*<OS_dispatch_semaphore> _finishedWritingNotificationSemaphore;
	AVWeakReference* _weakReferenceToHelper;
	AVWeakReference* _weakReferenceToSelf;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(char)arg1 error:(id)arg2 ;
-(char)shouldHelperPrepareInputs;
-(void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(OpaqueFigAssetWriterRef)arg2 ;
-(void)finishWritingHelperDidFail:(id)arg1 ;
-(void)finishWritingHelperDidCancelFinishWriting:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end
