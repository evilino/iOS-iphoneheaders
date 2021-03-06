/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Support/mstreamd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <mstreamd/XPCNSServiceConnectionDelegate.h>

@class NSMutableDictionary;

@interface MSMSASServiceConnection : NSObject <XPCNSServiceConnectionDelegate> {

	NSMutableDictionary* _foregroundPingTimerByPersonID;
	NSMutableDictionary* _XPCForegroundRequestByPersonID;

}

@property (nonatomic,retain) NSMutableDictionary * foregroundPingTimerByPersonID;               //@synthesize foregroundPingTimerByPersonID=_foregroundPingTimerByPersonID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * XPCForegroundRequestByPersonID;              //@synthesize XPCForegroundRequestByPersonID=_XPCForegroundRequestByPersonID - In the implementation block
-(id)foregroundPingTimerByPersonID;
-(void)_foregroundPingTimerDidExpire:(id)arg1 ;
-(id)XPCForegroundRequestByPersonID;
-(void)_handleForegroundPing:(id)arg1 request:(id)arg2 ;
-(void)_handleFocusAlbum:(id)arg1 ;
-(void)setForegroundPingTimerByPersonID:(id)arg1 ;
-(void)setXPCForegroundRequestByPersonID:(id)arg1 ;
-(id)workQueue;
-(void).cxx_destruct;
-(void)XPCNSServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned)arg3 ;
-(void)XPCNSServiceConnectionDidDisconnect:(id)arg1 ;
@end

