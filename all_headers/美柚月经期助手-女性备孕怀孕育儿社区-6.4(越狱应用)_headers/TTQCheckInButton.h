//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableAttributedString;

@interface TTQCheckInButton : UIButton
{
    _Bool _hasAd;
    _Bool _bFromCoder;
    NSMutableAttributedString *_checkInTitle;
    NSMutableAttributedString *_highCheckInTitle;
}

@property(retain, nonatomic) NSMutableAttributedString *highCheckInTitle; // @synthesize highCheckInTitle=_highCheckInTitle;
@property(retain, nonatomic) NSMutableAttributedString *checkInTitle; // @synthesize checkInTitle=_checkInTitle;
@property(nonatomic) _Bool bFromCoder; // @synthesize bFromCoder=_bFromCoder;
@property(nonatomic) _Bool hasAd; // @synthesize hasAd=_hasAd;
- (void).cxx_destruct;
- (void)setupCheckInButton;
- (void)setHighlighted:(_Bool)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)startInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

