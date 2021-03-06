/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/NSCopying.h>

@class NSMutableDictionary, NSString, NSNumber;

@interface MLMovieArtist : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSNumber * ITunesStoreIdentifier; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithMovieArtistDictionary:(id)arg1 ;
-(NSString *)artistName;
-(NSNumber *)ITunesStoreIdentifier;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setITunesStoreIdentifier:(NSNumber *)arg1 ;
-(id)copyMovieArtistDictionary;
@end

