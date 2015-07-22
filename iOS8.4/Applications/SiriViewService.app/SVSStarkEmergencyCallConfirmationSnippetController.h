/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriViewService/SVSStarkConfirmationSnippetController.h>

@class NSTimer, SVSStarkEmergencyCallConfirmationSnippetView;

@interface SVSStarkEmergencyCallConfirmationSnippetController : SVSStarkConfirmationSnippetController {

	int _seconds;
	NSTimer* _countdownTimer;
	SVSStarkEmergencyCallConfirmationSnippetView* _snippetView;

}

@property (nonatomic,retain) SVSStarkEmergencyCallConfirmationSnippetView * snippetView;              //@synthesize snippetView=_snippetView - In the implementation block
-(void)setSnippetView:(SVSStarkEmergencyCallConfirmationSnippetView *)arg1 ;
-(id)initWithAceObject:(id)arg1 conversationItemIdentifier:(id)arg2 interactionStyle:(int)arg3 ;
-(SVSStarkEmergencyCallConfirmationSnippetView *)snippetView;
-(void)_setCountdownString;
-(void)_updateCountdown:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
@end
