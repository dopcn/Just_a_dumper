//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;

@interface JDOrderCellFooter : JDView <UIGestureRecognizerDelegate>
{
    double footerHeight;
    NSString *promotionUrl;
    NSString *paramValue;
}

@property(nonatomic) double footerHeight; // @synthesize footerHeight;
- (void).cxx_destruct;
- (void)dealloc;
- (void)promotionViewTapped:(id)arg1;
- (double)getFooterHeight;
- (double)getJingdouHeight:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 promotionInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

