//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "CTFlightTouchLabelDelegate-Protocol.h"

@class CTDashLineView, CTFlightRadioView, NSLayoutConstraint, NSString;

@interface CTFlightReimbursementVouchersCell : UITableViewCell <CTFlightTouchLabelDelegate>
{
    _Bool _isNewStyle;
    CTFlightRadioView *_backView;
    CTDashLineView *_dashLineView;
    NSLayoutConstraint *_backViewCons_Height;
    NSLayoutConstraint *_backViewLeadingConstraint;
    NSLayoutConstraint *_backViewTailingConstraint;
}

+ (id)itemModelListWithModel:(id)arg1;
+ (_Bool)needToAdd:(id)arg1;
+ (id)gettReimbursementVouchersText:(id)arg1;
+ (double)countCellHeightWithViewModel:(id)arg1;
@property(nonatomic) _Bool isNewStyle; // @synthesize isNewStyle=_isNewStyle;
@property(nonatomic) __weak NSLayoutConstraint *backViewTailingConstraint; // @synthesize backViewTailingConstraint=_backViewTailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *backViewLeadingConstraint; // @synthesize backViewLeadingConstraint=_backViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *backViewCons_Height; // @synthesize backViewCons_Height=_backViewCons_Height;
@property(nonatomic) __weak CTDashLineView *dashLineView; // @synthesize dashLineView=_dashLineView;
@property(retain, nonatomic) CTFlightRadioView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)touchLabelForKey:(id)arg1;
- (void)setReimbursementVouchersTextWithModel:(id)arg1 isInland:(_Bool)arg2 isNewStyle:(_Bool)arg3;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

