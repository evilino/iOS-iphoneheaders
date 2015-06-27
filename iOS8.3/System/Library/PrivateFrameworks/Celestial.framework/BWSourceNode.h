/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:56:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWSourceNodeErrorDelegate;
@interface BWSourceNode : BWNode {

	id<BWSourceNodeErrorDelegate> _errorDelegate;

}

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (assign,nonatomic) id<BWSourceNodeErrorDelegate> errorDelegate;              //@synthesize errorDelegate=_errorDelegate - In the implementation block
-(id)nodeType;
-(char)start:(id*)arg1 ;
-(void)setErrorDelegate:(id<BWSourceNodeErrorDelegate>)arg1 ;
-(id<BWSourceNodeErrorDelegate>)errorDelegate;
-(char)stop:(id*)arg1 ;
-(OpaqueCMClockRef)clock;
@end
