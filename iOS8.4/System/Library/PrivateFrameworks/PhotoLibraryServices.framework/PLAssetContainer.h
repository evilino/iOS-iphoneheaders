/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate;


@protocol PLAssetContainer <NSObject,PLDiagnosticsProvider>
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@optional
-(NSDate *)startDate;
-(NSDate *)endDate;

@required
-(NSString *)title;
-(BOOL)isEmpty;
-(NSString *)uuid;
-(NSString *)localizedTitle;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1;
-(NSOrderedSet *)assets;
-(unsigned long long)approximateCount;
-(unsigned long long)assetsCount;
-(unsigned long long)photosCount;
-(unsigned long long)videosCount;
-(PLManagedAsset *)keyAsset;
-(void)setKeyAsset:(id)arg1;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1;
-(BOOL)canShowComments;
-(BOOL)canShowAvalancheStacks;
-(NSArray *)localizedLocationNames;

@end

