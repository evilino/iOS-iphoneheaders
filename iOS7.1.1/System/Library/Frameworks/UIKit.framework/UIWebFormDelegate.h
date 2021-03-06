/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <WebKit/WebFormDelegate.h>

@class UIWebBrowserView, _UIWebFormDelegateEditedFormsMap;

@interface UIWebFormDelegate : NSObject <WebFormDelegate> {

	UIWebBrowserView* _webBrowserView;
	_UIWebFormDelegateEditedFormsMap* _editedForms;

}
-(bool)_shouldIgnoreFormTextChangesInFrame:(id)arg1 ;
-(void)_didEditFormElement:(id)arg1 inFrame:(id)arg2 ;
-(void)_clearEditedFormsInFrame:(id)arg1 ;
-(void)dealloc;
-(void)acceptedAutoFillWord:(id)arg1 ;
-(SCD_Struct_UI52)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(bool)hasCurrentSuggestions;
-(void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2 ;
-(void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2 ;
-(void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2 ;
-(void)didFocusTextField:(id)arg1 inFrame:(id)arg2 ;
-(bool)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3 ;
-(void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5 ;
-(void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(id)initWithWebBrowserView:(id)arg1 ;
-(void)dataSourceHasChangedForFrame:(id)arg1 ;
-(bool)formWasEdited;
@end

