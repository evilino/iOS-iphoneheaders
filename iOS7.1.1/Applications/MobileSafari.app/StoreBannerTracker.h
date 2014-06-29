/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface StoreBannerTracker : NSObject {

	NSMutableDictionary* _blockedProducts;
	NSObject<OS_dispatch_queue>* _queue;

}
+(id)sharedTracker;
-(void)save;
-(void)dealloc;
-(id)init;
-(void)load;
-(void)clear;
-(id)filePath;
-(void)isProductBannerBlocked:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)blockProductBanner:(id)arg1 ;
@end
