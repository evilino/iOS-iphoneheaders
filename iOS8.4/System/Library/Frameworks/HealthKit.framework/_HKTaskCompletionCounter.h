/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _HKTaskCompletionCounter : NSObject {

	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _queue;
	long long _target;

}
+(id)counterWithTargetCount:(long long)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)decrementCounter;
-(void)_invalidate;
@end
