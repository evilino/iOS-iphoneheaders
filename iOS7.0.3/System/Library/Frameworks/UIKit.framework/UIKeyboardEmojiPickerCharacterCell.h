/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, UIKeyboardEmojiInputController, UIView;

@interface UIKeyboardEmojiPickerCharacterCell : UITableViewCell {

	NSArray* _characters;
	NSString* _emojiString;
	UIKeyboardEmojiInputController* _inputController;
	UIView* _pressIndicator;

}

@property (retain) NSArray * characters; 
@property (assign) UIKeyboardEmojiInputController * inputController;              //@synthesize inputController=_inputController - In the implementation block
@property (retain) UIView * pressIndicator;                                       //@synthesize pressIndicator=_pressIndicator - In the implementation block
+(id)emojiFontAttributes;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setInputController:(id)arg1 ;
-(id)inputController;
-(id)pressIndicator;
-(void)setPressIndicator:(id)arg1 ;
-(void)setCharacters:(id)arg1 ;
-(id)characters;
@end
