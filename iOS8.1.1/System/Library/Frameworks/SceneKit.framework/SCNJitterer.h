/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCNJittererDelegate, OS_dispatch_source;
@class NSObject;

@interface SCNJitterer : NSObject {

	BOOL _enabled;
	unsigned long long _state;
	unsigned long long _iteration;
	BOOL _jitteringSupported;
	BOOL _restartSourceIsSuspended;
	id<SCNJittererDelegate> _delegate;
	NSObject*<OS_dispatch_source> _restartSource;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
+(void)initialize;
-(void)restart;
-(void)stopIfNeeded;
-(void)jitter;
-(void)delegateWillDie;
-(BOOL)isAborting;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)update;
-(id)initWithDelegate:(id)arg1 ;
@end

