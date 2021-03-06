/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRCInterface.h>

@protocol IRInterfaceDelegate;
@class NSArray;

@interface IRInterface : CoreRCInterface {

	id<IRInterfaceDelegate> _delegate;

}

@property (assign,nonatomic) id<IRInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * buttons; 
@property (nonatomic,readonly) unsigned maxStoredCommands; 
-(void)setDelegate:(id<IRInterfaceDelegate>)arg1 ;
-(id<IRInterfaceDelegate>)delegate;
-(NSArray *)buttons;
-(void)receivedFrame:(id)arg1 ;
-(char)transmitCommand:(id)arg1 pressDuration:(double)arg2 error:(id*)arg3 ;
-(void)receivedCommand:(id)arg1 ;
-(void)receivedHIDEvent:(id)arg1 ;
-(unsigned)maxStoredCommands;
-(char)transmitFrame:(id)arg1 error:(id*)arg2 ;
-(char)clearAllStoredCommands:(id*)arg1 ;
-(char)setCommand:(id)arg1 forButtonCombination:(id)arg2 delay:(double)arg3 error:(id*)arg4 ;
-(char)resetAllButtons:(id*)arg1 ;
@end

