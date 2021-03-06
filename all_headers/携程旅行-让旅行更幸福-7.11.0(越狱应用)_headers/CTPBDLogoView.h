//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CTVectorImageView, NSString, UIFont, UILabel;

@interface CTPBDLogoView : UIView
{
    CTVectorImageView *_bdLogoImageView;
    UILabel *_noticeLabel;
    NSString *_noticeString;
    UIFont *_noticeFont;
}

@property(retain, nonatomic) UIFont *noticeFont; // @synthesize noticeFont=_noticeFont;
@property(retain, nonatomic) NSString *noticeString; // @synthesize noticeString=_noticeString;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) CTVectorImageView *bdLogoImageView; // @synthesize bdLogoImageView=_bdLogoImageView;
- (void).cxx_destruct;
- (_Bool)noticeStringIsOneLine;
- (double)realPadding:(double)arg1;
- (void)stepSubviews;
- (id)initWithFrame:(struct CGRect)arg1 noticeInfo:(id)arg2 noticeFont:(id)arg3;

@end

