/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UINavigationController.h>
#import <MobileSafari/BrowserPanel.h>
#import <MobileSafari/BackForwardTableViewControllerDelegate.h>

@class BackForwardTableViewController, NSArray, NSString;

@interface BackForwardNavigationController : UINavigationController <BrowserPanel, BackForwardTableViewControllerDelegate> {

	BackForwardTableViewController* _tableViewController;
	int _savedStatusBarStyle;

}

@property (nonatomic,copy) NSArray * backForwardList; 
@property (assign,nonatomic) char reversesListOrder; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)panelType;
-(int)pausesPages;
-(char)ignoresPrivateBrowsingStyle;
-(void)setBackForwardList:(NSArray *)arg1 ;
-(char)reversesListOrder;
-(void)setReversesListOrder:(char)arg1 ;
-(void)backForwardTableViewController:(id)arg1 didSelectItem:(id)arg2 ;
-(char)shouldShowButtonBar;
-(id)init;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)rotatingFooterView;
-(id)toolbarItems;
-(void)done;
-(NSArray *)backForwardList;
@end
