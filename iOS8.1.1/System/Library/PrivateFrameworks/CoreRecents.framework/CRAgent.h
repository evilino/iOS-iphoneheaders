/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <recentsd/NSXPCListenerDelegate.h>

@class NSXPCListener, _CRRecentsLibrary, NSMutableSet, CREventHarvester, NSString;

@interface CRAgent : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	_CRRecentsLibrary* _library;
	NSMutableSet* _clients;
	CREventHarvester* _harvester;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_adjustLibraryStoreSyncBehaviorWithLockedState:(BOOL)arg1 ;
-(void)_lockStateChanged:(id)arg1 ;
-(id)daemonLibraryForClient:(id)arg1 ;
-(void)startHarvestingEvents;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)stop;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)clientForConnection:(id)arg1 ;
@end
