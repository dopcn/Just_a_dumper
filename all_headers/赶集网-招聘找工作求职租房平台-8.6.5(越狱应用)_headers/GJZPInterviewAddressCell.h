//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface GJZPInterviewAddressCell : UITableViewCell
{
    _Bool _canEdit;
    UILabel *_addressLB;
    UILabel *_phoneLB;
    UILabel *_statusLB;
    UIView *_leftStatusView;
    UIImageView *_accView;
}

@property(retain, nonatomic) UIImageView *accView; // @synthesize accView=_accView;
@property(retain, nonatomic) UIView *leftStatusView; // @synthesize leftStatusView=_leftStatusView;
@property(retain, nonatomic) UILabel *statusLB; // @synthesize statusLB=_statusLB;
@property(retain, nonatomic) UILabel *phoneLB; // @synthesize phoneLB=_phoneLB;
@property(retain, nonatomic) UILabel *addressLB; // @synthesize addressLB=_addressLB;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
- (void).cxx_destruct;
- (struct CGSize)getLabelWidthWithText:(id)arg1 withLabelWidth:(double)arg2;
- (id)getStatusLabelWithTextStr:(id)arg1;
- (void)configureData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

