/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Maps/SearchCompletionsTableViewControllerDelegate.h>
#import <Maps/StarkSearchBarViewDelegate.h>
#import <UIKit/UIKeyboardImplGeometryDelegate.h>

@class StarkSearchKeyboardContainerView, StarkSearchBarView, SearchCompletionsTableViewController, UIKeyboard, StarkChromeViewController;

@interface StarkSearchKeyboardInputViewController : UIViewController <SearchCompletionsTableViewControllerDelegate, StarkSearchBarViewDelegate, UIKeyboardImplGeometryDelegate> {

	StarkSearchKeyboardContainerView* _containerView;
	StarkSearchBarView* _searchBar;
	SearchCompletionsTableViewController* _completionsTable;
	UIKeyboard* _keyboard;
	StarkChromeViewController* _chrome;
	BOOL _minimized;

}

@property (assign,getter=isMinimized,nonatomic) BOOL minimized;              //@synthesize minimized=_minimized - In the implementation block
-(void)modeWillPop;
-(void)updateKeyboardEnabled;
-(void)activateKeyboardIfNecessary;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectHistoryItem:(id)arg2 forQuery:(id)arg3 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectQueryCompletion:(id)arg2 forQuery:(id)arg3 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectSearchCompletion:(id)arg2 forQuery:(id)arg3 ;
-(void)starkSearchBar:(id)arg1 willEditSearchTextToString:(id)arg2 ;
-(void)starkSearchBarChosePerformSearch:(id)arg1 ;
-(void)starkSearchBarChoseCancel:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldSaveMinimizationState;
-(BOOL)isMinimized;
-(void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(BOOL)arg2 ;
-(void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(BOOL)arg2 ;
-(void)setMinimized:(BOOL)arg1 ;
-(BOOL)canDismiss;
-(void).cxx_destruct;
@end
