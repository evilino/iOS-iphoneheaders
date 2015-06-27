/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIWebView.h>

@class UIColor, UIView, NSString;

@interface SUWebView : UIWebView {

	char _isPinned;
	UIColor* _originalBackgroundColor;
	char _originalShowsBackgroundShadow;
	float _pinnedHeaderInsetAdjustment;
	UIView* _pinnedHeaderView;
	unsigned _scrollingDisabled : 1;
	char _showsTopBackgroundShadow;
	int _synchronousLayoutCount;
	UIColor* _topBackgroundColor;

}

@property (assign,nonatomic) id<SUWebViewDelegate> delegate; 
@property (assign,getter=isScrollingEnabled,nonatomic) char scrollingEnabled; 
@property (nonatomic,readonly) NSString * title; 
@property (assign,nonatomic) char showsTopBackgroundShadow;                                //@synthesize showsTopBackgroundShadow=_showsTopBackgroundShadow - In the implementation block
@property (nonatomic,retain) UIColor * topBackgroundColor;                                 //@synthesize topBackgroundColor=_topBackgroundColor - In the implementation block
@property (nonatomic,readonly) id windowScriptObject; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(NSString *)title;
-(void)setScrollingEnabled:(char)arg1 ;
-(void)view:(id)arg1 didSetFrame:(CGRect)arg2 oldFrame:(CGRect)arg3 ;
-(void)_setRichTextReaderViewportSettings;
-(void)loadArchive:(id)arg1 ;
-(id)windowScriptObject;
-(void)beginSynchronousLayout;
-(void)endSynchronousLayout;
-(char)getStatusBarStyle:(int*)arg1 ;
-(char)isScrollingEnabled;
-(void)_setPinnedHeaderView:(id)arg1 withTopInsetAdjustment:(float)arg2 ;
-(char)showsTopBackgroundShadow;
-(void)setShowsTopBackgroundShadow:(char)arg1 ;
-(UIColor *)topBackgroundColor;
-(void)setTopBackgroundColor:(UIColor *)arg1 ;
@end
