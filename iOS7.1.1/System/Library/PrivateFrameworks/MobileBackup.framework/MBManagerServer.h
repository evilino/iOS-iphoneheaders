/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:21:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MBConnectionHandler.h>
#import <UsageSettings/MBManagerDelegate.h>
#import <backupd/MBServiceManagerDelegate.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface MBManagerServer : NSObject <MBConnectionHandler, MBManagerDelegate, MBServiceManagerDelegate> {

	NSObject<OS_xpc_object>* _conn;
	NSMutableSet* _connections;
	NSObject<OS_dispatch_queue>* _connectionsQueue;

}
-(id)_restoreInfo;
-(void)_broadcastMessageToClients:(id)arg1 ;
-(void)_handleRequest:(id)arg1 forConnection:(id)arg2 ;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned)arg3 context:(id)arg4 ;
-(void)manager:(id)arg1 didFinishRestoreWithContext:(id)arg2 ;
-(void)manager:(id)arg1 didFailRestoreWithContext:(id)arg2 error:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(void)managerDidFinishBackup:(id)arg1 ;
-(void)managerDidFinishScan:(id)arg1 ;
-(void)manager:(id)arg1 didFailBackupWithError:(id)arg2 ;
-(void)manager:(id)arg1 didFailScanWithError:(id)arg2 ;
-(void)managerDidCancelRestore:(id)arg1 ;
-(void)manager:(id)arg1 didSetBackupEnabled:(BOOL)arg2 ;
-(void)connection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)connectionWasInvalid:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
@end

