/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RAPPresentingViewController;
@class RAPMapFeaturePickerViewController, RAPReport, UIViewController;

@interface RAPReportComposerInitialMapPickingController : NSObject {

	RAPMapFeaturePickerViewController* _mapPicker;
	RAPReport* _report;
	UIViewController*<RAPPresentingViewController> _owner;
	/*^block*/id _completion;

}

@property (nonatomic,__weak,readonly) UIViewController*<RAPPresentingViewController> owner;              //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) RAPReport * report;                                                       //@synthesize report=_report - In the implementation block
@property (nonatomic,readonly) id completion;                                                            //@synthesize completion=_completion - In the implementation block
-(id)initWithOwner:(id)arg1 report:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentInitialMapPicker;
-(void)segueToViewController:(id)arg1 ;
-(id)newInitialMapFeaturePickerWithSelection:(/*^block*/id)arg1 ;
-(void)mapPickerDidCommit:(id)arg1 ;
-(void)_commitMapPickerForInitialSelection;
-(void)returnFromViewController:(id)arg1 ;
-(void)mapPickerDidCancel:(id)arg1 ;
-(id)completion;
-(UIViewController*<RAPPresentingViewController>)owner;
-(RAPReport *)report;
@end
