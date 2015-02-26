/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <coreauthd/MechanismBase.h>
#import <coreauthd/LABiometricClient.h>

@protocol LARemoteUI;
@class NSNumber;

@interface MechanismTouchId : MechanismBase <LABiometricClient> {

	unsigned long long _failures;
	NSNumber* _failureLimit;
	id<LARemoteUI> _remoteUiDelegate;

}

@property (__weak) id<LARemoteUI> remoteUiDelegate;              //@synthesize remoteUiDelegate=_remoteUiDelegate - In the implementation block
-(BOOL)isAvailableWithError:(id*)arg1 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_startBiometry;
-(id<LARemoteUI>)remoteUiDelegate;
-(void)setRemoteUiDelegate:(id<LARemoteUI>)arg1 ;
-(void)_stopBiometry;
-(void)biometryLost;
-(id)init;
-(void)willFinish;
-(void)matchResult:(id)arg1 ;
-(void)statusMessage:(int)arg1 ;
@end
