/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <MobileCal/EKDayViewContentDelegate.h>
#import <MobileCal/WeekAllDayViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileCal/EKCurrentTimeMarkerViewUpdating.h>

@protocol WeekViewDataSource, WeekViewDelegate;
@class WeekAllDayView, EKDayViewContent, UIScrollView, UIImageView, UIImage, CalendarOccurrencesCollection, NSDateComponents, NSCalendar, NSDate, NSTimeZone, NSString;

@interface WeekView : UIView <EKDayViewContentDelegate, WeekAllDayViewDelegate, UIScrollViewDelegate, EKCurrentTimeMarkerViewUpdating> {

	WeekAllDayView* _allDayView;
	EKDayViewContent* _content;
	UIScrollView* _scrollView;
	UIImageView* _gridExtensionView;
	int _daysToDisplay;
	UIImage* _verticalGridExtensionImage;
	CalendarOccurrencesCollection* _events;
	int _selectedSecond;
	id<WeekViewDataSource> _dataSource;
	id<WeekViewDelegate> _delegate;
	NSDateComponents* _weekStartDate;
	NSCalendar* _calendar;
	int _orientation;
	float _hourHeightScale;

}

@property (assign,nonatomic,__weak) id<WeekViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<WeekViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDateComponents * weekStartDate;                        //@synthesize weekStartDate=_weekStartDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * lastDateOfWeek; 
@property (nonatomic,readonly) NSDate * lastSecondOfWeek; 
@property (nonatomic,copy) NSCalendar * calendar;                                   //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (nonatomic,readonly) char hasAllDayEvents; 
@property (assign,nonatomic) int orientation;                                       //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) float hourHeightScale;                                 //@synthesize hourHeightScale=_hourHeightScale - In the implementation block
@property (nonatomic,readonly) WeekAllDayView * allDayView;                         //@synthesize allDayView=_allDayView - In the implementation block
@property (nonatomic,readonly) EKDayViewContent * content;                          //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                           //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) char showsTimeMarker; 
@property (assign,nonatomic) int firstVisibleSecond; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)dayWidthForOrientation:(int)arg1 ;
+(float)standardWidthForOrientation:(int)arg1 ;
+(char)isWideScreen;
-(id)weekAllDayViewForTimeframeBefore:(id)arg1 ;
-(id)weekAllDayViewForTimeframeAfter:(id)arg1 ;
-(void)weekAllDayViewDidScroll:(id)arg1 ;
-(void)weekAllDayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)weekAllDayViewEmptySpaceClick:(id)arg1 onDay:(double)arg2 ;
-(void)showOverlayMonthInCellAtOffset:(float)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 orientation:(int)arg2 daysToDisplay:(int)arg3 ;
-(void)scrollToSecond:(int)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateTimeMarkerDotDay;
-(NSDateComponents *)weekStartDate;
-(NSDateComponents *)lastDateOfWeek;
-(NSDate *)lastSecondOfWeek;
-(id)viewForEvent:(id)arg1 ;
-(id)_verticalGridExtensionImage;
-(id)dateForXOffset:(float)arg1 ;
-(void)setWeekStartDate:(NSDateComponents *)arg1 ;
-(void)adjustForVisibleRect:(CGRect)arg1 ;
-(void)updateTimeMarkerForDayChange;
-(char)hasAllDayEvents;
-(id)_createOccurrenceView:(id)arg1 ;
-(void)scrollToEvent:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)isAnimatingScroll;
-(float)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2 ;
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2 ;
-(void)setShowsTimeMarker:(char)arg1 ;
-(void)setFirstVisibleSecond:(int)arg1 ;
-(float)_verticalOffset;
-(void)updateMarkerPosition;
-(char)showsTimeMarker;
-(int)_secondAtPosition:(float)arg1 ;
-(int)firstVisibleSecond;
-(float)_positionOfSecond:(int)arg1 ;
-(void)setHourHeightScale:(float)arg1 ;
-(WeekAllDayView *)allDayView;
-(CGPoint)pointAtDate:(id)arg1 isAllDay:(char)arg2 ;
-(char)scrollTowardPoint:(CGPoint)arg1 ;
-(void)addViewToScroller:(id)arg1 isAllDay:(char)arg2 ;
-(void)_showWeekNumbersPreferenceChanged:(id)arg1 ;
-(float)hourHeightScale;
-(char)containsDate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id<WeekViewDataSource>)arg1 ;
-(void)setDelegate:(id<WeekViewDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<WeekViewDataSource>)dataSource;
-(id<WeekViewDelegate>)delegate;
-(int)orientation;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setOrientation:(int)arg1 ;
-(EKDayViewContent *)content;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSCalendar *)calendar;
@end
