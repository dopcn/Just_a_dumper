//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPhoneCardBaseCell.h"

@class PosterImageView, UIButton, UIControl, UILabel;

@interface QYUMovieTicketListCardCell : QYUPhoneCardBaseCell
{
    PosterImageView *_posterMovie;
    UILabel *_labelTitle;
    UILabel *_labelSubtitle1;
    UILabel *_labelSubtitle2;
    UILabel *_labelSubtitle3;
    UILabel *_labelSubtitle4;
    UILabel *_labelSubtitle5;
    UIControl *_controlClick;
    UIButton *_buttonBuy;
}

+ (id)getCellObjByContainer:(id)arg1 andIndex:(long long)arg2;
+ (long long)getLinesByCardData:(id)arg1 andShowNum:(long long)arg2;
+ (void)load;
- (void).cxx_destruct;
- (void)setCellModel:(id)arg1;
- (void)onBackgroundClick;
- (void)onButtonClick;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

