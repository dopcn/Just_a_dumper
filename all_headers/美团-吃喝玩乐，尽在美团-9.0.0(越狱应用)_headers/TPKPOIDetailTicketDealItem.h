//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKPOIDetailBaseDealItem.h"

@class NSString, NSURL, TPKPOIDetailTicketCellPriceContentViewModel, UIImage;

@interface TPKPOIDetailTicketDealItem : TPKPOIDetailBaseDealItem
{
    _Bool _shouldHandleHotButtonClick;
    _Bool _showTopShadow;
    _Bool _showBottomShadow;
    TPKPOIDetailTicketCellPriceContentViewModel *_priceContentViewModel;
    NSURL *_specialTagIconUrl;
    NSString *_hotButtonText;
    UIImage *_hotButtonNormalBackgroundImage;
    UIImage *_hotButtonHighlightedBackgroundImage;
    unsigned long long _hotButtonType;
}

@property(nonatomic) _Bool showBottomShadow; // @synthesize showBottomShadow=_showBottomShadow;
@property(nonatomic) _Bool showTopShadow; // @synthesize showTopShadow=_showTopShadow;
@property(nonatomic) unsigned long long hotButtonType; // @synthesize hotButtonType=_hotButtonType;
@property(nonatomic) _Bool shouldHandleHotButtonClick; // @synthesize shouldHandleHotButtonClick=_shouldHandleHotButtonClick;
@property(retain, nonatomic) UIImage *hotButtonHighlightedBackgroundImage; // @synthesize hotButtonHighlightedBackgroundImage=_hotButtonHighlightedBackgroundImage;
@property(retain, nonatomic) UIImage *hotButtonNormalBackgroundImage; // @synthesize hotButtonNormalBackgroundImage=_hotButtonNormalBackgroundImage;
@property(copy, nonatomic) NSString *hotButtonText; // @synthesize hotButtonText=_hotButtonText;
@property(copy, nonatomic) NSURL *specialTagIconUrl; // @synthesize specialTagIconUrl=_specialTagIconUrl;
@property(readonly, nonatomic) TPKPOIDetailTicketCellPriceContentViewModel *priceContentViewModel; // @synthesize priceContentViewModel=_priceContentViewModel;
- (void).cxx_destruct;
- (void)didClickPurchaseWithSourceViewController:(id)arg1 poiId:(long long)arg2;
- (void)didSelectTicketCellWithSourceViewController:(id)arg1 whiteBoard:(id)arg2 poiId:(long long)arg3;
- (id)titleColor;
- (id)initWithDeal:(id)arg1 titleColor:(id)arg2;

@end

