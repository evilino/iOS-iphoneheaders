/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKAlertItem.h>
#import <ChatKit/NCInteractiveNotificationHostDelegate.h>

@class CKIMDBMessage, BBBulletin, NCInteractiveNotificationHostViewController, NSString;

@interface CKMessageAlertItem : CKAlertItem <NCInteractiveNotificationHostDelegate> {

	CKIMDBMessage* _message;
	BOOL _playedSound;
	BBBulletin* _bulletin;
	BOOL _showingImage;
	NCInteractiveNotificationHostViewController* _replyViewController;
	NCInteractiveNotificationHostViewController* _audioPlaybackViewController;

}

@property (nonatomic,retain) BBBulletin * bulletin;                                                                  //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) BOOL showingImage;                                                                      //@synthesize showingImage=_showingImage - In the implementation block
@property (nonatomic,retain) NCInteractiveNotificationHostViewController * replyViewController;                      //@synthesize replyViewController=_replyViewController - In the implementation block
@property (nonatomic,retain) NCInteractiveNotificationHostViewController * audioPlaybackViewController;              //@synthesize audioPlaybackViewController=_audioPlaybackViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)lastMessageSenderID;
+(void)stopPlayingCurrentAlertTone;
+(void)setLastMessageSenderID:(int)arg1 ;
+(void)playMessageReceived;
-(id)_groupID;
-(id)address;
-(void)dealloc;
-(id)name;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setMessage:(id)arg1 ;
-(void)willPresentAlertView:(id)arg1 ;
-(id)accessoryView;
-(BOOL)showingImage;
-(BOOL)shouldHideSMSPreview;
-(id)alertImage;
-(NCInteractiveNotificationHostViewController *)replyViewController;
-(NCInteractiveNotificationHostViewController *)audioPlaybackViewController;
-(void)didDeactivateForReason:(int)arg1 ;
-(BBBulletin *)bulletin;
-(BOOL)isReplyAlert;
-(BOOL)isAudioPlaybackAlert;
-(void)reply;
-(void)setShowingImage:(BOOL)arg1 ;
-(id)messageText;
-(void)hostViewControllerDidChangePreferredContentSize:(id)arg1 ;
-(void)hostViewController:(id)arg1 didRequestDismissalWithContext:(id)arg2 ;
-(void)hostViewController:(id)arg1 didEnable:(BOOL)arg2 actionAtIndex:(unsigned long long)arg3 ;
-(Class)alertSheetClass;
-(void)willRelockForButtonPress:(BOOL)arg1 ;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)performUnlockAction;
-(void)hostViewController:(id)arg1 didDismissPresentedViewController:(id)arg2 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)setBulletin:(BBBulletin *)arg1 ;
-(void)setReplyViewController:(NCInteractiveNotificationHostViewController *)arg1 ;
-(void)setAudioPlaybackViewController:(NCInteractiveNotificationHostViewController *)arg1 ;
@end

