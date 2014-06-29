/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ISOperationQueue;

@interface RequestQueue : NSObject {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	ISOperationQueue* _operationQueue;

}

@property (retain) ISOperationQueue * operationQueue; 
-(void)observeXPCServer:(id)arg1 ;
-(void)cancelOperationForConnection:(id)arg1 ;
-(void)addOperation:(id)arg1 forMessage:(id)arg2 connection:(id)arg3 replyBlock:(/*^block*/ id)arg4 ;
-(void)addOperation:(id)arg1 forClient:(id)arg2 withMessageBlock:(/*^block*/ id)arg3 ;
-(id)operationForConnection:(id)arg1 ;
-(void)_cancelRequest:(id)arg1 connection:(id)arg2 ;
-(void)_disconnectRequest:(id)arg1 connection:(id)arg2 ;
-(void)disconnectOperationForConnection:(id)arg1 ;
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addOperation:(id)arg1 ;
@end
