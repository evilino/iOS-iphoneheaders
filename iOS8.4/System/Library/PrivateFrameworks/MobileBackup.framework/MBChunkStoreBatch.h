/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface MBChunkStoreBatch : NSObject {

	NSMutableArray* _items;
	unsigned long long _totalSize;

}

@property (nonatomic,readonly) unsigned long long itemCount; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) unsigned long long totalSize;              //@synthesize totalSize=_totalSize - In the implementation block
+(id)batch;
-(void)removeAllItems;
-(void)dealloc;
-(id)init;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(unsigned long long)totalSize;
-(unsigned long long)itemCount;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)itemEnumerator;
@end
