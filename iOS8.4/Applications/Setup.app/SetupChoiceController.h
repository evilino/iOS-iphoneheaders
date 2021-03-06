/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class BuddyAppleIDTableHeaderView, BuddyAppleIDLinkView, NSArray, NSString, SetupChoice;

@interface SetupChoiceController : BuddyTableViewController <BuddyController> {

	BuddyAppleIDTableHeaderView* _serviceFooterView;
	BuddyAppleIDLinkView* _learnMoreView;
	NSArray* _choices;
	NSArray* _services;
	NSString* _footerText;
	SetupChoice* _selectedChoice;
	id<BuddyControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * choices;                                        //@synthesize choices=_choices - In the implementation block
@property (nonatomic,retain) NSArray * services;                                       //@synthesize services=_services - In the implementation block
@property (nonatomic,retain) NSString * footerText;                                    //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,__weak,readonly) SetupChoice * selectedChoice;                    //@synthesize selectedChoice=_selectedChoice - In the implementation block
@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SetupChoice *)selectedChoice;
-(void)choice:(id)arg1 resultWasValid:(char)arg2 ;
-(char)wantsNextButton;
-(id)footerDetailText;
-(id)finishWithChoiceForIdentifier:(id)arg1 ;
-(id)footerTitleText;
-(id)footerIconName;
-(char)footerIconHasRoundedCorners;
-(id)footerIconTintColor;
-(id)linkButtonText;
-(void)linkButtonTapped:(id)arg1 ;
-(id)learnMoreButtonText;
-(void)learnMoreButtonTapped:(id)arg1 ;
-(void)setSelectedChoiceIndex:(unsigned)arg1 ;
-(void)_updateSelectedChoiceCheckmark;
-(void)controllerBack;
-(void)checkChoiceValid;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setFooterText:(NSString *)arg1 ;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<BuddyControllerDelegate>)delegate;
-(void)_commonInit;
-(float)heightForFooterInTableView:(id)arg1 ;
-(id)viewForFooterInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)unloadViewForced:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setServices:(NSArray *)arg1 ;
-(NSArray *)choices;
-(NSArray *)services;
-(void)controllerDone;
-(void)setChoices:(NSArray *)arg1 ;
-(NSString *)footerText;
@end

