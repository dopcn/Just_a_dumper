//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

@class NMGroupBuyingFloorView, UIButton, UILabel, UIView;

@interface NMGroupBuyingSeckillView : LTMBaseView
{
    NMGroupBuyingFloorView *_picFloorView;
    UILabel *_soldOutLabel;
    UILabel *_nameLabel;
    UILabel *_presentPriceLabel;
    UILabel *_originalPriceLabel;
    UIButton *_buyButton;
    UIView *_blackView;
    UILabel *_lineLabel;
    UIButton *_bgButton;
}

@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
@property(retain, nonatomic) UIView *blackView; // @synthesize blackView=_blackView;
@property(retain, nonatomic) UIButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) UILabel *originalPriceLabel; // @synthesize originalPriceLabel=_originalPriceLabel;
@property(retain, nonatomic) UILabel *presentPriceLabel; // @synthesize presentPriceLabel=_presentPriceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *soldOutLabel; // @synthesize soldOutLabel=_soldOutLabel;
@property(retain, nonatomic) NMGroupBuyingFloorView *picFloorView; // @synthesize picFloorView=_picFloorView;
- (void).cxx_destruct;
- (void)setSeckillViewData:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

