/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Nike/STRootViewController.h>
#import <Nike/STMainMenuCalibrationDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class STTableView, UIView, NSDate;

@interface STMainMenuController : STRootViewController <STMainMenuCalibrationDelegate, UITableViewDelegate, UITableViewDataSource> {

	STTableView* _tableView;
	UIView* _tableHeaderViews[2];
	NSDate* _runCalibrationDate;
	NSDate* _walkCalibrationDate;

}
-(void)_updateCalibrationDates;
-(void)_dataStoreChanged:(id)arg1 ;
-(void)runSegmentTapped;
-(void)walkSegmentTapped;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end

