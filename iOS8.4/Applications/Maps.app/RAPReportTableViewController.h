/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPTableViewController.h>

@class RAPReport, UIBarButtonItem;

@interface RAPReportTableViewController : RAPTableViewController {

	/*^block*/id _completion;
	RAPReport* _report;
	id _lastTablePartsUpdateSender;
	char _scrollingSuppressed;
	UIBarButtonItem* _sendButtonItem;

}

@property (nonatomic,readonly) RAPReport * report;                            //@synthesize report=_report - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * sendButtonItem;              //@synthesize sendButtonItem=_sendButtonItem - In the implementation block
@property (nonatomic,readonly) id completion;                                 //@synthesize completion=_completion - In the implementation block
-(id)initWithReport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNeedsTablePartsUpdateWithSender:(id)arg1 ;
-(id)tableParts;
-(void)_send;
-(char)usesNavigationControllerPushForSegue;
-(void)invokeCompletionWithOutcome:(int)arg1 ;
-(void)_updateTableParts;
-(void)_updateTablePartsScrolling:(char)arg1 ;
-(void)setNeedsTablePartsUpdateWithSender:(id)arg1 scroll:(char)arg2 ;
-(void)updateTablePartsIfNeeded;
-(void)dealloc;
-(id)init;
-(id)completion;
-(void)viewDidLoad;
-(UIBarButtonItem *)sendButtonItem;
-(RAPReport *)report;
@end
