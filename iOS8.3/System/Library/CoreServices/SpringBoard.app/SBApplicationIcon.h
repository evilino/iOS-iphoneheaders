/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLeafIcon.h>

@class UIImage;

@interface SBApplicationIcon : SBLeafIcon {

	UIImage* _cachedSquareHomeScreenContentsImage;

}
+(id)_squareHomeScreenIconImagesMemoryPool;
-(id)__loadIconImageForDataSource:(id)arg1 format:(int)arg2 ;
-(id)__loadUnmaskedIconImageForFormat:(int)arg1 ;
-(/*^block*/id)_blockForGeneratingIconImageInBackgroundWithFormat:(int)arg1 complete:(/*^block*/id)arg2 ;
-(id)folderTitleOptions;
-(void)generateIconImageInBackground:(/*^block*/id)arg1 ;
-(id)getUnmaskedIconImage:(int)arg1 ;
-(id)automationID;
-(id)folderFallbackTitle;
-(id)generateIconImage:(int)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)tags;
-(void)setBadge:(id)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(id)application;
@end
