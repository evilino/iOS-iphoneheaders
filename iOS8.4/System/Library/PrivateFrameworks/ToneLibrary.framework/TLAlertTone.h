/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, TLSound;

@interface TLAlertTone : NSObject {

	NSString* _filePath;
	TLSound* _actualSound;
	TLSound* _previewSound;

}

@property (nonatomic,copy) NSString * filePath;                   //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) TLSound * actualSound;               //@synthesize actualSound=_actualSound - In the implementation block
@property (nonatomic,retain) TLSound * previewSound;              //@synthesize previewSound=_previewSound - In the implementation block
-(void)dealloc;
-(NSString *)filePath;
-(id)initWithFilePath:(id)arg1 actualSoundID:(unsigned)arg2 previewSoundID:(unsigned)arg3 ;
-(TLSound *)actualSound;
-(TLSound *)previewSound;
-(void)_setFilePath:(id)arg1 ;
-(void)_setActualSound:(id)arg1 ;
-(void)_setPreviewSound:(id)arg1 ;
@end

