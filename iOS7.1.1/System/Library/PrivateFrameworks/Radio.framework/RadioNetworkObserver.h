/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface RadioNetworkObserver : NSObject {

	long long _networkUsageCount;
	NSObject<OS_dispatch_queue>* _networkUsageQueue;

}

@property (nonatomic,readonly) bool isUsingNetwork; 
@property (nonatomic,readonly) bool isCellularNetworkingAllowed; 
+(id)sharedNetworkObserver;
-(bool)isCellularNetworkingAllowed;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void).cxx_destruct;
-(void)_cellularNetworkAllowedDidChangeNotification:(id)arg1 ;
-(bool)isUsingNetwork;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
@end
