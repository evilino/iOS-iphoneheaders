/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSVLoadURLOperation, ASApplePackPage, SSMetricsPageEvent, SKUIClientContext, NSOperationQueue, UIViewController;

@interface ASLaunchNotificationsController : NSObject {

	SSVLoadURLOperation* _applePackOperation;
	ASApplePackPage* _applePackPage;
	SSMetricsPageEvent* _applePackLoadEvent;
	SKUIClientContext* _clientContext;
	BOOL _didDisplayThisRunCycle;
	BOOL _loadingApplePack;
	NSOperationQueue* _operationQueue;
	UIViewController* _parentViewController;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
-(void)displayAvailableNotifications;
-(void)checkForNotifications;
-(BOOL)_hasDisplayedApplePack;
-(void)_loadApplePack;
-(void)_displayApplePack;
-(void)_reloadApplePackPage;
-(void)_setApplePackDisplayed:(BOOL)arg1 ;
-(void)_loadApplePackWithURLString:(id)arg1 ;
-(void)_setApplePack:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void).cxx_destruct;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(id)clientContext;
-(id)initWithParentViewController:(id)arg1 ;
-(void)setClientContext:(id)arg1 ;
@end

