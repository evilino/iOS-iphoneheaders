/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:45:47 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKReachability.h>

@class NSString, NSError;

@interface GKHostReachability : GKReachability {

	NSString* _hostName;
	NSError* _error;

}

@property (nonatomic,retain) NSString * hostName;              //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,retain) NSError * error;                  //@synthesize error=_error - In the implementation block
+(id)_gkReachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(NSError *)error;
-(NSString *)hostName;
-(void)setHostName:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end
