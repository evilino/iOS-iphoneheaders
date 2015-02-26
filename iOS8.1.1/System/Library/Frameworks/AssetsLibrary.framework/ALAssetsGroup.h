/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetsGroupPrivate;

@interface ALAssetsGroup : NSObject {

	id _internal;

}

@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (nonatomic,retain) ALAssetsGroupPrivate * internal;                //@synthesize internal=_internal - In the implementation block
-(id)_typeAsString;
-(void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithPhotoAlbum:(NSObject*)arg1 library:(id)arg2 type:(unsigned long long)arg3 ;
-(void)enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)addAsset:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(BOOL)isEditable;
-(id)_uuid;
-(id)valueForProperty:(id)arg1 ;
-(void)setAssetsFilter:(id)arg1 ;
-(void)enumerateAssetsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setInternal:(ALAssetsGroupPrivate *)arg1 ;
-(ALAssetsGroupPrivate *)internal;
-(CGImageRef)posterImage;
-(long long)numberOfAssets;
@end
