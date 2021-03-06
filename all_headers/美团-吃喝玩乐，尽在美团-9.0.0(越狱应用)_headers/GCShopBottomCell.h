//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class RACSignal, UIButton, UIImageView, UILabel, UIView;

@interface GCShopBottomCell : UITableViewCell
{
    RACSignal *_signalForTapPhone;
    RACSignal *_signalForTapConsult;
    UIButton *_buttonForPhone;
    UIButton *_buttonForConsult;
    UIImageView *_imageViewForPhoneIcon;
    UILabel *_labelForPhone;
    UIImageView *_imageViewForConsultIcon;
    UILabel *_labelForConsult;
    UIView *_seperatorLine;
}

@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UILabel *labelForConsult; // @synthesize labelForConsult=_labelForConsult;
@property(retain, nonatomic) UIImageView *imageViewForConsultIcon; // @synthesize imageViewForConsultIcon=_imageViewForConsultIcon;
@property(retain, nonatomic) UILabel *labelForPhone; // @synthesize labelForPhone=_labelForPhone;
@property(retain, nonatomic) UIImageView *imageViewForPhoneIcon; // @synthesize imageViewForPhoneIcon=_imageViewForPhoneIcon;
@property(retain, nonatomic) UIButton *buttonForConsult; // @synthesize buttonForConsult=_buttonForConsult;
@property(retain, nonatomic) UIButton *buttonForPhone; // @synthesize buttonForPhone=_buttonForPhone;
@property(readonly, nonatomic) RACSignal *signalForTapConsult; // @synthesize signalForTapConsult=_signalForTapConsult;
@property(readonly, nonatomic) RACSignal *signalForTapPhone; // @synthesize signalForTapPhone=_signalForTapPhone;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initialize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

