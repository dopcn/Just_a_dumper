//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HDetailRootCellView.h"

@class HDetailLoadErrorViewModel, UILabel;

@interface HDetailLoadErrorCell : HDetailRootCellView
{
    HDetailLoadErrorViewModel *_viewModel;
    UILabel *_titleHintLabel;
}

@property(retain, nonatomic) UILabel *titleHintLabel; // @synthesize titleHintLabel=_titleHintLabel;
@property(retain, nonatomic) HDetailLoadErrorViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)setupCellViewWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

