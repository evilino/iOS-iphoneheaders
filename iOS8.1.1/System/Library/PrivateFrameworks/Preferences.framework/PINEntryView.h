/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PINEntryView <UITextFieldDelegate>
@required
-(void)setDelegate:(id)arg1;
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1;
-(id)stringValue;
-(void)setStringValue:(id)arg1;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1;
-(void)showFailedAttempts:(long long)arg1;
-(void)hideFailedAttempts;
-(void)hideError;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
-(void)setTextFieldKeyboardType:(long long)arg1;
-(void)setTextFieldKeyboardAppearance:(long long)arg1;
-(void)showError:(id)arg1 animate:(BOOL)arg2;
-(void)setTitle:(id)arg1 font:(id)arg2;
-(void)hidePasscodeField:(BOOL)arg1;

@end

