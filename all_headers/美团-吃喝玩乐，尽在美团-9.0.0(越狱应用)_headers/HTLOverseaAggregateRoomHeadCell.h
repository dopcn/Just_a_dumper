//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseHeaderFooterView.h"

@class HTLAggregateRoomPhotosView, HTLOverseaPromoLabelView, HTLOverseaRoomHeadViewModel, NVLineView, RACSignal, UIButton, UIImageView, UILabel;

@interface HTLOverseaAggregateRoomHeadCell : GCBaseHeaderFooterView
{
    _Bool _isExpandState;
    _Bool _needBottomLine;
    _Bool _showImage;
    long long _poiID;
    RACSignal *_signalForTap;
    HTLAggregateRoomPhotosView *_roomImageView;
    UILabel *_nameLabel;
    UILabel *_roomCellDescLabel;
    UILabel *_basicPriceLabel;
    UILabel *_roomFullLabel;
    UILabel *_promptLabel;
    UIImageView *_accessoryImageView;
    UILabel *_priceLabel;
    UIButton *_buttonForTap;
    NVLineView *_lineForBottom;
    NVLineView *_lineForTop;
    HTLOverseaPromoLabelView *_promoLabelView;
    HTLOverseaRoomHeadViewModel *_viewModel;
}

+ (id)viewReuseId:(id)arg1;
+ (double)viewHeight:(id)arg1;
@property(nonatomic) _Bool showImage; // @synthesize showImage=_showImage;
@property(nonatomic) _Bool needBottomLine; // @synthesize needBottomLine=_needBottomLine;
@property(retain, nonatomic) HTLOverseaRoomHeadViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) HTLOverseaPromoLabelView *promoLabelView; // @synthesize promoLabelView=_promoLabelView;
@property(retain, nonatomic) NVLineView *lineForTop; // @synthesize lineForTop=_lineForTop;
@property(retain, nonatomic) NVLineView *lineForBottom; // @synthesize lineForBottom=_lineForBottom;
@property(retain, nonatomic) UIButton *buttonForTap; // @synthesize buttonForTap=_buttonForTap;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) UILabel *roomFullLabel; // @synthesize roomFullLabel=_roomFullLabel;
@property(retain, nonatomic) UILabel *basicPriceLabel; // @synthesize basicPriceLabel=_basicPriceLabel;
@property(retain, nonatomic) UILabel *roomCellDescLabel; // @synthesize roomCellDescLabel=_roomCellDescLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) HTLAggregateRoomPhotosView *roomImageView; // @synthesize roomImageView=_roomImageView;
@property(readonly, nonatomic) RACSignal *signalForTap; // @synthesize signalForTap=_signalForTap;
@property(nonatomic) long long poiID; // @synthesize poiID=_poiID;
@property(nonatomic) _Bool isExpandState; // @synthesize isExpandState=_isExpandState;
- (void).cxx_destruct;
- (double)calculateCellHeight:(id)arg1;
- (void)handleRoomImageViewHidden;
- (void)updateRightSubViewsFrame;
- (void)updateSubViewsFrame;
- (void)setFrameForSubviews;
- (void)initialize;
- (void)configAccessibilityLabel;
- (void)updateUIWithOverseaAggregateRoomViewModel:(id)arg1;
- (void)setData:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

