/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMEvent : DOMObject

@property (readonly) NSString * type; 
@property (readonly) <DOMEventTarget> * target; 
@property (readonly) <DOMEventTarget> * currentTarget; 
@property (readonly) unsigned short eventPhase; 
@property (readonly) BOOL bubbles; 
@property (readonly) BOOL cancelable; 
@property (readonly) unsigned long long timeStamp; 
@property (readonly) <DOMEventTarget> * srcElement; 
@property (assign) BOOL returnValue; 
@property (assign) BOOL cancelBubble; 
-(void)dealloc;
-(id)type;
-(id)target;
-(void)setReturnValue:(BOOL)arg1 ;
-(unsigned long long)timeStamp;
-(void)finalize;
-(id)currentTarget;
-(unsigned short)eventPhase;
-(BOOL)bubbles;
-(BOOL)cancelable;
-(BOOL)defaultPrevented;
-(id)srcElement;
-(BOOL)returnValue;
-(BOOL)cancelBubble;
-(void)setCancelBubble:(BOOL)arg1 ;
-(void)stopPropagation;
-(void)preventDefault;
-(void)initEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3 ;
-(void)initEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3 ;
-(void)stopImmediatePropagation;
@end

