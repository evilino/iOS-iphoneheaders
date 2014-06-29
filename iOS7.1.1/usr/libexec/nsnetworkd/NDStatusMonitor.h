/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/nsnetworkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <nsnetworkd/nsnetworkd-Structs.h>
@class NSMutableArray, NSObject;

@interface NDStatusMonitor : NSObject {

	CFRunLoopSourceRef _dynamicStoreSource;
	NSMutableArray* _blocksToExecuteAftetNetworkChange;
	unsigned _networkChangeEventCount;
	NSObject<OS_dispatch_queue>* _queue;

}
+(id)sharedMonitor;
-(void)startMonitoringDynamicStore;
-(void)stopMonitoringDynamicStore;
-(void)performBlockAfterNetworkChangedEvent:(/*^block*/ id)arg1 ;
-(void)handleDynamicStoreCallback:(SCDynamicStoreRef)arg1 changedKeys:(CFArrayRef)arg2 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(void).cxx_destruct;
-(void)stop;
@end
