/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/PHStarkGenericViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, _UIFilteredDataSource, PHStarkNoContentBannerView, NSString;

@interface PHStarkGenericTableViewController : PHStarkGenericViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _tableViewReloadIsRequiredOnViewWillAppear;
	UITableView* _mainTableView;
	_UIFilteredDataSource* _mainTableViewDataSource;
	PHStarkNoContentBannerView* _noContentBannerView;

}

@property (retain) UITableView * mainTableView;                                   //@synthesize mainTableView=_mainTableView - In the implementation block
@property (retain) _UIFilteredDataSource * mainTableViewDataSource;               //@synthesize mainTableViewDataSource=_mainTableViewDataSource - In the implementation block
@property (assign) BOOL tableViewReloadIsRequiredOnViewWillAppear;                //@synthesize tableViewReloadIsRequiredOnViewWillAppear=_tableViewReloadIsRequiredOnViewWillAppear - In the implementation block
@property (readonly) NSString * badgeString; 
@property (retain) PHStarkNoContentBannerView * noContentBannerView;              //@synthesize noContentBannerView=_noContentBannerView - In the implementation block
-(void)hardwareControlEventNotification:(id)arg1 ;
-(void)starkInCallViewControllerAppearedNotification:(id)arg1 ;
-(void)setTableViewReloadIsRequiredOnViewWillAppear:(BOOL)arg1 ;
-(void)setNoContentBannerShown:(BOOL)arg1 ;
-(void)programmaticallySelectRowAtIndexPath:(id)arg1 ;
-(id)titleForNoContentBanner;
-(id)subtitleForNoContentBanner;
-(id)badgeString;
-(void)applicationBadgeChangedNotification:(id)arg1 ;
-(void)limitedUIChanged:(id)arg1 ;
-(void)updateBadgeString;
-(id)mainTableViewDataSource;
-(BOOL)tableViewReloadIsRequiredOnViewWillAppear;
-(id)noContentBannerView;
-(void)setNoContentBannerView:(id)arg1 ;
-(void)setMainTableViewDataSource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_viewControllerWasSelected;
-(int)filterType;
-(id)mainTableView;
-(void)setMainTableView:(id)arg1 ;
-(float)defaultRowHeight;
@end
