/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/ReportAProblemReporter.h>

@class NSMutableArray, UIColor, ReportAProblemLocationPickerViewController;

@interface ReportAProblemTrafficViewController : UITableViewController <ReportAProblemReporter> {

	NSMutableArray* _trafficReportTypes;
	UIColor* _selectedTextColor;
	ReportAProblemLocationPickerViewController* _locationPicker;

}
-(void)populateRPProblem:(id)arg1 request:(id)arg2 ;
-(void)updateEnabledState;
-(BOOL)canReportProblem;
-(id)_selectedItem;
-(void)next:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidLoad;
-(void)cancel:(id)arg1 ;
@end
