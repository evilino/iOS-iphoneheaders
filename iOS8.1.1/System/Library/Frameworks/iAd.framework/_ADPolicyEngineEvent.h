/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/ADBannerViewInternalDelegate.h>

@class NSMutableArray, NSArray, NSString;

@interface _ADPolicyEngineEvent : NSObject <ADBannerViewInternalDelegate> {

	/*^block*/id _bannersLoadedHandler;
	NSMutableArray* _banners;
	NSMutableArray* _bannersWaitingOnLoad;

}

@property (nonatomic,readonly) NSArray * bannerIdentifiers; 
@property (nonatomic,copy) id bannersLoadedHandler;                              //@synthesize bannersLoadedHandler=_bannersLoadedHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * banners;                           //@synthesize banners=_banners - In the implementation block
@property (nonatomic,retain) NSMutableArray * bannersWaitingOnLoad;              //@synthesize bannersWaitingOnLoad=_bannersWaitingOnLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSMutableArray *)banners;
-(void)setBannersLoadedHandler:(id)arg1 ;
-(void)setBannersWaitingOnLoad:(NSMutableArray *)arg1 ;
-(NSMutableArray *)bannersWaitingOnLoad;
-(void)_considerCallingLoadedHandler;
-(id)bannersLoadedHandler;
-(void)addBannerForCreativeType:(int)arg1 ;
-(NSArray *)bannerIdentifiers;
-(id)loadedBannerWithIdentifier:(id)arg1 ;
-(void)waitForLoadsForBanners:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBanners:(NSMutableArray *)arg1 ;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
@end

