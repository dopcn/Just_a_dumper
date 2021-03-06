//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel;

@interface TRWLFeeCell : UITableViewCell
{
    CDUnknownBlockType _click;
    UILabel *_titleLbl;
    UILabel *_numLbl;
    UIImageView *_lineView;
    UIButton *_iconView;
}

@property(retain, nonatomic) UIButton *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *numLbl; // @synthesize numLbl=_numLbl;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(copy, nonatomic) CDUnknownBlockType click; // @synthesize click=_click;
- (void).cxx_destruct;
- (void)tapAction:(id)arg1;
- (void)loadSecTitle:(id)arg1 numStr:(id)arg2 color:(id)arg3;
- (void)loadContentTitle:(id)arg1 numStr:(id)arg2 color:(id)arg3 icon:(id)arg4;
- (void)loadContentTitle:(id)arg1 numStr:(id)arg2 color:(id)arg3;
- (void)loadPayFeeContentTitle:(id)arg1 numStr:(id)arg2 color:(id)arg3;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

