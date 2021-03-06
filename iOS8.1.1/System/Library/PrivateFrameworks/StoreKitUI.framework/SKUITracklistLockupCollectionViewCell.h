/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>
#import <StoreKitUI/SKUIItemOfferButtonDelegate.h>
#import <StoreKitUI/SKUIPreviewContainerView.h>
#import <StoreKitUI/SKUIViewElementView.h>

@class SKUITracklistColumnData, NSMutableDictionary, SUPlayerStatus, SKUIGradientView, SKUIPreviewProgressIndicator, UIView, SKUITrackViewElement, NSString;

@interface SKUITracklistLockupCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIPreviewContainerView, SKUIViewElementView> {

	SKUITracklistColumnData* _columnData;
	NSMutableDictionary* _columnViewsByIndex;
	SUPlayerStatus* _lastPlayerStatus;
	SKUIGradientView* _offerConfirmationGradientView;
	SKUIPreviewProgressIndicator* _previewProgressIndicator;
	long long _previewState;
	UIView* _separatorView;
	SKUITrackViewElement* _track;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForOrdinal:(id)arg1 context:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)_cancelConfirmationAction:(id)arg1 ;
-(void)_showConfirmationAction:(id)arg1 ;
-(void)itemOfferButtonDidAnimateTransition:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)showPreviewProgressWithStatus:(id)arg1 animated:(BOOL)arg2 ;
-(void)_audioPlayerStatusChangeNotification:(id)arg1 ;
-(id)_addFlipContainerViewWithFrontView:(id)arg1 backView:(id)arg2 ;
-(void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg1 ;
-(id)_previewMediaURL;
-(void)hidePreviewProgressAnimated:(BOOL)arg1 ;
-(void)togglePreviewPlaybackAnimated:(BOOL)arg1 ;
-(id)_previewColumnView;
-(id)_previewControlViewElement;
-(void)_enumerateViewElementViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)_layoutConfirmationGradientRelativeToView:(id)arg1 alpha:(double)arg2 ;
@end

