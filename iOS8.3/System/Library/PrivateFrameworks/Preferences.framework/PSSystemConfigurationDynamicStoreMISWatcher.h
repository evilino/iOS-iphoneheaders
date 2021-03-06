/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreMISWatcher : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	int _misState;
	int _misReason;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)readMISState:(int*)arg1 andReason:(int*)arg2 ;
-(void)getMISState:(int*)arg1 andReason:(int*)arg2 ;
-(void)sendStateUpdate;
@end

