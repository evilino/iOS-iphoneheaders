/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSLock;

@interface ICEResultWaitQueue : NSObject {

	NSMutableArray* queryList;
	NSLock* queryLock;
	opaque_pthread_cond_t resCond;
	opaque_pthread_mutex_t resMutex;

}
-(void)dealloc;
-(id)init;
-(id)copyResultForCallID:(unsigned)arg1 ;
-(void)addResult:(tagCONNRESULT*)arg1 forCallID:(unsigned)arg2 ;
@end
