/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:03:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <FMF/RefreshControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class FMFSAMyLocation, NSString, RefreshController, UITableView;

@interface SAFMFVisibilityController : SiriUISnippetViewController <RefreshControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	char isVisible;
	char disableSelection;
	FMFSAMyLocation* myLocation;
	NSString* clientId;
	RefreshController* refreshController;
	UITableView* _tableView;

}

@property (assign,nonatomic) char isVisible; 
@property (nonatomic,copy) NSString * clientId; 
@property (nonatomic,retain) UITableView * tableView;                            //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) char disableSelection; 
@property (nonatomic,retain) FMFSAMyLocation * myLocation; 
@property (nonatomic,retain) RefreshController * refreshController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snippetViewController:(id)arg1 ;
-(void)setIsVisible:(char)arg1 ;
-(void)locationsUpdated:(id)arg1 ;
-(void)refreshCancelled;
-(char)disableSelection;
-(void)setMyLocation:(FMFSAMyLocation *)arg1 ;
-(void)setRefreshController:(RefreshController *)arg1 ;
-(RefreshController *)refreshController;
-(void)setDisableSelection:(char)arg1 ;
-(FMFSAMyLocation *)myLocation;
-(id)proximity;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(char)arg1 ;
-(char)isVisible;
-(UITableView *)tableView;
-(id)initWithAceObject:(id)arg1 ;
-(float)desiredHeight;
-(id)friends;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
@end
