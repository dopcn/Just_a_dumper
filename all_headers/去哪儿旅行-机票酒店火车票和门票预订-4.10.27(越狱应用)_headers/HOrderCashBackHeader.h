//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HotelCellProtocol-Protocol.h"

@class HOrderCashBackGuideResult, LineView, NSString, UILabel;

@interface HOrderCashBackHeader : UIView <HotelCellProtocol>
{
    UILabel *_labelHeader;
    UILabel *_labelHint;
    LineView *_lineLeft;
    LineView *_lineRight;
    HOrderCashBackGuideResult *_result;
}

@property(retain, nonatomic) HOrderCashBackGuideResult *result; // @synthesize result=_result;
@property(retain, nonatomic) LineView *lineRight; // @synthesize lineRight=_lineRight;
@property(retain, nonatomic) LineView *lineLeft; // @synthesize lineLeft=_lineLeft;
@property(retain, nonatomic) UILabel *labelHint; // @synthesize labelHint=_labelHint;
@property(retain, nonatomic) UILabel *labelHeader; // @synthesize labelHeader=_labelHeader;
- (void).cxx_destruct;
- (void)configCellWithData:(id)arg1;
- (void)setUpConstraints;
- (void)initSubView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

