//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKCell.h"

@class UILabel, UIView;

@interface TWIPOIInfoCell : SAKCell
{
    UILabel *_titleLabel;
    UIView *_separatorLineView;
}

@property(readonly, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setTitleOrInfo:(id)arg1;
- (void)setTitle:(id)arg1 info:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

