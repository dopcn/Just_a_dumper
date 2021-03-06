//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTKViewModel.h"

@class NSString, TTKTrainPromotionInfo;

@interface TTKTrainPromotionInfoItem : HTKViewModel
{
    _Bool _promotionChangeable;
    _Bool _isSelectPromotion;
    _Bool _canOrderChannelMatch;
    _Bool _canOrderSumOfMoneyMatch;
    TTKTrainPromotionInfo *_promotionInfo;
    NSString *_promotionLabel;
    NSString *_promotionTitle;
    NSString *_promotionRule;
}

@property(nonatomic) _Bool canOrderSumOfMoneyMatch; // @synthesize canOrderSumOfMoneyMatch=_canOrderSumOfMoneyMatch;
@property(nonatomic) _Bool canOrderChannelMatch; // @synthesize canOrderChannelMatch=_canOrderChannelMatch;
@property(nonatomic) _Bool isSelectPromotion; // @synthesize isSelectPromotion=_isSelectPromotion;
@property(nonatomic) _Bool promotionChangeable; // @synthesize promotionChangeable=_promotionChangeable;
@property(retain, nonatomic) NSString *promotionRule; // @synthesize promotionRule=_promotionRule;
@property(retain, nonatomic) NSString *promotionTitle; // @synthesize promotionTitle=_promotionTitle;
@property(retain, nonatomic) NSString *promotionLabel; // @synthesize promotionLabel=_promotionLabel;
@property(retain, nonatomic) TTKTrainPromotionInfo *promotionInfo; // @synthesize promotionInfo=_promotionInfo;
- (void).cxx_destruct;
- (void)bindSignal;
- (id)initWithMessageBus:(id)arg1;

@end

