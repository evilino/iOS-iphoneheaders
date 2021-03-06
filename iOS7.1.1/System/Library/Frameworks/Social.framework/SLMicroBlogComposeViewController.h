/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLComposeServiceViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Social/SLMicroBlogMentionsDelegate.h>
#import <Social/SLMicroBlogAccountsTableViewControllerDelegate.h>
#import <Social/SLSheetPlaceViewControllerDelegate.h>

@protocol SLMicroBlogSheetDelegate;
@class NSObject, NSString, SLMicroBlogMentionsViewController, NSArray, SLMicroBlogUserRecord, SLSheetAction, SLMicroBlogAccountsTableViewController, SLSheetPlaceViewController, SLPlace, UILabel, SLMicroBlogActiveAccountView;

@interface SLMicroBlogComposeViewController : SLComposeServiceViewController <UITextViewDelegate, SLMicroBlogMentionsDelegate, SLMicroBlogAccountsTableViewControllerDelegate, SLSheetPlaceViewControllerDelegate> {

	NSObject<SLMicroBlogSheetDelegate>* _microBlogSheetDelegate;
	NSString* _serviceAccountTypeIdentifier;
	SLMicroBlogMentionsViewController* _mentionsViewController;
	unsigned long long _mentionStartLocation;
	bool _mentionPendingStart;
	bool _rotatedDuringAccountsPopover;
	bool _usingLocationOverride;
	NSArray* _accountUserRecords;
	NSArray* _accountIdentifiers;
	SLMicroBlogUserRecord* _selectedAccountUserRecord;
	SLSheetAction* _accountSheetAction;
	SLSheetAction* _locationSheetAction;
	SLMicroBlogAccountsTableViewController* _accountViewController;
	SLSheetPlaceViewController* _placeViewController;
	SLPlace* _currentPlace;
	UILabel* _countLabel;
	long long _shortenedURLCost;
	long long _maxURLLength;
	bool _isPresentingPlaces;
	SLMicroBlogActiveAccountView* _activeAccountView;

}

@property (__weak) NSObject<SLMicroBlogSheetDelegate> * microBlogSheetDelegate; 
@property (nonatomic,retain) SLMicroBlogActiveAccountView * activeAccountView;               //@synthesize activeAccountView=_activeAccountView - In the implementation block
+(id)serviceBundle;
-(void)setMicroBlogSheetDelegate:(id)arg1 ;
-(void)updateGeotagStatus;
-(void)setGeotagStatus:(int)arg1 ;
-(void)presentNoAccountsAlert;
-(bool)validateText:(id)arg1 ;
-(void)placeViewController:(id)arg1 didSelectPlace:(id)arg2 ;
-(void)placeViewController:(id)arg1 willDisappear:(bool)arg2 ;
-(void)_presentPlaceViewController;
-(void)sheetPresentationAnimationDidFinish;
-(id)_placeViewController;
-(void)updateShortenedURLCost;
-(void)noteLocationInfoChanged:(id)arg1 ;
-(id)microBlogSheetDelegate;
-(void)_beginLoadingAccountProfileImages;
-(void)_presentAccountPickerController;
-(void)_performLocationAction;
-(id)_accountSheetAction;
-(id)_locationSheetAction;
-(void)_presentNoAccountsAlertIfNecessaryAndReady;
-(int)characterCountForEnteredText:(id)arg1 attachments:(id)arg2 ;
-(int)_charactersRemainingWithText:(id)arg1 ;
-(void)_updateCharacterCountLabelWithCount:(int)arg1 overLimit:(bool)arg2 ;
-(id)completeText:(id)arg1 withAttachments:(id)arg2 ;
-(long long)_characterCountForText:(id)arg1 ;
-(bool)_countMediaAttachmentsTowardCharacterCount;
-(void)noteCheckedInWithDaemon;
-(void)_presentMentionsViewControllerWithSearchString:(id)arg1 ;
-(void)applyMention:(id)arg1 ;
-(void)_dismissMentionsViewController;
-(id)_mentionsSearchString;
-(void)_presentMentionsViewControllerIfApplicableForSearchString:(id)arg1 ;
-(void)mentionsViewController:(id)arg1 finishedWithResult:(id)arg2 ;
-(void)accountsViewController:(id)arg1 didSelectAccountUserRecord:(id)arg2 ;
-(void)appWillEnterForeground:(id)arg1 ;
-(id)activeAccountView;
-(void)setActiveAccountView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(bool)arg1 ;
-(bool)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)send;
-(void).cxx_destruct;
-(id)sheetActions;
@end

