//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NLPayMainViewCell.h"

@interface NLPayMainTransactionHistoryCell : NLPayMainViewCell
{
    struct UIEdgeInsets _contentInset;
}

+ (id)detailTextLabelFont;
+ (id)textLabelFont;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct UIEdgeInsets)layoutMargins;
- (void)updateCellWithInfo:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 layout:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

