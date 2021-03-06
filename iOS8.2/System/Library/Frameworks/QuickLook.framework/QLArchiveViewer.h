/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class QLPreviewController, UIDocumentInteractionController, UINavigationController, UIPopoverPresentationController, QLArchiveTableViewController, NSString;

@interface QLArchiveViewer : NSObject <UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate> {

	QLPreviewController* _previewController;
	UIDocumentInteractionController* _documentInteractionController;
	UINavigationController* _navigationController;
	UIPopoverPresentationController* _presentationController;
	QLArchiveTableViewController* _tableViewController;
	char _visible;

}

@property (getter=isVisible,readonly) char visible; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPreviewController:(id)arg1 ;
-(void)presentFromBarButtonItem:(id)arg1 animated:(char)arg2 ;
-(void)setupViewControllersForPresentationStyle:(int)arg1 ;
-(void)_updateThumbnails;
-(void)_cancelUpdateThumbnails;
-(void)_updateIcon:(id)arg1 forCell:(id)arg2 template:(char)arg3 ;
-(char)isInRegularWidth;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2 ;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(int)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(char)isVisible;
-(void)update;
-(void)dismissAnimated:(char)arg1 ;
-(void)dismiss:(id)arg1 ;
-(CGSize)_imageSize;
@end

