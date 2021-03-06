//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

@class NSMutableArray, UIButton, UIColor;
@protocol NMWeekendScopeViewDelegate;

@interface NMWeekendScopeView : LTMBaseView
{
    UIButton *_selectButton;
    NSMutableArray *_buttons;
    long long _buttonCount;
    _Bool _stable;
    long long _visibleCount;
    id <NMWeekendScopeViewDelegate> _delegate;
    UIColor *_seplineColor;
    long long _selectIndex;
}

@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) UIColor *seplineColor; // @synthesize seplineColor=_seplineColor;
@property(nonatomic) __weak id <NMWeekendScopeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)creatButtonWithTitle:(id)arg1 index:(long long)arg2;
- (struct CGRect)frameForIndex:(long long)arg1;
- (void)adjustImageForButton:(id)arg1;
- (void)updateWithTitles:(id)arg1 resetFrame:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 stableCount:(long long)arg2;
- (id)initWithTitles:(id)arg1 frame:(struct CGRect)arg2;
- (void)cancelSelect;
- (void)buttonAction:(id)arg1;
- (void)setButtonsFromArray:(id)arg1;
- (void)clearAllButton;
- (id)initWithDicInfos:(id)arg1 frame:(struct CGRect)arg2;

@end

