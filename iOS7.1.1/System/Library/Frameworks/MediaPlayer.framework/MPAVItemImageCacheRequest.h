/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPImageCacheRequest.h>

@class MPAVItem;

@interface MPAVItemImageCacheRequest : MPImageCacheRequest {

	MPAVItem* _item;
	SCD_Struct_MP17 _imageTime;

}

@property (nonatomic,readonly) MPAVItem * AVItem;                      //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP17 imageTime;              //@synthesize imageTime=_imageTime - In the implementation block
-(id)initWithAVItem:(id)arg1 imageTime:(SCD_Struct_MP17)arg2 ;
-(id)AVItem;
-(id)copyRawImageReturningError:(id*)arg1 ;
-(SCD_Struct_MP17)imageTime;
-(id)init;
-(void).cxx_destruct;
@end

