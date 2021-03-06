//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView;

@interface NMWeekendLoveCell : UITableViewCell
{
    UILabel *_dayLabel;
    UILabel *_monthLabel;
    UILabel *_weekLabel;
    UIImageView *_preview;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIView *_topLine;
    UIView *_botLine;
    UIView *_bgView;
    id _delegate;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateWithData:(id)arg1;
- (void)layoutSubviews;
- (void)closeAction;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

