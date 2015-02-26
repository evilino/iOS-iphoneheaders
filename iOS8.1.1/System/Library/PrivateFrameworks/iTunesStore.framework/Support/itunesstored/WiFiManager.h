/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <itunesstored/itunesstored-Structs.h>
@class NSObject, NSString;

@interface WiFiManager : NSObject {

	int _clientType;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	WiFiManagerClientRef _wifiClient;

}

@property (assign) int clientType; 
@property (readonly) NSString * IPAddress; 
+(id)sharedWiFiManager;
-(id)_wifiInterfaceName;
-(long long)_wifiClientTypeForManagerType:(int)arg1 ;
-(void*)_wifiClient;
-(void)dealloc;
-(id)init;
-(void)setClientType:(int)arg1 ;
-(int)clientType;
-(NSString *)IPAddress;
@end
