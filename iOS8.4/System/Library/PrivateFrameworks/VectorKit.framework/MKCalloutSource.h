/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, UIView;


@protocol MKCalloutSource <NSObject>
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,retain,readonly) UIView * leftCalloutAccessoryView; 
@property (nonatomic,retain,readonly) UIView * rightCalloutAccessoryView; 
@property (nonatomic,retain,readonly) UIView * detailCalloutAccessoryView; 
@optional
-(UIView *)leftCalloutAccessoryView;
-(UIView *)rightCalloutAccessoryView;
-(UIView *)detailCalloutAccessoryView;
-(NSString *)subtitle;

@required
-(id)title;
-(CGPoint*)calloutAnchorPointWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(BOOL)arg3;
-(CGPoint*)screenPointToScrollRelativeToWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2;
-(id)debugAnchorPointString;

@end
