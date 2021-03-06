/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>
#import <UIKit/UIKeyInput.h>
#import <Preferences/PSPasscodeFieldDelegate.h>

@protocol KeychainSyncPasscodeFieldDelegate;
@class PSPasscodeField, NSString;

@interface PasscodeFieldCell : PSTableCell <UIKeyInput, PSPasscodeFieldDelegate> {

	PSPasscodeField* _passcodeField;
	char _convertsNumeralsToASCII;
	char _denyFirstResponder;
	id<KeychainSyncPasscodeFieldDelegate> _delegate;

}

@property (assign,nonatomic) id<KeychainSyncPasscodeFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char convertsNumeralsToASCII;                                //@synthesize convertsNumeralsToASCII=_convertsNumeralsToASCII - In the implementation block
@property (assign,nonatomic) char denyFirstResponder;                                     //@synthesize denyFirstResponder=_denyFirstResponder - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
-(void)dealloc;
-(void)setDelegate:(id<KeychainSyncPasscodeFieldDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<KeychainSyncPasscodeFieldDelegate>)delegate;
-(char)becomeFirstResponder;
-(char)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(int)keyboardType;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)setConvertsNumeralsToASCII:(char)arg1 ;
-(char)denyFirstResponder;
-(char)convertsNumeralsToASCII;
-(void)_setSecureTextEntry:(char)arg1 ;
-(void)setPasscodeText:(id)arg1 ;
-(id)passcodeText;
-(void)setDenyFirstResponder:(char)arg1 ;
@end

