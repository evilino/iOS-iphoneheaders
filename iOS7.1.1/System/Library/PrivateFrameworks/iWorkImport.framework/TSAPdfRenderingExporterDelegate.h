/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSARenderingExporterDelegate.h>

@class TSARenderingExporter, NSString;

@interface TSAPdfRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {

	TSARenderingExporter* mRenderingExporter;
	NSString* mPassphraseOpen;
	NSString* mPassphrasePrintCopy;
	bool mRequireOpenPassword;
	bool mRequireCopyPassword;
	bool mRequirePrintPassword;
	int mRenderingQuality;

}
-(void)setPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setPrintPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setCopyPassphrase:(id)arg1 hint:(id)arg2 ;
-(double)viewScale;
-(CGContextRef)newCGContextForURL:(id)arg1 ;
-(void)releaseCGContext:(CGContextRef)arg1 ;
-(bool)supportsPaging;
-(bool)supportsRenderingQuality;
-(int)renderingQuality;
-(id)initWithRenderingExporter:(id)arg1 ;
-(void)setRenderingQuality:(int)arg1 ;
-(void)dealloc;
-(void)teardown;
-(void)setup;
@end
