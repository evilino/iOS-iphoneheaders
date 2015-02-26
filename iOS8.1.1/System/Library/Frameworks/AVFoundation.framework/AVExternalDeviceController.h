/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVExternalDeviceControllerInternal, NSArray;

@interface AVExternalDeviceController : NSObject {

	AVExternalDeviceControllerInternal* _externalDeviceController;

}

@property (assign,nonatomic,__weak) id<AVExternalDeviceControllerDelegate> delegate; 
@property (assign,nonatomic) long long discoveryMode; 
@property (nonatomic,copy,readonly) NSArray * availableExternalDevices; 
-(BOOL)setCurrentExternalDevice:(id)arg1 withPassword:(id)arg2 ;
-(NSArray *)availableExternalDevices;
-(BOOL)setCurrentExternalDevice:(id)arg1 ;
-(BOOL)isExternalDeviceCurrent:(id)arg1 ;
-(long long)discoveryMode;
-(void)dealloc;
-(void)setDelegate:(id<AVExternalDeviceControllerDelegate>)arg1 ;
-(id)init;
-(id<AVExternalDeviceControllerDelegate>)delegate;
-(void)setDiscoveryMode:(long long)arg1 ;
@end
