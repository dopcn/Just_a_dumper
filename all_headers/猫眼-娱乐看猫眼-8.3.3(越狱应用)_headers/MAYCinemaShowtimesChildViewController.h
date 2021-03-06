//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "MAYCinemaViewControllerProtocol-Protocol.h"
#import "MAYFrameBasedLinearLayoutItem-Protocol.h"
#import "MAYHorizontalMovieDatePickerDelegate-Protocol.h"
#import "MAYShowtimeMoviePickerDelegate-Protocol.h"

@class MAYCell, MAYCellGroupStyleView, MAYCinemaInfo, MAYCinemaScheduleViewModel, MAYHorizontalMovieDatePicker, MAYMovieShowtimesView, MAYMovieTitleControl, MAYSchedulePromotionViewController, MAYShowTimeHeaderPromotionGroupCell, MAYShowtimeMoviePicker, NSArray, NSDictionary, NSString, NVWhiteBoard, RACSignal, UIImageView, UILabel, UIView;
@protocol MAYConfirmExitMigrateProtocol;

@interface MAYCinemaShowtimesChildViewController : MTBaseViewController <MAYHorizontalMovieDatePickerDelegate, MAYShowtimeMoviePickerDelegate, MAYFrameBasedLinearLayoutItem, MAYCinemaViewControllerProtocol>
{
    _Bool _appearCount;
    _Bool _isPopover;
    _Bool _isLoadingShowtimes;
    MAYCinemaScheduleViewModel *_viewModel;
    MAYHorizontalMovieDatePicker *_datePicker;
    MAYShowtimeMoviePicker *_moviePicker;
    MAYMovieShowtimesView *_movieShowtimesView;
    NSString *_initialDateString;
    long long _preselectMovieID;
    RACSignal *_dataLoadingSignal;
    RACSignal *_dataLoadingError;
    MAYCinemaInfo *_cinema;
    NVWhiteBoard *_whiteboard;
    NSDictionary *_URLDictionary;
    id <MAYConfirmExitMigrateProtocol> _confimExitMigrateReceiver;
    MAYSchedulePromotionViewController *_promoVC;
    UIView *_contentView;
    MAYShowTimeHeaderPromotionGroupCell *_promotionCell;
    MAYShowTimeHeaderPromotionGroupCell *_memberCardCell;
    UIImageView *_moviePickerBlurBackgroundImage;
    MAYCell *_statusCell;
    UILabel *_statusLabel;
    MAYMovieTitleControl *_movieTitleControl;
    MAYCellGroupStyleView *_datePickerCell;
    NSString *_firstValidScheduleDate;
    NSArray *_showtimeArray;
}

@property(retain, nonatomic) NSArray *showtimeArray; // @synthesize showtimeArray=_showtimeArray;
@property(nonatomic) _Bool isLoadingShowtimes; // @synthesize isLoadingShowtimes=_isLoadingShowtimes;
@property(retain, nonatomic) NSString *firstValidScheduleDate; // @synthesize firstValidScheduleDate=_firstValidScheduleDate;
@property(retain, nonatomic) MAYCellGroupStyleView *datePickerCell; // @synthesize datePickerCell=_datePickerCell;
@property(retain, nonatomic) MAYMovieTitleControl *movieTitleControl; // @synthesize movieTitleControl=_movieTitleControl;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) MAYCell *statusCell; // @synthesize statusCell=_statusCell;
@property(retain, nonatomic) UIImageView *moviePickerBlurBackgroundImage; // @synthesize moviePickerBlurBackgroundImage=_moviePickerBlurBackgroundImage;
@property(retain, nonatomic) MAYShowTimeHeaderPromotionGroupCell *memberCardCell; // @synthesize memberCardCell=_memberCardCell;
@property(retain, nonatomic) MAYShowTimeHeaderPromotionGroupCell *promotionCell; // @synthesize promotionCell=_promotionCell;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MAYSchedulePromotionViewController *promoVC; // @synthesize promoVC=_promoVC;
@property(nonatomic) __weak id <MAYConfirmExitMigrateProtocol> confimExitMigrateReceiver; // @synthesize confimExitMigrateReceiver=_confimExitMigrateReceiver;
@property(retain, nonatomic) NSDictionary *URLDictionary; // @synthesize URLDictionary=_URLDictionary;
@property(retain, nonatomic) NVWhiteBoard *whiteboard; // @synthesize whiteboard=_whiteboard;
@property(retain, nonatomic) MAYCinemaInfo *cinema; // @synthesize cinema=_cinema;
@property(retain, nonatomic) RACSignal *dataLoadingError; // @synthesize dataLoadingError=_dataLoadingError;
@property(retain, nonatomic) RACSignal *dataLoadingSignal; // @synthesize dataLoadingSignal=_dataLoadingSignal;
@property(nonatomic) long long preselectMovieID; // @synthesize preselectMovieID=_preselectMovieID;
@property(copy, nonatomic) NSString *initialDateString; // @synthesize initialDateString=_initialDateString;
@property(nonatomic) _Bool isPopover; // @synthesize isPopover=_isPopover;
@property(readonly, nonatomic) MAYMovieShowtimesView *movieShowtimesView; // @synthesize movieShowtimesView=_movieShowtimesView;
@property(retain, nonatomic) MAYShowtimeMoviePicker *moviePicker; // @synthesize moviePicker=_moviePicker;
@property(retain, nonatomic) MAYHorizontalMovieDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) MAYCinemaScheduleViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)showtimeMoviePicker:(id)arg1 updateHeight:(double)arg2;
- (void)showtimeMoviePicker:(id)arg1 didTapMovie:(id)arg2;
- (void)datePicker:(id)arg1 didSelectedDate:(id)arg2;
- (void)didClickTipsButton;
- (void)showStatusCell:(_Bool)arg1;
- (void)shareSchedule:(id)arg1;
- (void)transferToMovieDetail:(id)arg1;
- (void)updateMovieShowtimesViewWithMovie:(id)arg1 onDate:(id)arg2;
- (void)updateDatePickerWithMovie:(id)arg1;
- (void)updateMovieTitleControlWithMovie:(id)arg1;
- (void)configureHeaderPromotionCellWithMovie:(id)arg1 dateString:(id)arg2;
- (void)loadMovieShowtimesView;
- (void)loadDatePicker;
- (void)didTapMovieTitle;
- (void)loadMovieTitleControl;
- (void)loadMoviePicker;
- (void)loadStatusCell;
- (void)loadMemberCardCell;
- (void)loadHeaderPromotionCell;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)forceRefresh;
- (_Bool)refreshUI;
- (_Bool)isDataLoaded;
- (void)updateViewHeight;
- (void)setupContentViewConstraint;
- (void)viewDidLoad;
- (void)updateCinemaSchedule;
- (void)setViewModelSomeInfoFromURLDictionary;
- (id)initWithCinema:(id)arg1;
- (void)signin:(CDUnknownBlockType)arg1;
- (void)transferToMovieDetail:(id)arg1;
- (void)reserveTicket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

