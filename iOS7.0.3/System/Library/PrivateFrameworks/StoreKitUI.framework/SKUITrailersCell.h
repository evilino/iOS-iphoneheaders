/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface SKUITrailersCell : UICollectionViewCell {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) CGRect imageFrame; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)image;
-(id)title;
-(void)prepareForReuse;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(CGRect)imageFrame;
-(void).cxx_destruct;
@end

