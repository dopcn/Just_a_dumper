//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormCell.h"

@class CCBButton, CCBLabel, CCBView;
@protocol CCB_5_PayAccountListCardNoCellDelegate;

@interface CCB_5_PayAccountListCardNoCell : CCBFormCell
{
    id <CCB_5_PayAccountListCardNoCellDelegate> _searchDelegate;
    CCBLabel *_cardNo;
    CCBView *_whiteSeparator;
    CCBButton *_search;
}

+ (double)cellHeightForFormItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) CCBButton *search; // @synthesize search=_search;
@property(retain, nonatomic) CCBView *whiteSeparator; // @synthesize whiteSeparator=_whiteSeparator;
@property(retain, nonatomic) CCBLabel *cardNo; // @synthesize cardNo=_cardNo;
@property(retain, nonatomic) id <CCB_5_PayAccountListCardNoCellDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (void)setFormItem:(id)arg1;
- (void)btnTapHandler:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

