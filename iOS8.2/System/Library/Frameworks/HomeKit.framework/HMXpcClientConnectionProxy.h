/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKit/HMMessageTransport.h>

@class HMMessageDispatcher, NSString;

@interface HMXpcClientConnectionProxy : NSObject <HMMessageTransport> {

	HMMessageDispatcher* _recvDispatcher;
	/*^block*/id _refreshHandler;

}

@property (nonatomic,retain) HMMessageDispatcher * recvDispatcher;              //@synthesize recvDispatcher=_recvDispatcher - In the implementation block
@property (nonatomic,copy) id refreshHandler;                                   //@synthesize refreshHandler=_refreshHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)refreshHandler;
-(id)initWithMessageDispatcher:(id)arg1 refreshHandler:(/*^block*/id)arg2 ;
-(void)setRefreshHandler:(id)arg1 ;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 ;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(HMMessageDispatcher *)recvDispatcher;
-(void)setRecvDispatcher:(HMMessageDispatcher *)arg1 ;
@end
