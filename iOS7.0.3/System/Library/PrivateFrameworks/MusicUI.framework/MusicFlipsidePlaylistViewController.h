/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicPlaylistSongsViewController.h>
#import <MusicUI/MusicFlipsideRating.h>
#import <MusicUI/MPURatingControlDelegate.h>

@protocol MPURatingControlDelegate;
@class NSIndexPath;

@interface MusicFlipsidePlaylistViewController : MusicPlaylistSongsViewController <MusicFlipsideRating, MPURatingControlDelegate> {

	<MPURatingControlDelegate>* _ratingDelegate;
	NSIndexPath* _ratingItemIndexPath;
	float _maximumDurationWidth;

}

@property (nonatomic,readonly) float maximumDurationWidth;                                    //@synthesize maximumDurationWidth=_maximumDurationWidth - In the implementation block
@property (assign,nonatomic,__weak) <MPURatingControlDelegate> * ratingDelegate; 
@property (assign,nonatomic) BOOL showingRating; 
+(BOOL)_shouldDisplayActions;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)setShowingRating:(BOOL)arg1 ;
-(id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2 ;
-(void)setRatingDelegate:(id)arg1 ;
-(void)setShowingRating:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)ratingDidChangeForRatingControl:(id)arg1 ;
-(id)ratingDelegate;
-(float)maximumDurationWidth;
-(BOOL)showingRating;
-(id)_createTableViewBackgroundView;
-(int)numberOfPrefixActionRowsInTableView:(id)arg1 ;
-(Class)tableView:(id)arg1 prefixActionCellConfigurationAtIndex:(int)arg2 ;
-(void).cxx_destruct;
@end
