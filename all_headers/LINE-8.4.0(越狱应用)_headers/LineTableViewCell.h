//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UIView;

@interface LineTableViewCell : UITableViewCell
{
    unsigned long long state_;
    UIView *_separatorView;
    _Bool isLastCell;
    UIColor *_separatorColor;
    struct UIEdgeInsets _separatorInsets;
}

@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) struct UIEdgeInsets separatorInsets; // @synthesize separatorInsets=_separatorInsets;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell;
- (void).cxx_destruct;
@property(nonatomic) _Bool separatorHidden;
@property(readonly, nonatomic) double accessoryViewOriginX;
@property(readonly, nonatomic) _Bool existAccessoryView;
- (double)leftEditOffset;
@property(readonly, nonatomic) UIView *deleteConfirmationControl;
@property(readonly, nonatomic) _Bool tableEditing;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)layoutSeparatorView;
- (void)layoutSubviews;
- (void)setupSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

