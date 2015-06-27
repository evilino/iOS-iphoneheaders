/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActionSheet.h>

@interface RUTrackActionSheet : UIActionSheet {

	char _disableAddToWishList;
	char _disableBan;
	char _disableLike;

}

@property (assign,nonatomic) char disableAddToWishList;              //@synthesize disableAddToWishList=_disableAddToWishList - In the implementation block
@property (assign,nonatomic) char disableBan;                        //@synthesize disableBan=_disableBan - In the implementation block
@property (assign,nonatomic) char disableLike;                       //@synthesize disableLike=_disableLike - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(void)setDisableAddToWishList:(char)arg1 ;
-(void)setDisableBan:(char)arg1 ;
-(void)setDisableLike:(char)arg1 ;
-(char)disableAddToWishList;
-(char)disableBan;
-(char)disableLike;
@end
