//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface CBAttentionTitleHeader : UIView
{
    UILabel *_titleLab;
    UIButton *_moreBtn;
}

@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 titleStr:(id)arg2 isShowMore:(_Bool)arg3;

@end

