/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ADService;
@interface ADServiceRecord : NSObject {

	id<ADService> _service;
	long long _precedence;

}
-(BOOL)hasEqualOrHigherPrecedenceThanServiceRecord:(id)arg1 ;
-(id)initWithService:(id)arg1 precedence:(long long)arg2 ;
-(id)service;
-(long long)precedence;
@end

