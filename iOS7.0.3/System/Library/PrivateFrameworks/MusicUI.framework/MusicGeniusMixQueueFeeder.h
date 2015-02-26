/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicQueryQueueFeeder.h>

@protocol MusicGeniusMixQueueFeederDataSource;
@interface MusicGeniusMixQueueFeeder : MusicQueryQueueFeeder {

	unsigned _currentPlaylistOffset;
	<MusicGeniusMixQueueFeederDataSource>* _dataSource;

}

@property (nonatomic,retain) <MusicGeniusMixQueueFeederDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(unsigned)itemCount;
-(id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3 ;
-(id)localizedPositionInPlaylistString:(id)arg1 ;
-(BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 ;
-(unsigned)shuffleType;
-(void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2 ;
-(void)shuffleItemsWithAnchor:(unsigned*)arg1 ;
-(BOOL)userCanChangeShuffleAndRepeatType;
-(unsigned)realRepeatType;
-(void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2 ;
-(id)mediaItemAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfMediaItem:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
-(id)query;
-(unsigned)numberOfPaths;
-(BOOL)_configureWithMix:(id)arg1 playbackContext:(id)arg2 startPlayback:(BOOL)arg3 ;
-(id)pathAtIndex:(unsigned)arg1 ;
-(void).cxx_destruct;
@end
