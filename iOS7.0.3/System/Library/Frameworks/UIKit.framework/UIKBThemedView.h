/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKBCacheableView.h>

@class CALayer, NSString;

@interface UIKBThemedView : UIView <UIKBCacheableView> {

	CALayer* _borders;
	CALayer* _background;
	BOOL _lightKeyboard;
	BOOL _active;
	BOOL _usePersistentCaching;
	int _style;
	UIEdgeInsets _cacheInsets;

}

@property (assign,nonatomic) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) int style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cacheInsets;               //@synthesize cacheInsets=_cacheInsets - In the implementation block
@property (assign,nonatomic) BOOL usePersistentCaching;              //@synthesize usePersistentCaching=_usePersistentCaching - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) float cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(BOOL)_canDrawContent;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(BOOL)active;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(id)cacheKey;
-(float)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(BOOL)cacheDeferable;
-(BOOL)keepNonPersistent;
-(void)setCacheInsets:(UIEdgeInsets)arg1 ;
-(void)setUsePersistentCaching:(BOOL)arg1 ;
-(UIEdgeInsets)cacheInsets;
-(void)_popuplateLayer:(id)arg1 withContents:(id)arg2 ;
-(BOOL)_hasInsets;
-(id)traitsForCurrentStyle;
-(BOOL)usePersistentCaching;
@end

