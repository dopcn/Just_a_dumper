//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PDSTagView, UIImageView, UILabel;

@interface PDLiveCityThumbView : UIView
{
    UIImageView *_bgView;
    UIImageView *_iconPlay;
    UILabel *_lblPosition;
    UIImageView *_iconLBS;
    PDSTagView *_levelView;
    UIImageView *_avatarView;
}

@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)refreshRoom:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

