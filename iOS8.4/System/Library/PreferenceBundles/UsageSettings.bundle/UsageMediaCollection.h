/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface UsageMediaCollection : NSObject {

	NSMutableArray* _items;
	NSMutableArray* _itemSizes;
	BOOL _grouped;
	float _totalSize;

}

@property (assign,getter=isGrouped,nonatomic) BOOL grouped;              //@synthesize grouped=_grouped - In the implementation block
@property (nonatomic,copy) NSArray * items;                              //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * itemSizes;                          //@synthesize itemSizes=_itemSizes - In the implementation block
@property (assign,nonatomic) float totalSize;                            //@synthesize totalSize=_totalSize - In the implementation block
-(BOOL)isGrouped;
-(NSArray *)itemSizes;
-(void)setGrouped:(BOOL)arg1 ;
-(void)setItemSizes:(NSArray *)arg1 ;
-(void)sortItemsByMediaKey:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(float)totalSize;
-(void)setTotalSize:(float)arg1 ;
@end

