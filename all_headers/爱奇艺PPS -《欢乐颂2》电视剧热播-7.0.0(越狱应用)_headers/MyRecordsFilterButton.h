//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MyRecordsFilterButton : UIView
{
    _Bool _isEnabled;
    _Bool _isFiltered;
    UIImageView *_iconView;
    UILabel *_desLabel;
}

@property(nonatomic) _Bool isFiltered; // @synthesize isFiltered=_isFiltered;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (void)setIsFiltered:(_Bool)arg1 needAction:(_Bool)arg2;
- (void)tap:(id)arg1;
- (void)setupConstraints;
- (void)initSubviews;
- (void)setupSelf;
- (id)initWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

