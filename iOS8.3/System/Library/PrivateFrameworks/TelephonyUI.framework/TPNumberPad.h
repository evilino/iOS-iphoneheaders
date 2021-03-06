/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:46:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIControl.h>

@class NSMutableArray, NSArray;

@interface TPNumberPad : UIControl {

	NSMutableArray* _buttons;
	char _numberButtonsEnabled;

}

@property (assign,nonatomic) char numberButtonsEnabled;                //@synthesize numberButtonsEnabled=_numberButtonsEnabled - In the implementation block
@property (retain) NSArray * buttons; 
@property (assign,nonatomic) float buttonBackgroundAlpha; 
-(void)buttonDown:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)buttonTapped:(id)arg1 ;
-(NSArray *)buttons;
-(void)buttonLongPressed:(id)arg1 ;
-(void)replaceButton:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setNumberButtonsEnabled:(char)arg1 ;
-(id)initWithButtons:(id)arg1 ;
-(char)numberButtonsEnabled;
-(void)_addButton:(id)arg1 ;
-(void)_layoutGrid;
-(float)_backgroundAlphaOfButton:(id)arg1 ;
-(void)_setBackgroundAlphaOnButton:(id)arg1 alpha:(float)arg2 ;
-(void)buttonCancelled:(id)arg1 ;
-(void)buttonLongPressedViaGesture:(id)arg1 ;
-(float)buttonBackgroundAlpha;
-(void)setButtonBackgroundAlpha:(float)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end

