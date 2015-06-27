/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <StoreKitUI/SKUISearchResultGroupControllerDelegate.h>
#import <StoreKitUI/SKUIItemCollectionDelegate.h>
#import <StoreKitUI/SKUISearchRelatedViewDelegate.h>
#import <StoreKitUI/SKUIMetricsViewController.h>

@protocol SKUISearchChildViewControllerDelegate;
@class SKUIClientContext, SKUIGiftThemeCollectionView, SKUIItemCollectionController, NSMutableDictionary, SKUIMetricsController, NSString, SKUISearchRelatedView, SKUISearchPage, SKUISearchResultGroupController;

@interface SKUIIPhoneSearchViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, SKUISearchResultGroupControllerDelegate, SKUIItemCollectionDelegate, SKUISearchRelatedViewDelegate, SKUIMetricsViewController> {

	SKUIClientContext* _clientContext;
	SKUIGiftThemeCollectionView* _collectionView;
	id<SKUISearchChildViewControllerDelegate> _delegate;
	SKUIItemCollectionController* _itemCollectionController;
	NSMutableDictionary* _indexesByItemIndex;
	NSMutableDictionary* _itemIndexesByIndex;
	SKUIMetricsController* _metricsController;
	NSString* _previousRelatedSearchTerm;
	SKUISearchRelatedView* _relatedView;
	SKUISearchPage* _searchPage;
	SKUISearchResultGroupController* _searchResultGroupController;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                      //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISearchChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUIMetricsController * metricsController;                              //@synthesize metricsController=_metricsController - In the implementation block
@property (nonatomic,readonly) SKUISearchPage * searchPage;                                          //@synthesize searchPage=_searchPage - In the implementation block
@property (nonatomic,readonly) NSString * previousRelatedSearchTerm;                                 //@synthesize previousRelatedSearchTerm=_previousRelatedSearchTerm - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<SKUISearchChildViewControllerDelegate>)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<SKUISearchChildViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(SKUIMetricsController *)metricsController;
-(void)setMetricsController:(SKUIMetricsController *)arg1 ;
-(void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2 ;
-(id)_visibleMetricsImpressionsString;
-(void)scrollToTop;
-(void)_reloadView;
-(void)setSearchPage:(id)arg1 previousRelatedSearchTerm:(id)arg2 ;
-(id)activeMetricsController;
-(void)searchRelatedView:(id)arg1 didSelectRelatedQueryAtIndex:(int)arg2 ;
-(void)searchRelatedViewDidSelectBackButton:(id)arg1 ;
-(NSString *)previousRelatedSearchTerm;
-(void)searchResultGroupController:(id)arg1 didLoadEntityAtIndexes:(id)arg2 removedEntityAtIndexes:(id)arg3 ;
-(void)searchResultGroupController:(id)arg1 didLoadArtworkAtIndex:(unsigned)arg2 ;
-(void)_recordImpressionEventWithContentOffset:(CGPoint)arg1 ;
-(void)_reloadScreenshotHeight;
-(id)_itemCollectionController;
-(int)_itemIndexForIndex:(int)arg1 ;
-(void)_recordImpressionEventWithIndex:(int)arg1 ;
-(int)_indexForItemIndex:(int)arg1 ;
-(void)_recordClickEventForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_recordClickEventForEditorial:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_recordClickEventForItemOffer:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_recordClickEvent:(id)arg1 withCell:(id)arg2 ;
-(void)_addImpressionWithItemID:(long long)arg1 type:(id)arg2 index:(int)arg3 ;
-(void)_noResultsAction:(id)arg1 ;
-(id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(int)arg2 ;
-(NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(CGPoint)arg2 ;
-(NSRange)visibleItemRangeForItemCollectionController:(id)arg1 ;
-(void)itemCollectionController:(id)arg1 applyScreenshotImage:(id)arg2 toCellLayout:(id)arg3 ;
-(id)itemCollectionController:(id)arg1 screenshotForItem:(id)arg2 ;
-(char)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1 ;
-(SKUISearchPage *)searchPage;
@end
