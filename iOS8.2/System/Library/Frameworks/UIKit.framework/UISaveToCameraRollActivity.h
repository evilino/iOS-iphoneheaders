/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@interface UISaveToCameraRollActivity : UIActivity {

	int _imageCount;
	int _videoCount;

}

@property (assign,nonatomic) int imageCount;              //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) int videoCount;              //@synthesize videoCount=_videoCount - In the implementation block
-(id)activityType;
-(id)activityTitle;
-(id)_activityImage;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(int)imageCount;
-(void)setImageCount:(int)arg1 ;
-(int)videoCount;
-(void)setVideoCount:(int)arg1 ;
@end
